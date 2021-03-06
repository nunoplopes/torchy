# Copyright (c) 2021-present The Torchy Authors.
# Distributed under the MIT license that can be found in the LICENSE file.

PYTORCH = '../pytorch'

from typings_data import *
import sys
sys.path.append(PYTORCH)
from tools.codegen.gen import *
from tools.codegen.api import types

yaml_path = PYTORCH + '/aten/src/ATen/native/native_functions.yaml'
native_functions = parse_native_yaml(yaml_path)

@with_native_function
def skip_fn(fn):
  allowed_ret_types = {
    'at::Tensor',
    'at::Tensor &',
    'const at::Tensor &',
  }
  dispatcher_sig = DispatcherSignature.from_schema(fn.func)
  rettype = dispatcher_sig.returns_type().cpp_type()
  if rettype not in allowed_ret_types:
    return True

  # TODO: benchmark if we really want to skip these
  # plus check if we want to skip is_generic_dispatch_key(key) as well
  # as those don't have real kernels, just autograd
  return not any(d.has_kernel(fn) for d in native_functions.backend_indices.values())

def wrapper_name(fn):
  return 'wrap_' + str(fn.func.name).replace('.', '_')

def fn_enum(fn):
  return 'H_' + str(fn.func.name).replace('.', '_').upper()

def get_arg_of_type(args, type):
  for arg in args:
    if arg.type.cpp_type(strip_ref=True) == type:
      return arg
  return None

def maybe_tensor(type):
  types = {
    'at::Tensor',
    'at::TensorList',
    'c10::List<c10::optional<at::Tensor>>',
    'c10::optional<at::Tensor>',
  }
  return type.remove_const_ref().cpp_type() in types

def to_scalar_type(v):
  ty = v.type.remove_const_ref().cpp_type()
  if ty == 'at::Tensor':
    return f'{v.expr}.dtype().toScalarType()'
  if ty == 'c10::optional<at::ScalarType>':
    return f'{v.expr}.value_or(ScalarType::Undefined)'
  print('to_scalar_type', ty)
  exit(-1)

def is_type_arg(arg):
  type = arg.type.cpp_type()
  dispatch_types = [
    'at::ScalarType',
    'const c10::optional<at::Scalar> &',
    'c10::optional<at::ScalarType>',
  ]
  return 'Tensor' in type or type in dispatch_types

def to_dtype(arg):
  type = arg.type.cpp_type()
  if type == 'at::ScalarType':
    return arg.expr
  return f'{arg.expr}.dtype()'


def mk_dtype_infer(type, all_args):
  args = [arg for arg in all_args if is_type_arg(arg)]

  if type[0:3] == 'ALL':
    return f'k{type[4:]}'
  if type == 'BOOL2INT':
    return f'bool_to_int({args[0].expr}.dtype().toScalarType())'
  if type == 'EQ_PROMOTED':
    return f'promote_tys({", ".join(t.expr for t in args)})'
  if type == 'EQ_PROMOTED_BUGGY':
    return f'promote_buggy({", ".join(t.expr for t in args)})'
  if type == 'EQ_PROMOTED_CONST':
    return f'promote_const({", ".join(t.expr for t in args)})'
  if type == 'EQ_SECOND':
    return to_dtype(args[1])
  if type == 'EQ_THIRD':
    return to_dtype(args[2])
  if type == 'EQ_FOURTH':
    return to_dtype(args[3])
  if type == 'BOOLBYTE':
    return f'bool_byte({args[0].expr}.dtype().toScalarType())'
  if type == 'BOOL2INT':
    return f'bool_to_int({args[0].expr}.dtype().toScalarType())'
  if type == 'BOOL2INT2':
    return f'bool_to_int2({args[0].expr}, {args[1].expr})'
  if type == 'INTEGRAL2INT':
    return f'integrals_to_int({args[0].expr}.dtype().toScalarType())'
  if type == 'TO_COMPLEX':
    return f'to_complex({args[0].expr}.dtype().toScalarType())'
  if type == 'TO_DOUBLE':
    return f'to_double({args[0].expr}.dtype().toScalarType())'
  if type == 'TO_DOUBLE2':
    return f'to_double2({args[0].expr}.dtype().toScalarType(), {args[1].expr}.dtype().toScalarType())'
  if type == 'TO_FLOAT':
    return f'to_float({args[0].expr}.dtype().toScalarType())'
  if type == 'TO_FLOAT_DOUBLE':
    return f'to_float_double({args[0].expr}.dtype().toScalarType())'
  if type == 'TO_FLOAT2':
    return f'to_float2({args[0].expr}, {args[1].expr})'
  if type == 'TO_FLOAT3':
    return f'to_float3({args[0].expr}, {args[1].expr}, {args[2].expr})'
  if type == 'TO_FLOAT4':
    return f'to_float4({args[0].expr}, {args[1].expr}, {args[2].expr}, {args[3].expr})'
  if type == 'TO_QINT':
    return f'toQIntType({args[0].expr}.dtype().toScalarType())'
  if type == 'TO_REAL2':
    return f'to_real2({args[0].expr}, {args[1].expr})'
  if type == 'TO_REAL_FLOAT':
    return f'to_real_float({to_scalar_type(args[0])})'
  if type == 'TO_VALUE_TYPE':
    return f'toValueType({args[0].expr}.dtype().toScalarType())'
  if type == 'OPTIONAL_OR21':
    return f'optional_or_else({args[1].expr}, {args[0].expr}.dtype().toScalarType())'
  if type == 'OPTIONAL_O21LONG':
    return f'optional_or_longelse({args[1].expr}, {args[0].expr}.dtype().toScalarType())'
  if type == 'FIRST_OR_DEFAULT':
    return args[0].expr
  if type == 'FIRST_OR_LONG':
    return f'optional_or_else({args[0].expr}, kLong)'
  print('mk_dtype_infer', type)
  exit()


def get_dtype_arg(all_tensors, args, name):
  tensors = [a.expr for a in all_tensors if a.type.remove_const_ref().cpp_type() == 'at::Tensor']
  tensor_lst = [a.expr for a in all_tensors if a.type.remove_const_ref().cpp_type() == 'at::TensorList']
  dtype = 'nullopt'
  device = 'nullopt'
  if tensors:
    dtype  = f'{tensors[0]}.dtype()'
    device = f'{tensors[0]}.device()'
  elif tensor_lst:
    device = f'device_of({tensor_lst[0]})'

  device_arg = get_arg_of_type(args, 'at::Device')
  if device_arg:
    device = device_arg.expr

  device_arg = get_arg_of_type(args, 'c10::optional<at::Device>')
  if device_arg:
    device = device_arg.expr

  name = str(name)
  if name in type_inference:
    dtype = mk_dtype_infer(type_inference[name], args)
  else:
    dtype_arg = get_arg_of_type(args, 'at::ScalarType')
    if dtype_arg:
      dtype = dtype_arg.expr

    dtype_arg = get_arg_of_type(args, 'c10::optional<at::ScalarType>')
    if dtype_arg:
      dtype = dtype_arg.expr

  tensor_arg = get_arg_of_type(args, 'at::TensorList')
  if dtype == 'nullopt' and tensor_arg:
    return tensor_arg.expr

  return f'{dtype}, {device}'


def fn_output(fn):
  if fn.func.arguments.out:
    assert len(fn.func.arguments.out) == 1
    return fn.func.arguments.out[0].name
  else:
    assert fn.func.arguments.self_arg.argument.is_write
    return fn.func.arguments.self_arg.argument.name


def move_if_needed(str, arg):
  basic_types = {
    'bool',
    'int64_t',
    'double',
    'at::Device',
    'at::Dimname',
    'at::DimnameList',
    'at::IntArrayRef',
    'at::MemoryFormat',
    'at::ScalarType',
    'at::Layout',
    'at::TensorList',
    'c10::string_view',
  }
  free_copy_types = (
    types.ArrayRefCType,
    types.ConstRefCType,
    types.MutRefCType,
  )
  def free(type):
    return isinstance(type, free_copy_types) or \
           type.cpp_type() in basic_types

  if free(arg.type.type) or \
     (isinstance(arg.type.type, types.OptionalCType) and free(arg.type.type.elem)):
    return str
  return f'std::move({str})'

def is_shape_arg(arg):
  type = arg.type.cpp_type()
  dispatch_types = [
    'at::IntArrayRef',
  ]
  return 'Tensor' in type or type in dispatch_types

def mk_shape_infer(shape, all_args):
  args = [arg for arg in all_args if is_shape_arg(arg)]

  if shape == 'ALL <>':
    return 'IntArrayRef()'
  if shape == 'ALL <0>':
    return 'IntArrayRef(0)'
  if shape == 'ALL <1>':
    return 'IntArrayRef(1)'
  if shape == 'EQ_FIRST':
    return args[0].expr
  if shape == 'EQ_SECOND':
    return args[1].expr
  if shape == 'EQ_THIRD':
    return args[2].expr
  if shape == 'STD_PROMOTE':
    return f'shape_std_promote({", ".join([arg.expr for arg in args])})'
  if shape == 'PROMOTE_1_2':
    return f'shape_std_promote({args[0].expr}, {args[1].expr})'
  if shape == 'MATMUL_1ST_2ND':
    return f'shape_matmul({args[0].expr}, {args[1].expr})'
  if shape == 'MATMUL_2ND_3RD':
    return f'shape_matmul({args[1].expr}, {args[2].expr})'
  if shape == 'MUL_1ST_2ND':
    if args[0].type.cpp_type() == 'at::TensorList':
      return f'shape_mul({args[0].expr})'
    return f'shape_mul({args[0].expr}, {args[1].expr})'
  if shape == 'MULT_1ST_2ND':
    return f'shape_mult({args[0].expr}, {args[1].expr})'
  if shape == 'MULLAST_1ST_2ND':
    return f'shape_mul_last({args[0].expr}, {args[1].expr})'
  if shape == 'PICK_1ST_2ND':
    return f'shape_pick_1st({args[1].expr})'
  if shape == 'JOIN_2_3':
    return f'shape_join({args[1].expr}, {args[2].expr})'
  if shape == 'PAD1':
    return f'shape_pad1({args[0].expr})'
  if shape == 'DROP1':
    return f'shape_drop1({args[0].expr})'
  if shape == 'DROP2':
    return f'shape_drop2({args[0].expr})'

  print('mk_shape_infer', shape)
  return 'nullopt'
  #exit()


@with_native_function
def gen_dispatch_wrapper(fn):
  sig_group = CppSignatureGroup.from_native_function(fn, method=False, fallback_binding=fn.manual_cpp_binding)
  sig = sig_group.faithful_signature if sig_group.faithful_signature else sig_group.signature
  dispatcher_sig = DispatcherSignature.from_schema(fn.func)

  rettype = dispatcher_sig.returns_type().cpp_type()
  fndecl = sig.defn(prefix='wrap_', is_redispatching_fn=True)
  fndecl = fndecl.replace('wrap_' + sig.name(), wrapper_name(fn))

  args = translate(sig.arguments(), dispatcher_sig.arguments())
  register_args = ''.join([f'trace.append_arg({move_if_needed(a.expr, a)});' for a in args])

  rargs = ', '.join(['dispatchKeySet'] + [move_if_needed(a.expr, a) for a in args])
  redispatch = f'at::redispatch::{sig.name()}({rargs})'
  tensor_args = [a for a in args if maybe_tensor(a.type)]

  dispatchkey = "dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);"

  # returns a tensor and takes tensors as arguments
  # e.g. add(x, y)
  if rettype == 'at::Tensor':
    dtype_device = get_dtype_arg(tensor_args, args, fn.func.name)

    set_shape = ''
    shape_fn = shape_inference.get(str(fn.func.name))
    if shape_fn:
      set_shape = f'set_shape(tt, {mk_shape_infer(shape_fn, args)});\n  '

    return f'''
{fndecl} {{
  if (trace.is_flushing()) {{
    {dispatchkey}
    return {redispatch};
  }}
  auto tt = register_new_tensor(dispatchKeySet, {fn_enum(fn)}, {dtype_device});
  {set_shape}{register_args}
  return tt;
}}'''

  # in-place op. returns one of the arguments
  # e.g. mul_ or mul_out
  assert rettype == 'at::Tensor &' or rettype == 'const at::Tensor &'
  assert tensor_args
  ret = fn_output(fn)

  keeps_shape = 'false'
  shape_fn = shape_inference.get(str(fn.func.name))
  if (shape_fn == 'EQ_FIRST' and len(tensor_args) >= 1 and tensor_args[0].expr == ret) or\
     (shape_fn == 'EQ_SECOND' and len(tensor_args) >= 2 and tensor_args[1].expr == ret) or\
     (shape_fn == 'EQ_THIRD' and len(tensor_args) >= 3 and tensor_args[2].expr == ret):
    keeps_shape = 'true'
  elif shape_fn:
    keeps_shape = f'eq_shapes({ret}, {mk_shape_infer(shape_fn, args)})'

  return f'''
{fndecl} {{
  if (trace.is_flushing()) {{
    {dispatchkey}
    return {redispatch};
  }}
  bool flush = register_in_place({ret}, {fn_enum(fn)}, dispatchKeySet, {keeps_shape});
  {register_args}
  if (flush)
    trace.flush(STATS(FlushReason::INPLACE_SHARED));
  return {ret};
}}'''


@with_native_function
def gen_torch_library_table(fn):
  return f'm.impl("{fn.func.name}", {wrapper_name(fn)});'

enum_names = {}
@with_native_function
def gen_ops_names(fn):
  enum_names[fn_enum(fn)] = fn.func.name


# (inplace, code, redispatch_signature) -> (enum, fn_ptr)*
interpreter_code = {}

@with_native_function
def gen_interpreter_redispatch(fn):
  global interpreter_code
  sig_group = CppSignatureGroup.from_native_function(fn, method=False, fallback_binding=fn.manual_cpp_binding)
  sig = sig_group.faithful_signature if sig_group.faithful_signature else sig_group.signature
  dispatcher_sig = DispatcherSignature.from_schema(fn.func)

  dispatcher_exprs = translate(sig.arguments(), dispatcher_sig.arguments())
  args = []
  for i, arg in enumerate(dispatcher_exprs):
    type = arg.type.cpp_type(strip_ref=False)
    type = type.replace('const ', '')
    args.append(f'load<{type}>()(op.args[{i}])')

  redispatch = f'<FN>(ks, {", ".join(args)})'
  rettype = dispatcher_sig.returns_type().cpp_type()

  if rettype == 'at::Tensor':
    code = f'set(op, {redispatch});\n  continue;'
    inplace = False

  # in-place op
  else:
    assert rettype == 'at::Tensor &' or rettype == 'const at::Tensor &'
    inplace = True
    code = f'{redispatch};\n  break;'

  signature = dispatcher_sig.type()
  fn_ptr = f'at::redispatch::{sig.name()}'
  key = inplace, code, signature
  interpreter_code.setdefault(key, [])
  interpreter_code[key].append((fn_enum(fn), fn_ptr))


fd1 = open('autogen/dispatch_wrappers.h', 'w')
fd2 = open('autogen/torch_library_table.h', 'w')
fd3 = open('autogen/ops_enum.h', 'w')
fd4 = open('autogen/ops_names.h', 'w')
fd5 = open('autogen/interpreter_redispatch.h', 'w')
fd6 = open('autogen/interpreter_redispatch_tables.h', 'w')

total = 0
for fn in native_functions.native_functions:
  if skip_fn(fn):
    continue
  total += 1
  print(gen_dispatch_wrapper(fn), file=fd1)
  print(gen_torch_library_table(fn), file=fd2)
  gen_ops_names(fn)
  gen_interpreter_redispatch(fn)

print(f'Total redispatched functions: {total}')
print(f'Distinct signatures: {len(interpreter_code)}')

table_id = 0
# put all inplaces last
interpreter_code = sorted(interpreter_code.items())
is_first_inplace = True

for ((inplace, code, sig), entries) in interpreter_code:
  if inplace and is_first_inplace:
    is_first_inplace = False
    print(f'#define FIRST_INPLACE_OP {entries[0][0]}\n', file=fd6)

  for (enum, ptr) in entries:
    print(f'case {enum}:', file=fd5)
    print(f'{enum},', file=fd3)
    print(f'"{enum_names[enum]}",', file=fd4)

  if len(entries) == 1:
    code = code.replace('<FN>', entries[0][1])
    print(f'  {code}\n', file=fd5)
  elif len(entries) == 2:
    ptr = sig.replace(' (', f'(*ptr)(DispatchKeySet, ')
    print(f'  {{{ptr} = {entries[0][1]};', file=fd5)
    print(f'  if (op.id == {entries[1][0]}) ptr = {entries[1][1]};', file=fd5)
    code = code.replace('<FN>', f'ptr')
    print(f'  {code}}}\n', file=fd5)
  else:
    table = f'redispatch_ptrs_{table_id}'
    table_id += 1
    code = code.replace('<FN>', f'{table}[op.id - {entries[0][0]}]')
    print(f'  {code}\n', file=fd5)

    table = sig.replace(' (', f'(*const {table}[])(DispatchKeySet, ')
    print(f'{table} = {{', file=fd6)
    for (enum, ptr) in entries:
      print(f'  {ptr},', file=fd6)
    print(f'}};\n', file=fd6)
