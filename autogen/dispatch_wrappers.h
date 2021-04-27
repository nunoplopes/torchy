
at::Tensor wrap__cast_Byte(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool non_blocking) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cast_Byte(dispatchKeySet, self, non_blocking);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CAST_BYTE, dispatchKeySet, self, non_blocking);
}

at::Tensor wrap__cast_Char(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool non_blocking) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cast_Char(dispatchKeySet, self, non_blocking);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CAST_CHAR, dispatchKeySet, self, non_blocking);
}

at::Tensor wrap__cast_Double(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool non_blocking) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cast_Double(dispatchKeySet, self, non_blocking);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CAST_DOUBLE, dispatchKeySet, self, non_blocking);
}

at::Tensor wrap__cast_Float(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool non_blocking) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cast_Float(dispatchKeySet, self, non_blocking);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CAST_FLOAT, dispatchKeySet, self, non_blocking);
}

at::Tensor wrap__cast_Int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool non_blocking) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cast_Int(dispatchKeySet, self, non_blocking);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CAST_INT, dispatchKeySet, self, non_blocking);
}

at::Tensor wrap__cast_Long(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool non_blocking) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cast_Long(dispatchKeySet, self, non_blocking);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CAST_LONG, dispatchKeySet, self, non_blocking);
}

at::Tensor wrap__cast_Short(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool non_blocking) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cast_Short(dispatchKeySet, self, non_blocking);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CAST_SHORT, dispatchKeySet, self, non_blocking);
}

at::Tensor wrap__cast_Half(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool non_blocking) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cast_Half(dispatchKeySet, self, non_blocking);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CAST_HALF, dispatchKeySet, self, non_blocking);
}

at::Tensor wrap__fw_primal(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t level) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_fw_primal(dispatchKeySet, self, level);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__FW_PRIMAL, dispatchKeySet, self, level);
}

at::Tensor wrap__make_dual(c10::DispatchKeySet dispatchKeySet, const at::Tensor & primal, const at::Tensor & tangent, int64_t level) {
  if (trace.is_flushing()) {
    ensure_materialized(primal, tangent);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_make_dual(dispatchKeySet, primal, tangent, level);
  }
  return at::detail::make_tensor<TorchyTensor>(primal.dtype(), primal.device(), H__MAKE_DUAL, dispatchKeySet, primal, tangent, level);
}

std::tuple<at::Tensor,at::Tensor> wrap__unpack_dual(c10::DispatchKeySet dispatchKeySet, const at::Tensor & dual, int64_t level) {
  ensure_materialized(dual);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_unpack_dual(dispatchKeySet, dual, level);
}

at::Tensor & wrap_rename_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, c10::optional<at::DimnameList> names) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RENAME_, dispatchKeySet, self, names);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rename_(dispatchKeySet, self, names);
}

at::Tensor wrap_rename(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::DimnameList> names) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rename(dispatchKeySet, self, names);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RENAME, dispatchKeySet, self, names);
}

at::Tensor wrap_align_to(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList names) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::align_to(dispatchKeySet, self, names);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ALIGN_TO, dispatchKeySet, self, names);
}

at::Tensor wrap_align_to_ellipsis_idx(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList order, int64_t ellipsis_idx) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::align_to(dispatchKeySet, self, order, ellipsis_idx);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ALIGN_TO_ELLIPSIS_IDX, dispatchKeySet, self, order, ellipsis_idx);
}

at::Tensor wrap_align_as(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::align_as(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ALIGN_AS, dispatchKeySet, self, other);
}

std::vector<at::Tensor> wrap_align_tensors(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::align_tensors(dispatchKeySet, tensors);
}

void wrap__assert_async(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_assert_async(dispatchKeySet, self);
}

at::Tensor wrap_refine_names(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList names) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::refine_names(dispatchKeySet, self, names);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_REFINE_NAMES, dispatchKeySet, self, names);
}

bool wrap__use_cudnn_ctc_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & log_probs, const at::Tensor & targets, at::IntArrayRef input_lengths, at::IntArrayRef target_lengths, int64_t blank) {
  ensure_materialized(log_probs, targets);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_use_cudnn_ctc_loss(dispatchKeySet, log_probs, targets, input_lengths, target_lengths, blank);
}

std::tuple<at::Tensor,at::Tensor> wrap__cudnn_ctc_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & log_probs, const at::Tensor & targets, at::IntArrayRef input_lengths, at::IntArrayRef target_lengths, int64_t blank, bool deterministic, bool zero_infinity) {
  ensure_materialized(log_probs, targets);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cudnn_ctc_loss(dispatchKeySet, log_probs, targets, input_lengths, target_lengths, blank, deterministic, zero_infinity);
}

bool wrap__use_cudnn_rnn_flatten_weight(c10::DispatchKeySet dispatchKeySet) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_use_cudnn_rnn_flatten_weight(dispatchKeySet);
}

at::Tensor wrap__cudnn_rnn_flatten_weight(c10::DispatchKeySet dispatchKeySet, at::TensorList weight_arr, int64_t weight_stride0, int64_t input_size, int64_t mode, int64_t hidden_size, int64_t proj_size, int64_t num_layers, bool batch_first, bool bidirectional) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::_cudnn_rnn_flatten_weight(dispatchKeySet, weight_arr, weight_stride0, input_size, mode, hidden_size, proj_size, num_layers, batch_first, bidirectional));
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap__cudnn_rnn(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const c10::optional<at::Tensor> & weight_buf, const at::Tensor & hx, const c10::optional<at::Tensor> & cx, int64_t mode, int64_t hidden_size, int64_t proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const c10::optional<at::Tensor> & dropout_state) {
  ensure_materialized(input, hx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cudnn_rnn(dispatchKeySet, input, weight, weight_stride0, weight_buf, hx, cx, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,std::vector<at::Tensor>> wrap__cudnn_rnn_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const at::Tensor & weight_buf, const at::Tensor & hx, const c10::optional<at::Tensor> & cx, const at::Tensor & output, const c10::optional<at::Tensor> & grad_output, const c10::optional<at::Tensor> & grad_hy, const c10::optional<at::Tensor> & grad_cy, int64_t mode, int64_t hidden_size, int64_t proj_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const c10::optional<at::Tensor> & dropout_state, const at::Tensor & reserve, std::array<bool,4> output_mask) {
  ensure_materialized(input, weight_buf, hx, output, reserve);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cudnn_rnn_backward(dispatchKeySet, input, weight, weight_stride0, weight_buf, hx, cx, output, grad_output, grad_hy, grad_cy, mode, hidden_size, proj_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state, reserve, output_mask);
}

at::Tensor wrap__cudnn_init_dropout_state(c10::DispatchKeySet dispatchKeySet, double dropout, bool train, int64_t dropout_seed, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::_cudnn_init_dropout_state(dispatchKeySet, dropout, train, dropout_seed, dtype, layout, device, pin_memory));
}

int64_t wrap__debug_has_internal_overlap(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_debug_has_internal_overlap(dispatchKeySet, self);
}

std::tuple<at::Tensor,at::Tensor> wrap__fused_dropout(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double p, c10::optional<at::Generator> generator) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_fused_dropout(dispatchKeySet, self, p, generator);
}

at::Tensor wrap__masked_scale(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mask, double scale) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mask);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_masked_scale(dispatchKeySet, self, mask, scale);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__MASKED_SCALE, dispatchKeySet, self, mask, scale);
}

std::tuple<at::Tensor,at::Tensor> wrap__sobol_engine_draw(c10::DispatchKeySet dispatchKeySet, const at::Tensor & quasi, int64_t n, const at::Tensor & sobolstate, int64_t dimension, int64_t num_generated, c10::optional<at::ScalarType> dtype) {
  ensure_materialized(quasi, sobolstate);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_sobol_engine_draw(dispatchKeySet, quasi, n, sobolstate, dimension, num_generated, dtype);
}

at::Tensor & wrap__sobol_engine_ff_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t n, const at::Tensor & sobolstate, int64_t dimension, int64_t num_generated) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__SOBOL_ENGINE_FF_, dispatchKeySet, self, n, sobolstate, dimension, num_generated);
    return self;
  }
  will_override(self);
  ensure_materialized(self, sobolstate);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_sobol_engine_ff_(dispatchKeySet, self, n, sobolstate, dimension, num_generated);
}

at::Tensor & wrap__sobol_engine_scramble_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & ltm, int64_t dimension) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__SOBOL_ENGINE_SCRAMBLE_, dispatchKeySet, self, ltm, dimension);
    return self;
  }
  will_override(self);
  ensure_materialized(self, ltm);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_sobol_engine_scramble_(dispatchKeySet, self, ltm, dimension);
}

at::Tensor & wrap__sobol_engine_initialize_state_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dimension) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__SOBOL_ENGINE_INITIALIZE_STATE_, dispatchKeySet, self, dimension);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_sobol_engine_initialize_state_(dispatchKeySet, self, dimension);
}

at::Tensor wrap__reshape_from_tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & shape) {
  if (trace.is_flushing()) {
    ensure_materialized(self, shape);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_reshape_from_tensor(dispatchKeySet, self, shape);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__RESHAPE_FROM_TENSOR, dispatchKeySet, self, shape);
}

at::Tensor wrap__shape_as_tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_shape_as_tensor(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SHAPE_AS_TENSOR, dispatchKeySet, self);
}

at::Tensor wrap_dropout(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, double p, bool train) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::dropout(dispatchKeySet, input, p, train);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_DROPOUT, dispatchKeySet, input, p, train);
}

at::Tensor & wrap_dropout_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double p, bool train) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DROPOUT_, dispatchKeySet, self, p, train);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::dropout_(dispatchKeySet, self, p, train);
}

at::Tensor wrap_feature_dropout(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, double p, bool train) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::feature_dropout(dispatchKeySet, input, p, train);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_FEATURE_DROPOUT, dispatchKeySet, input, p, train);
}

at::Tensor & wrap_feature_dropout_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double p, bool train) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FEATURE_DROPOUT_, dispatchKeySet, self, p, train);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::feature_dropout_(dispatchKeySet, self, p, train);
}

at::Tensor wrap_alpha_dropout(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, double p, bool train) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::alpha_dropout(dispatchKeySet, input, p, train);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_ALPHA_DROPOUT, dispatchKeySet, input, p, train);
}

at::Tensor & wrap_alpha_dropout_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double p, bool train) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ALPHA_DROPOUT_, dispatchKeySet, self, p, train);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::alpha_dropout_(dispatchKeySet, self, p, train);
}

at::Tensor wrap_feature_alpha_dropout(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, double p, bool train) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::feature_alpha_dropout(dispatchKeySet, input, p, train);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_FEATURE_ALPHA_DROPOUT, dispatchKeySet, input, p, train);
}

at::Tensor & wrap_feature_alpha_dropout_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double p, bool train) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FEATURE_ALPHA_DROPOUT_, dispatchKeySet, self, p, train);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::feature_alpha_dropout_(dispatchKeySet, self, p, train);
}

at::Tensor wrap_abs(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::abs(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ABS, dispatchKeySet, self);
}

at::Tensor & wrap_abs_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ABS_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::abs_(dispatchKeySet, self);
}

at::Tensor & wrap_abs_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ABS_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::abs_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_absolute(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::absolute(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ABSOLUTE, dispatchKeySet, self);
}

at::Tensor & wrap_absolute_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ABSOLUTE_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::absolute_(dispatchKeySet, self);
}

at::Tensor & wrap_absolute_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ABSOLUTE_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::absolute_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_angle(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::angle(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ANGLE, dispatchKeySet, self);
}

at::Tensor & wrap_angle_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ANGLE_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::angle_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_view_as_real(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::view_as_real(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_VIEW_AS_REAL, dispatchKeySet, self);
}

at::Tensor wrap_view_as_complex(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::view_as_complex(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_VIEW_AS_COMPLEX, dispatchKeySet, self);
}

at::Tensor wrap_sgn(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sgn(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SGN, dispatchKeySet, self);
}

at::Tensor & wrap_sgn_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SGN_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sgn_(dispatchKeySet, self);
}

at::Tensor & wrap_sgn_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SGN_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sgn_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_real(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::real(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_REAL, dispatchKeySet, self);
}

at::Tensor wrap_imag(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::imag(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_IMAG, dispatchKeySet, self);
}

at::Tensor wrap_conj(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conj(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CONJ, dispatchKeySet, self);
}

at::Tensor & wrap_conj_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CONJ_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::conj_outf(dispatchKeySet, self, out);
}

at::Tensor wrap__conj(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_conj(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CONJ, dispatchKeySet, self);
}

at::Tensor & wrap_acos_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ACOS_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::acos_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_arccos(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::arccos(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ARCCOS, dispatchKeySet, self);
}

at::Tensor & wrap_arccos_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCCOS_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arccos_(dispatchKeySet, self);
}

at::Tensor & wrap_arccos_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCCOS_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arccos_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_avg_pool1d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::avg_pool1d(dispatchKeySet, self, kernel_size, stride, padding, ceil_mode, count_include_pad);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_AVG_POOL1D, dispatchKeySet, self, kernel_size, stride, padding, ceil_mode, count_include_pad);
}

at::Tensor wrap_adaptive_avg_pool1d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::adaptive_avg_pool1d(dispatchKeySet, self, output_size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ADAPTIVE_AVG_POOL1D, dispatchKeySet, self, output_size);
}

std::tuple<at::Tensor,at::Tensor> wrap_adaptive_max_pool1d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::adaptive_max_pool1d(dispatchKeySet, self, output_size);
}

at::Tensor wrap_add_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::add(dispatchKeySet, self, other, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ADD_TENSOR, dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap_add__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADD__TENSOR, dispatchKeySet, self, other, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::add_(dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap_add_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADD_OUT, dispatchKeySet, self, other, alpha, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::add_outf(dispatchKeySet, self, other, alpha, out);
}

at::Tensor wrap__add_relu_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_add_relu(dispatchKeySet, self, other, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__ADD_RELU_TENSOR, dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap__add_relu__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__ADD_RELU__TENSOR, dispatchKeySet, self, other, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_add_relu_(dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap__add_relu_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__ADD_RELU_OUT, dispatchKeySet, self, other, alpha, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_add_relu_outf(dispatchKeySet, self, other, alpha, out);
}

at::Tensor wrap_add_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::add(dispatchKeySet, self, other, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ADD_SCALAR, dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap_add__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADD__SCALAR, dispatchKeySet, self, other, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::add_(dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap_addmv_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat, const at::Tensor & vec, const at::Scalar & beta, const at::Scalar & alpha, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDMV_OUT, dispatchKeySet, self, mat, vec, beta, alpha, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, mat, vec, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addmv_outf(dispatchKeySet, self, mat, vec, beta, alpha, out);
}

at::Tensor wrap_addr(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & vec1, const at::Tensor & vec2, const at::Scalar & beta, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, vec1, vec2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::addr(dispatchKeySet, self, vec1, vec2, beta, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ADDR, dispatchKeySet, self, vec1, vec2, beta, alpha);
}

at::Tensor & wrap_addr_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & vec1, const at::Tensor & vec2, const at::Scalar & beta, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDR_, dispatchKeySet, self, vec1, vec2, beta, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self, vec1, vec2);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addr_(dispatchKeySet, self, vec1, vec2, beta, alpha);
}

at::Tensor & wrap_addr_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & vec1, const at::Tensor & vec2, const at::Scalar & beta, const at::Scalar & alpha, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDR_OUT, dispatchKeySet, self, vec1, vec2, beta, alpha, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, vec1, vec2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addr_outf(dispatchKeySet, self, vec1, vec2, beta, alpha, out);
}

at::Tensor wrap_affine_grid_generator(c10::DispatchKeySet dispatchKeySet, const at::Tensor & theta, at::IntArrayRef size, bool align_corners) {
  if (trace.is_flushing()) {
    ensure_materialized(theta);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::affine_grid_generator(dispatchKeySet, theta, size, align_corners);
  }
  return at::detail::make_tensor<TorchyTensor>(theta.dtype(), theta.device(), H_AFFINE_GRID_GENERATOR, dispatchKeySet, theta, size, align_corners);
}

at::Tensor wrap_affine_grid_generator_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, at::IntArrayRef size, bool align_corners) {
  if (trace.is_flushing()) {
    ensure_materialized(grad);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::affine_grid_generator_backward(dispatchKeySet, grad, size, align_corners);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_AFFINE_GRID_GENERATOR_BACKWARD, dispatchKeySet, grad, size, align_corners);
}

at::Tensor wrap_all_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::all(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ALL_DIM, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_all_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ALL_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::all_outf(dispatchKeySet, self, dim, keepdim, out);
}

at::Tensor wrap_all_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::all(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ALL_DIMNAME, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_all_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ALL_DIMNAME_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::all_outf(dispatchKeySet, self, dim, keepdim, out);
}

bool wrap_allclose(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, double rtol, double atol, bool equal_nan) {
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::allclose(dispatchKeySet, self, other, rtol, atol, equal_nan);
}

at::Tensor wrap_any_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::any(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ANY_DIM, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_any_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ANY_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::any_outf(dispatchKeySet, self, dim, keepdim, out);
}

at::Tensor wrap_any_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::any(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ANY_DIMNAME, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_any_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ANY_DIMNAME_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::any_outf(dispatchKeySet, self, dim, keepdim, out);
}

at::Tensor wrap_arange(c10::DispatchKeySet dispatchKeySet, const at::Scalar & end, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::arange(dispatchKeySet, end, dtype, layout, device, pin_memory));
}

at::Tensor wrap_arange_start(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::arange(dispatchKeySet, start, end, dtype, layout, device, pin_memory));
}

at::Tensor wrap_arange_start_step(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, const at::Scalar & step, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::arange(dispatchKeySet, start, end, step, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_arange_out(c10::DispatchKeySet dispatchKeySet, const at::Scalar & end, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARANGE_OUT, dispatchKeySet, end, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arange_outf(dispatchKeySet, end, out);
}

at::Tensor & wrap_arange_start_out(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, const at::Scalar & step, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARANGE_START_OUT, dispatchKeySet, start, end, step, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arange_outf(dispatchKeySet, start, end, step, out);
}

at::Tensor wrap__dim_arange(c10::DispatchKeySet dispatchKeySet, const at::Tensor & like, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(like);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_dim_arange(dispatchKeySet, like, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(like.dtype(), like.device(), H__DIM_ARANGE, dispatchKeySet, like, dim);
}

at::Tensor wrap_argmax(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::argmax(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ARGMAX, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_argmax_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARGMAX_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::argmax_outf(dispatchKeySet, self, dim, keepdim, out);
}

at::Tensor wrap_argmin(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::argmin(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ARGMIN, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_argmin_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARGMIN_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::argmin_outf(dispatchKeySet, self, dim, keepdim, out);
}

at::Tensor & wrap_acosh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ACOSH_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::acosh_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_arccosh(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::arccosh(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ARCCOSH, dispatchKeySet, self);
}

at::Tensor & wrap_arccosh_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCCOSH_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arccosh_(dispatchKeySet, self);
}

at::Tensor & wrap_arccosh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCCOSH_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arccosh_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_asinh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ASINH_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::asinh_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_arcsinh(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::arcsinh(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ARCSINH, dispatchKeySet, self);
}

at::Tensor & wrap_arcsinh_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCSINH_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arcsinh_(dispatchKeySet, self);
}

at::Tensor & wrap_arcsinh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCSINH_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arcsinh_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_atanh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ATANH_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::atanh_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_arctanh(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::arctanh(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ARCTANH, dispatchKeySet, self);
}

at::Tensor & wrap_arctanh_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCTANH_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arctanh_(dispatchKeySet, self);
}

at::Tensor & wrap_arctanh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCTANH_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arctanh_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_as_strided(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size, at::IntArrayRef stride, c10::optional<int64_t> storage_offset) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::as_strided(dispatchKeySet, self, size, stride, storage_offset);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_AS_STRIDED, dispatchKeySet, self, size, stride, storage_offset);
}

at::Tensor & wrap_as_strided_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::IntArrayRef size, at::IntArrayRef stride, c10::optional<int64_t> storage_offset) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_AS_STRIDED_, dispatchKeySet, self, size, stride, storage_offset);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::as_strided_(dispatchKeySet, self, size, stride, storage_offset);
}

at::Tensor wrap_asin(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::asin(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ASIN, dispatchKeySet, self);
}

at::Tensor & wrap_asin_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ASIN_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::asin_(dispatchKeySet, self);
}

at::Tensor & wrap_asin_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ASIN_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::asin_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_arcsin(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::arcsin(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ARCSIN, dispatchKeySet, self);
}

at::Tensor & wrap_arcsin_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCSIN_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arcsin_(dispatchKeySet, self);
}

at::Tensor & wrap_arcsin_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCSIN_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arcsin_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_atan_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ATAN_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::atan_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_arctan(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::arctan(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ARCTAN, dispatchKeySet, self);
}

at::Tensor & wrap_arctan_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCTAN_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arctan_(dispatchKeySet, self);
}

at::Tensor & wrap_arctan_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ARCTAN_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::arctan_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_atleast_1d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::atleast_1d(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ATLEAST_1D, dispatchKeySet, self);
}

std::vector<at::Tensor> wrap_atleast_1d_Sequence(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::atleast_1d(dispatchKeySet, tensors);
}

at::Tensor wrap_atleast_2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::atleast_2d(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ATLEAST_2D, dispatchKeySet, self);
}

std::vector<at::Tensor> wrap_atleast_2d_Sequence(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::atleast_2d(dispatchKeySet, tensors);
}

at::Tensor wrap_atleast_3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::atleast_3d(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ATLEAST_3D, dispatchKeySet, self);
}

std::vector<at::Tensor> wrap_atleast_3d_Sequence(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::atleast_3d(dispatchKeySet, tensors);
}

at::Tensor wrap_baddbmm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & batch1, const at::Tensor & batch2, const at::Scalar & beta, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, batch1, batch2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::baddbmm(dispatchKeySet, self, batch1, batch2, beta, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BADDBMM, dispatchKeySet, self, batch1, batch2, beta, alpha);
}

at::Tensor & wrap_baddbmm_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & batch1, const at::Tensor & batch2, const at::Scalar & beta, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BADDBMM_, dispatchKeySet, self, batch1, batch2, beta, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self, batch1, batch2);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::baddbmm_(dispatchKeySet, self, batch1, batch2, beta, alpha);
}

at::Tensor & wrap__baddbmm_mkl_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & batch1, const at::Tensor & batch2, const at::Scalar & beta, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__BADDBMM_MKL_, dispatchKeySet, self, batch1, batch2, beta, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self, batch1, batch2);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_baddbmm_mkl_(dispatchKeySet, self, batch1, batch2, beta, alpha);
}

at::Tensor & wrap_baddbmm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & batch1, const at::Tensor & batch2, const at::Scalar & beta, const at::Scalar & alpha, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BADDBMM_OUT, dispatchKeySet, self, batch1, batch2, beta, alpha, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, batch1, batch2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::baddbmm_outf(dispatchKeySet, self, batch1, batch2, beta, alpha, out);
}

at::Tensor wrap_bartlett_window(c10::DispatchKeySet dispatchKeySet, int64_t window_length, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::bartlett_window(dispatchKeySet, window_length, dtype, layout, device, pin_memory));
}

at::Tensor wrap_bartlett_window_periodic(c10::DispatchKeySet dispatchKeySet, int64_t window_length, bool periodic, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::bartlett_window(dispatchKeySet, window_length, periodic, dtype, layout, device, pin_memory));
}

at::Tensor wrap_batch_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, bool training, double momentum, double eps, bool cudnn_enabled) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::batch_norm(dispatchKeySet, input, weight, bias, running_mean, running_var, training, momentum, eps, cudnn_enabled);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_BATCH_NORM, dispatchKeySet, input, weight, bias, running_mean, running_var, training, momentum, eps, cudnn_enabled);
}

at::Tensor wrap_quantized_batch_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & mean, const at::Tensor & var, double eps, double output_scale, int64_t output_zero_point) {
  if (trace.is_flushing()) {
    ensure_materialized(input, mean, var);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantized_batch_norm(dispatchKeySet, input, weight, bias, mean, var, eps, output_scale, output_zero_point);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_QUANTIZED_BATCH_NORM, dispatchKeySet, input, weight, bias, mean, var, eps, output_scale, output_zero_point);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,int64_t> wrap__batch_norm_impl_index(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, bool training, double momentum, double eps, bool cudnn_enabled) {
  ensure_materialized(input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_batch_norm_impl_index(dispatchKeySet, input, weight, bias, running_mean, running_var, training, momentum, eps, cudnn_enabled);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap__batch_norm_impl_index_backward(c10::DispatchKeySet dispatchKeySet, int64_t impl_index, const at::Tensor & input, const at::Tensor & grad_output, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, const c10::optional<at::Tensor> & save_mean, const c10::optional<at::Tensor> & save_var_transform, bool train, double eps, std::array<bool,3> output_mask, const at::Tensor & reservedSpace) {
  ensure_materialized(input, grad_output, reservedSpace);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_batch_norm_impl_index_backward(dispatchKeySet, impl_index, input, grad_output, weight, running_mean, running_var, save_mean, save_var_transform, train, eps, output_mask, reservedSpace);
}

at::Tensor wrap_bernoulli(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bernoulli(dispatchKeySet, self, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BERNOULLI, dispatchKeySet, self, generator);
}

at::Tensor & wrap_bernoulli_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BERNOULLI_OUT, dispatchKeySet, self, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bernoulli_outf(dispatchKeySet, self, generator, out);
}

at::Tensor & wrap_bernoulli__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & p, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BERNOULLI__TENSOR, dispatchKeySet, self, p, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self, p);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bernoulli_(dispatchKeySet, self, p, generator);
}

at::Tensor & wrap_bernoulli__float(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double p, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BERNOULLI__FLOAT, dispatchKeySet, self, p, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bernoulli_(dispatchKeySet, self, p, generator);
}

at::Tensor wrap_bernoulli_p(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double p, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bernoulli(dispatchKeySet, self, p, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BERNOULLI_P, dispatchKeySet, self, p, generator);
}

at::Tensor wrap_bilinear(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input1, const at::Tensor & input2, const at::Tensor & weight, const c10::optional<at::Tensor> & bias) {
  if (trace.is_flushing()) {
    ensure_materialized(input1, input2, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bilinear(dispatchKeySet, input1, input2, weight, bias);
  }
  return at::detail::make_tensor<TorchyTensor>(input1.dtype(), input1.device(), H_BILINEAR, dispatchKeySet, input1, input2, weight, bias);
}

at::Tensor wrap_binary_cross_entropy(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::binary_cross_entropy(dispatchKeySet, self, target, weight, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BINARY_CROSS_ENTROPY, dispatchKeySet, self, target, weight, reduction);
}

at::Tensor & wrap_binary_cross_entropy_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BINARY_CROSS_ENTROPY_OUT, dispatchKeySet, self, target, weight, reduction, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, target, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::binary_cross_entropy_outf(dispatchKeySet, self, target, weight, reduction, out);
}

at::Tensor wrap_binary_cross_entropy_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::binary_cross_entropy_backward(dispatchKeySet, grad_output, self, target, weight, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_BINARY_CROSS_ENTROPY_BACKWARD, dispatchKeySet, grad_output, self, target, weight, reduction);
}

at::Tensor & wrap_binary_cross_entropy_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BINARY_CROSS_ENTROPY_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, target, weight, reduction, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, target, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::binary_cross_entropy_backward_outf(dispatchKeySet, grad_output, self, target, weight, reduction, grad_input);
}

at::Tensor wrap_binary_cross_entropy_with_logits(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & pos_weight, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::binary_cross_entropy_with_logits(dispatchKeySet, self, target, weight, pos_weight, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BINARY_CROSS_ENTROPY_WITH_LOGITS, dispatchKeySet, self, target, weight, pos_weight, reduction);
}

at::Tensor wrap_binary_cross_entropy_with_logits_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & pos_weight, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::binary_cross_entropy_with_logits_backward(dispatchKeySet, grad_output, self, target, weight, pos_weight, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_BINARY_CROSS_ENTROPY_WITH_LOGITS_BACKWARD, dispatchKeySet, grad_output, self, target, weight, pos_weight, reduction);
}

at::Tensor wrap_bincount(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Tensor> & weights, int64_t minlength) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bincount(dispatchKeySet, self, weights, minlength);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BINCOUNT, dispatchKeySet, self, weights, minlength);
}

at::Tensor wrap_bitwise_not(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bitwise_not(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BITWISE_NOT, dispatchKeySet, self);
}

at::Tensor & wrap_bitwise_not_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_NOT_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_not_(dispatchKeySet, self);
}

at::Tensor & wrap_bitwise_not_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_NOT_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_not_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_copysign_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COPYSIGN_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::copysign_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_copysign_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::copysign(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_COPYSIGN_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_copysign__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COPYSIGN__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::copysign_(dispatchKeySet, self, other);
}

at::Tensor & wrap_copysign_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COPYSIGN_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::copysign_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_logical_not(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logical_not(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGICAL_NOT, dispatchKeySet, self);
}

at::Tensor & wrap_logical_not_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGICAL_NOT_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logical_not_(dispatchKeySet, self);
}

at::Tensor & wrap_logical_not_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGICAL_NOT_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logical_not_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_logical_xor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logical_xor(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGICAL_XOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_logical_xor_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGICAL_XOR_, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logical_xor_(dispatchKeySet, self, other);
}

at::Tensor & wrap_logical_xor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGICAL_XOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logical_xor_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_logical_and(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logical_and(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGICAL_AND, dispatchKeySet, self, other);
}

at::Tensor & wrap_logical_and_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGICAL_AND_, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logical_and_(dispatchKeySet, self, other);
}

at::Tensor & wrap_logical_and_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGICAL_AND_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logical_and_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_logical_or(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logical_or(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGICAL_OR, dispatchKeySet, self, other);
}

at::Tensor & wrap_logical_or_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGICAL_OR_, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logical_or_(dispatchKeySet, self, other);
}

at::Tensor & wrap_logical_or_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGICAL_OR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logical_or_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_blackman_window(c10::DispatchKeySet dispatchKeySet, int64_t window_length, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::blackman_window(dispatchKeySet, window_length, dtype, layout, device, pin_memory));
}

at::Tensor wrap_blackman_window_periodic(c10::DispatchKeySet dispatchKeySet, int64_t window_length, bool periodic, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::blackman_window(dispatchKeySet, window_length, periodic, dtype, layout, device, pin_memory));
}

at::Tensor wrap_bmm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat2) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mat2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bmm(dispatchKeySet, self, mat2);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BMM, dispatchKeySet, self, mat2);
}

at::Tensor wrap__bmm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat2, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mat2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_bmm(dispatchKeySet, self, mat2, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__BMM, dispatchKeySet, self, mat2, deterministic);
}

at::Tensor & wrap_bmm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat2, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BMM_OUT, dispatchKeySet, self, mat2, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, mat2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bmm_outf(dispatchKeySet, self, mat2, out);
}

at::Tensor & wrap__bmm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat2, bool deterministic, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__BMM_OUT, dispatchKeySet, self, mat2, deterministic, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, mat2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_bmm_outf(dispatchKeySet, self, mat2, deterministic, out);
}

std::vector<at::Tensor> wrap_broadcast_tensors(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::broadcast_tensors(dispatchKeySet, tensors);
}

at::Tensor wrap_broadcast_to(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::broadcast_to(dispatchKeySet, self, size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BROADCAST_TO, dispatchKeySet, self, size);
}

at::Tensor wrap_cat(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, int64_t dim) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::cat(dispatchKeySet, tensors, dim));
}

at::Tensor & wrap_cat_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, int64_t dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CAT_OUT, dispatchKeySet, tensors, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cat_outf(dispatchKeySet, tensors, dim, out);
}

at::Tensor wrap_cat_names(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::Dimname dim) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::cat(dispatchKeySet, tensors, dim));
}

at::Tensor & wrap_cat_names_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::Dimname dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CAT_NAMES_OUT, dispatchKeySet, tensors, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cat_outf(dispatchKeySet, tensors, dim, out);
}

at::Tensor wrap_block_diag(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::block_diag(dispatchKeySet, tensors));
}

at::Tensor wrap_ceil(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ceil(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CEIL, dispatchKeySet, self);
}

at::Tensor & wrap_ceil_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CEIL_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ceil_(dispatchKeySet, self);
}

at::Tensor & wrap_ceil_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CEIL_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ceil_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_chain_matmul(c10::DispatchKeySet dispatchKeySet, at::TensorList matrices) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::chain_matmul(dispatchKeySet, matrices));
}

at::Tensor & wrap_chain_matmul_out(c10::DispatchKeySet dispatchKeySet, at::TensorList matrices, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CHAIN_MATMUL_OUT, dispatchKeySet, matrices, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::chain_matmul_outf(dispatchKeySet, matrices, out);
}

std::vector<at::Tensor> wrap_unsafe_chunk(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t chunks, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::unsafe_chunk(dispatchKeySet, self, chunks, dim);
}

std::vector<at::Tensor> wrap_chunk(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t chunks, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::chunk(dispatchKeySet, self, chunks, dim);
}

std::vector<at::Tensor> wrap_tensor_split_sections(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t sections, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::tensor_split(dispatchKeySet, self, sections, dim);
}

std::vector<at::Tensor> wrap_tensor_split_indices(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef indices, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::tensor_split(dispatchKeySet, self, indices, dim);
}

std::vector<at::Tensor> wrap_tensor_split_tensor_indices_or_sections(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & tensor_indices_or_sections, int64_t dim) {
  ensure_materialized(self, tensor_indices_or_sections);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::tensor_split(dispatchKeySet, self, tensor_indices_or_sections, dim);
}

at::Tensor wrap_clamp(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::clamp(dispatchKeySet, self, min, max);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CLAMP, dispatchKeySet, self, min, max);
}

at::Tensor & wrap_clamp_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CLAMP_, dispatchKeySet, self, min, max);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::clamp_(dispatchKeySet, self, min, max);
}

at::Tensor & wrap_clamp_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CLAMP_OUT, dispatchKeySet, self, min, max, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::clamp_outf(dispatchKeySet, self, min, max, out);
}

at::Tensor wrap_clamp_max(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & max) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::clamp_max(dispatchKeySet, self, max);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CLAMP_MAX, dispatchKeySet, self, max);
}

at::Tensor & wrap_clamp_max_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & max) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CLAMP_MAX_, dispatchKeySet, self, max);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::clamp_max_(dispatchKeySet, self, max);
}

at::Tensor & wrap_clamp_max_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & max, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CLAMP_MAX_OUT, dispatchKeySet, self, max, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::clamp_max_outf(dispatchKeySet, self, max, out);
}

at::Tensor wrap_clamp_min(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & min) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::clamp_min(dispatchKeySet, self, min);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CLAMP_MIN, dispatchKeySet, self, min);
}

at::Tensor & wrap_clamp_min_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & min) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CLAMP_MIN_, dispatchKeySet, self, min);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::clamp_min_(dispatchKeySet, self, min);
}

at::Tensor & wrap_clamp_min_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & min, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CLAMP_MIN_OUT, dispatchKeySet, self, min, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::clamp_min_outf(dispatchKeySet, self, min, out);
}

at::Tensor wrap_clip(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::clip(dispatchKeySet, self, min, max);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CLIP, dispatchKeySet, self, min, max);
}

at::Tensor & wrap_clip_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CLIP_, dispatchKeySet, self, min, max);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::clip_(dispatchKeySet, self, min, max);
}

at::Tensor & wrap_clip_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CLIP_OUT, dispatchKeySet, self, min, max, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::clip_outf(dispatchKeySet, self, min, max, out);
}

bool wrap_cudnn_is_acceptable(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cudnn_is_acceptable(dispatchKeySet, self);
}

at::Tensor wrap_complex(c10::DispatchKeySet dispatchKeySet, const at::Tensor & real, const at::Tensor & imag) {
  if (trace.is_flushing()) {
    ensure_materialized(real, imag);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::complex(dispatchKeySet, real, imag);
  }
  return at::detail::make_tensor<TorchyTensor>(real.dtype(), real.device(), H_COMPLEX, dispatchKeySet, real, imag);
}

at::Tensor & wrap_complex_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & real, const at::Tensor & imag, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COMPLEX_OUT, dispatchKeySet, real, imag, out);
    return out;
  }
  will_override(out);
  ensure_materialized(real, imag, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::complex_outf(dispatchKeySet, real, imag, out);
}

at::Tensor wrap_polar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & abs, const at::Tensor & angle) {
  if (trace.is_flushing()) {
    ensure_materialized(abs, angle);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::polar(dispatchKeySet, abs, angle);
  }
  return at::detail::make_tensor<TorchyTensor>(abs.dtype(), abs.device(), H_POLAR, dispatchKeySet, abs, angle);
}

at::Tensor & wrap_polar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & abs, const at::Tensor & angle, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_POLAR_OUT, dispatchKeySet, abs, angle, out);
    return out;
  }
  will_override(out);
  ensure_materialized(abs, angle, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::polar_outf(dispatchKeySet, abs, angle, out);
}

at::Tensor wrap_constant_pad_nd(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef pad, const at::Scalar & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::constant_pad_nd(dispatchKeySet, self, pad, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CONSTANT_PAD_ND, dispatchKeySet, self, pad, value);
}

at::Tensor wrap_convolution(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool transposed, at::IntArrayRef output_padding, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::convolution(dispatchKeySet, input, weight, bias, stride, padding, dilation, transposed, output_padding, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONVOLUTION, dispatchKeySet, input, weight, bias, stride, padding, dilation, transposed, output_padding, groups);
}

at::Tensor wrap_convolution_overrideable(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool transposed, at::IntArrayRef output_padding, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::convolution_overrideable(dispatchKeySet, input, weight, bias, stride, padding, dilation, transposed, output_padding, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONVOLUTION_OVERRIDEABLE, dispatchKeySet, input, weight, bias, stride, padding, dilation, transposed, output_padding, groups);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_convolution_backward_overrideable(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & input, const at::Tensor & weight, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool transposed, at::IntArrayRef output_padding, int64_t groups, std::array<bool,3> output_mask) {
  ensure_materialized(grad_output, input, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::convolution_backward_overrideable(dispatchKeySet, grad_output, input, weight, stride, padding, dilation, transposed, output_padding, groups, output_mask);
}

at::Tensor wrap__convolution(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool transposed, at::IntArrayRef output_padding, int64_t groups, bool benchmark, bool deterministic, bool cudnn_enabled, bool allow_tf32) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_convolution(dispatchKeySet, input, weight, bias, stride, padding, dilation, transposed, output_padding, groups, benchmark, deterministic, cudnn_enabled, allow_tf32);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H__CONVOLUTION, dispatchKeySet, input, weight, bias, stride, padding, dilation, transposed, output_padding, groups, benchmark, deterministic, cudnn_enabled, allow_tf32);
}

at::Tensor wrap__convolution_deprecated(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool transposed, at::IntArrayRef output_padding, int64_t groups, bool benchmark, bool deterministic, bool cudnn_enabled) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_convolution(dispatchKeySet, input, weight, bias, stride, padding, dilation, transposed, output_padding, groups, benchmark, deterministic, cudnn_enabled);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H__CONVOLUTION_DEPRECATED, dispatchKeySet, input, weight, bias, stride, padding, dilation, transposed, output_padding, groups, benchmark, deterministic, cudnn_enabled);
}

at::Tensor wrap__convolution_mode(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, std::string padding, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_convolution_mode(dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H__CONVOLUTION_MODE, dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
}

at::Tensor wrap__convolution_nogroup(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool transposed, at::IntArrayRef output_padding) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_convolution_nogroup(dispatchKeySet, input, weight, bias, stride, padding, dilation, transposed, output_padding);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H__CONVOLUTION_NOGROUP, dispatchKeySet, input, weight, bias, stride, padding, dilation, transposed, output_padding);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap__convolution_double_backward(c10::DispatchKeySet dispatchKeySet, const c10::optional<at::Tensor> & ggI, const c10::optional<at::Tensor> & ggW, const c10::optional<at::Tensor> & ggb, const at::Tensor & gO, const at::Tensor & weight, const at::Tensor & self, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool transposed, at::IntArrayRef output_padding, int64_t groups, bool benchmark, bool deterministic, bool cudnn_enabled, bool allow_tf32, std::array<bool,3> output_mask) {
  ensure_materialized(gO, weight, self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_convolution_double_backward(dispatchKeySet, ggI, ggW, ggb, gO, weight, self, stride, padding, dilation, transposed, output_padding, groups, benchmark, deterministic, cudnn_enabled, allow_tf32, output_mask);
}

at::Tensor wrap_conv1d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv1d(dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONV1D, dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
}

at::Tensor wrap_conv2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv2d(dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONV2D, dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
}

at::Tensor wrap_conv3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv3d(dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONV3D, dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
}

at::Tensor wrap_conv1d_padding(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, std::string padding, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv1d(dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONV1D_PADDING, dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
}

at::Tensor wrap_conv2d_padding(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, std::string padding, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv2d(dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONV2D_PADDING, dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
}

at::Tensor wrap_conv3d_padding(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, std::string padding, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv3d(dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONV3D_PADDING, dispatchKeySet, input, weight, bias, stride, padding, dilation, groups);
}

at::Tensor wrap_conv_tbc(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, const at::Tensor & bias, int64_t pad) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight, bias);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv_tbc(dispatchKeySet, self, weight, bias, pad);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CONV_TBC, dispatchKeySet, self, weight, bias, pad);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_conv_tbc_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & input, const at::Tensor & weight, const at::Tensor & bias, int64_t pad) {
  ensure_materialized(self, input, weight, bias);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::conv_tbc_backward(dispatchKeySet, self, input, weight, bias, pad);
}

at::Tensor wrap_conv_transpose1d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, int64_t groups, at::IntArrayRef dilation) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv_transpose1d(dispatchKeySet, input, weight, bias, stride, padding, output_padding, groups, dilation);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONV_TRANSPOSE1D, dispatchKeySet, input, weight, bias, stride, padding, output_padding, groups, dilation);
}

at::Tensor wrap_conv_transpose2d_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, int64_t groups, at::IntArrayRef dilation) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv_transpose2d(dispatchKeySet, input, weight, bias, stride, padding, output_padding, groups, dilation);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONV_TRANSPOSE2D_INPUT, dispatchKeySet, input, weight, bias, stride, padding, output_padding, groups, dilation);
}

at::Tensor wrap_conv_transpose3d_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, int64_t groups, at::IntArrayRef dilation) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv_transpose3d(dispatchKeySet, input, weight, bias, stride, padding, output_padding, groups, dilation);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_CONV_TRANSPOSE3D_INPUT, dispatchKeySet, input, weight, bias, stride, padding, output_padding, groups, dilation);
}

at::Tensor & wrap_copy_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & src, bool non_blocking) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COPY_, dispatchKeySet, self, src, non_blocking);
    return self;
  }
  will_override(self);
  ensure_materialized(self, src);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::copy_(dispatchKeySet, self, src, non_blocking);
}

at::Tensor & wrap_cos_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COS_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cos_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_cosh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COSH_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cosh_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_cosine_embedding_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input1, const at::Tensor & input2, const at::Tensor & target, double margin, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(input1, input2, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cosine_embedding_loss(dispatchKeySet, input1, input2, target, margin, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(input1.dtype(), input1.device(), H_COSINE_EMBEDDING_LOSS, dispatchKeySet, input1, input2, target, margin, reduction);
}

at::Tensor wrap_count_nonzero_dim_IntList(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::count_nonzero(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_COUNT_NONZERO_DIM_INTLIST, dispatchKeySet, self, dim);
}

at::Tensor wrap_count_nonzero(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::count_nonzero(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_COUNT_NONZERO, dispatchKeySet, self, dim);
}

at::Tensor wrap_cudnn_affine_grid_generator(c10::DispatchKeySet dispatchKeySet, const at::Tensor & theta, int64_t N, int64_t C, int64_t H, int64_t W) {
  if (trace.is_flushing()) {
    ensure_materialized(theta);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_affine_grid_generator(dispatchKeySet, theta, N, C, H, W);
  }
  return at::detail::make_tensor<TorchyTensor>(theta.dtype(), theta.device(), H_CUDNN_AFFINE_GRID_GENERATOR, dispatchKeySet, theta, N, C, H, W);
}

at::Tensor wrap_cudnn_affine_grid_generator_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, int64_t N, int64_t C, int64_t H, int64_t W) {
  if (trace.is_flushing()) {
    ensure_materialized(grad);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_affine_grid_generator_backward(dispatchKeySet, grad, N, C, H, W);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_CUDNN_AFFINE_GRID_GENERATOR_BACKWARD, dispatchKeySet, grad, N, C, H, W);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap_cudnn_batch_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, bool training, double exponential_average_factor, double epsilon) {
  ensure_materialized(input, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cudnn_batch_norm(dispatchKeySet, input, weight, bias, running_mean, running_var, training, exponential_average_factor, epsilon);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_cudnn_batch_norm_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & grad_output, const at::Tensor & weight, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, const c10::optional<at::Tensor> & save_mean, const c10::optional<at::Tensor> & save_var, double epsilon, const at::Tensor & reserveSpace) {
  ensure_materialized(input, grad_output, weight, reserveSpace);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cudnn_batch_norm_backward(dispatchKeySet, input, grad_output, weight, running_mean, running_var, save_mean, save_var, epsilon, reserveSpace);
}

at::Tensor wrap_cudnn_convolution_deprecated(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution(dispatchKeySet, self, weight, bias, padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUDNN_CONVOLUTION_DEPRECATED, dispatchKeySet, self, weight, bias, padding, stride, dilation, groups, benchmark, deterministic);
}

at::Tensor wrap_cudnn_convolution_deprecated2(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution(dispatchKeySet, self, weight, padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUDNN_CONVOLUTION_DEPRECATED2, dispatchKeySet, self, weight, padding, stride, dilation, groups, benchmark, deterministic);
}

at::Tensor wrap_cudnn_convolution(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution(dispatchKeySet, self, weight, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUDNN_CONVOLUTION, dispatchKeySet, self, weight, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
}

at::Tensor wrap_cudnn_convolution_backward_input(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef self_size, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution_backward_input(dispatchKeySet, self_size, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_CUDNN_CONVOLUTION_BACKWARD_INPUT, dispatchKeySet, self_size, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
}

std::tuple<at::Tensor,at::Tensor> wrap_cudnn_convolution_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32, std::array<bool,2> output_mask) {
  ensure_materialized(self, grad_output, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cudnn_convolution_backward(dispatchKeySet, self, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32, output_mask);
}

at::Tensor wrap_cudnn_convolution_backward_weight(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef weight_size, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution_backward_weight(dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_CUDNN_CONVOLUTION_BACKWARD_WEIGHT, dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
}

at::Tensor wrap_cudnn_convolution_transpose_deprecated(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution_transpose(dispatchKeySet, self, weight, bias, padding, output_padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUDNN_CONVOLUTION_TRANSPOSE_DEPRECATED, dispatchKeySet, self, weight, bias, padding, output_padding, stride, dilation, groups, benchmark, deterministic);
}

at::Tensor wrap_cudnn_convolution_transpose_deprecated2(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution_transpose(dispatchKeySet, self, weight, padding, output_padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUDNN_CONVOLUTION_TRANSPOSE_DEPRECATED2, dispatchKeySet, self, weight, padding, output_padding, stride, dilation, groups, benchmark, deterministic);
}

at::Tensor wrap_cudnn_convolution_transpose(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution_transpose(dispatchKeySet, self, weight, padding, output_padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUDNN_CONVOLUTION_TRANSPOSE, dispatchKeySet, self, weight, padding, output_padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
}

std::tuple<at::Tensor,at::Tensor> wrap_cudnn_convolution_transpose_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32, std::array<bool,2> output_mask) {
  ensure_materialized(self, grad_output, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cudnn_convolution_transpose_backward(dispatchKeySet, self, grad_output, weight, padding, output_padding, stride, dilation, groups, benchmark, deterministic, allow_tf32, output_mask);
}

at::Tensor wrap_cudnn_convolution_transpose_backward_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution_transpose_backward_input(dispatchKeySet, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_CUDNN_CONVOLUTION_TRANSPOSE_BACKWARD_INPUT, dispatchKeySet, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
}

at::Tensor wrap_cudnn_convolution_transpose_backward_weight(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef weight_size, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, bool allow_tf32) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution_transpose_backward_weight(dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_CUDNN_CONVOLUTION_TRANSPOSE_BACKWARD_WEIGHT, dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, benchmark, deterministic, allow_tf32);
}

at::Tensor wrap_cudnn_convolution_relu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution_relu(dispatchKeySet, self, weight, bias, stride, padding, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUDNN_CONVOLUTION_RELU, dispatchKeySet, self, weight, bias, stride, padding, dilation, groups);
}

at::Tensor wrap_cudnn_convolution_add_relu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, const at::Tensor & z, const c10::optional<at::Scalar> & alpha, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight, z);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_convolution_add_relu(dispatchKeySet, self, weight, z, alpha, bias, stride, padding, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUDNN_CONVOLUTION_ADD_RELU, dispatchKeySet, self, weight, z, alpha, bias, stride, padding, dilation, groups);
}

at::Tensor wrap_cudnn_grid_sampler(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & grid) {
  if (trace.is_flushing()) {
    ensure_materialized(self, grid);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cudnn_grid_sampler(dispatchKeySet, self, grid);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUDNN_GRID_SAMPLER, dispatchKeySet, self, grid);
}

std::tuple<at::Tensor,at::Tensor> wrap_cudnn_grid_sampler_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & grid, const at::Tensor & grad_output) {
  ensure_materialized(self, grid, grad_output);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cudnn_grid_sampler_backward(dispatchKeySet, self, grid, grad_output);
}

std::tuple<at::Tensor,at::Tensor> wrap_cummax(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cummax(dispatchKeySet, self, dim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_cummax_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cummax_outf(dispatchKeySet, self, dim, values, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_cummax_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cummax(dispatchKeySet, self, dim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_cummax_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cummax_outf(dispatchKeySet, self, dim, values, indices);
}

void wrap__cummax_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & values, at::Tensor & indices, int64_t dim) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cummax_helper(dispatchKeySet, self, values, indices, dim);
}

std::tuple<at::Tensor,at::Tensor> wrap_cummin(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cummin(dispatchKeySet, self, dim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_cummin_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cummin_outf(dispatchKeySet, self, dim, values, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_cummin_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cummin(dispatchKeySet, self, dim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_cummin_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cummin_outf(dispatchKeySet, self, dim, values, indices);
}

void wrap__cummin_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & values, at::Tensor & indices, int64_t dim) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cummin_helper(dispatchKeySet, self, values, indices, dim);
}

at::Tensor wrap_cummaxmin_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & input, const at::Tensor & indices, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, input, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cummaxmin_backward(dispatchKeySet, grad, input, indices, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_CUMMAXMIN_BACKWARD, dispatchKeySet, grad, input, indices, dim);
}

at::Tensor wrap_cumprod(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cumprod(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUMPROD, dispatchKeySet, self, dim, dtype);
}

at::Tensor & wrap_cumprod_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CUMPROD_, dispatchKeySet, self, dim, dtype);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cumprod_(dispatchKeySet, self, dim, dtype);
}

at::Tensor & wrap_cumprod_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CUMPROD_OUT, dispatchKeySet, self, dim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cumprod_outf(dispatchKeySet, self, dim, dtype, out);
}

at::Tensor wrap_cumprod_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cumprod(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUMPROD_DIMNAME, dispatchKeySet, self, dim, dtype);
}

at::Tensor & wrap_cumprod__dimname(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CUMPROD__DIMNAME, dispatchKeySet, self, dim, dtype);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cumprod_(dispatchKeySet, self, dim, dtype);
}

at::Tensor & wrap_cumprod_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CUMPROD_DIMNAME_OUT, dispatchKeySet, self, dim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cumprod_outf(dispatchKeySet, self, dim, dtype, out);
}

at::Tensor wrap_cumprod_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & input, int64_t dim, const at::Tensor & output) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, input, output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cumprod_backward(dispatchKeySet, grad, input, dim, output);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_CUMPROD_BACKWARD, dispatchKeySet, grad, input, dim, output);
}

at::Tensor wrap_cumsum(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cumsum(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUMSUM, dispatchKeySet, self, dim, dtype);
}

at::Tensor & wrap_cumsum_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CUMSUM_, dispatchKeySet, self, dim, dtype);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cumsum_(dispatchKeySet, self, dim, dtype);
}

at::Tensor & wrap_cumsum_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CUMSUM_OUT, dispatchKeySet, self, dim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cumsum_outf(dispatchKeySet, self, dim, dtype, out);
}

at::Tensor wrap_cumsum_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cumsum(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CUMSUM_DIMNAME, dispatchKeySet, self, dim, dtype);
}

at::Tensor & wrap_cumsum__dimname(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CUMSUM__DIMNAME, dispatchKeySet, self, dim, dtype);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cumsum_(dispatchKeySet, self, dim, dtype);
}

at::Tensor & wrap_cumsum_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CUMSUM_DIMNAME_OUT, dispatchKeySet, self, dim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cumsum_outf(dispatchKeySet, self, dim, dtype, out);
}

at::Tensor wrap_ctc_loss_IntList(c10::DispatchKeySet dispatchKeySet, const at::Tensor & log_probs, const at::Tensor & targets, at::IntArrayRef input_lengths, at::IntArrayRef target_lengths, int64_t blank, int64_t reduction, bool zero_infinity) {
  if (trace.is_flushing()) {
    ensure_materialized(log_probs, targets);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ctc_loss(dispatchKeySet, log_probs, targets, input_lengths, target_lengths, blank, reduction, zero_infinity);
  }
  return at::detail::make_tensor<TorchyTensor>(log_probs.dtype(), log_probs.device(), H_CTC_LOSS_INTLIST, dispatchKeySet, log_probs, targets, input_lengths, target_lengths, blank, reduction, zero_infinity);
}

at::Tensor wrap_ctc_loss_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & log_probs, const at::Tensor & targets, const at::Tensor & input_lengths, const at::Tensor & target_lengths, int64_t blank, int64_t reduction, bool zero_infinity) {
  if (trace.is_flushing()) {
    ensure_materialized(log_probs, targets, input_lengths, target_lengths);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ctc_loss(dispatchKeySet, log_probs, targets, input_lengths, target_lengths, blank, reduction, zero_infinity);
  }
  return at::detail::make_tensor<TorchyTensor>(log_probs.dtype(), log_probs.device(), H_CTC_LOSS_TENSOR, dispatchKeySet, log_probs, targets, input_lengths, target_lengths, blank, reduction, zero_infinity);
}

std::tuple<at::Tensor,at::Tensor> wrap__ctc_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & log_probs, const at::Tensor & targets, at::IntArrayRef input_lengths, at::IntArrayRef target_lengths, int64_t blank, bool zero_infinity) {
  ensure_materialized(log_probs, targets);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_ctc_loss(dispatchKeySet, log_probs, targets, input_lengths, target_lengths, blank, zero_infinity);
}

at::Tensor wrap__ctc_loss_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & log_probs, const at::Tensor & targets, at::IntArrayRef input_lengths, at::IntArrayRef target_lengths, const at::Tensor & neg_log_likelihood, const at::Tensor & log_alpha, int64_t blank, bool zero_infinity) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, log_probs, targets, neg_log_likelihood, log_alpha);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_ctc_loss_backward(dispatchKeySet, grad, log_probs, targets, input_lengths, target_lengths, neg_log_likelihood, log_alpha, blank, zero_infinity);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H__CTC_LOSS_BACKWARD, dispatchKeySet, grad, log_probs, targets, input_lengths, target_lengths, neg_log_likelihood, log_alpha, blank, zero_infinity);
}

at::Tensor wrap_diag_embed(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t offset, int64_t dim1, int64_t dim2) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::diag_embed(dispatchKeySet, self, offset, dim1, dim2);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIAG_EMBED, dispatchKeySet, self, offset, dim1, dim2);
}

at::Tensor wrap_diagflat(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t offset) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::diagflat(dispatchKeySet, self, offset);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIAGFLAT, dispatchKeySet, self, offset);
}

at::Tensor wrap_diagonal(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t offset, int64_t dim1, int64_t dim2) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::diagonal(dispatchKeySet, self, offset, dim1, dim2);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIAGONAL, dispatchKeySet, self, offset, dim1, dim2);
}

at::Tensor wrap_diagonal_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname outdim, at::Dimname dim1, at::Dimname dim2, int64_t offset) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::diagonal(dispatchKeySet, self, outdim, dim1, dim2, offset);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIAGONAL_DIMNAME, dispatchKeySet, self, outdim, dim1, dim2, offset);
}

at::Tensor wrap_diagonal_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, at::IntArrayRef input_sizes, int64_t offset, int64_t dim1, int64_t dim2) {
  if (trace.is_flushing()) {
    ensure_materialized(grad);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::diagonal_backward(dispatchKeySet, grad, input_sizes, offset, dim1, dim2);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_DIAGONAL_BACKWARD, dispatchKeySet, grad, input_sizes, offset, dim1, dim2);
}

at::Tensor & wrap_fill_diagonal_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & fill_value, bool wrap) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FILL_DIAGONAL_, dispatchKeySet, self, fill_value, wrap);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fill_diagonal_(dispatchKeySet, self, fill_value, wrap);
}

at::Tensor wrap_diff(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t n, int64_t dim, const c10::optional<at::Tensor> & prepend, const c10::optional<at::Tensor> & append) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::diff(dispatchKeySet, self, n, dim, prepend, append);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIFF, dispatchKeySet, self, n, dim, prepend, append);
}

at::Tensor & wrap_diff_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t n, int64_t dim, const c10::optional<at::Tensor> & prepend, const c10::optional<at::Tensor> & append, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIFF_OUT, dispatchKeySet, self, n, dim, prepend, append, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::diff_outf(dispatchKeySet, self, n, dim, prepend, append, out);
}

at::Tensor wrap_div_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::div(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIV_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_div__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIV__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::div_(dispatchKeySet, self, other);
}

at::Tensor & wrap_div_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIV_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::div_outf(dispatchKeySet, self, other, out);
}

at::Tensor & wrap_div_out_mode(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, c10::optional<std::string> rounding_mode, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIV_OUT_MODE, dispatchKeySet, self, other, rounding_mode, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::div_outf(dispatchKeySet, self, other, rounding_mode, out);
}

at::Tensor wrap_div_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::div(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIV_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_div__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIV__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::div_(dispatchKeySet, self, other);
}

at::Tensor wrap_div_Scalar_mode(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, c10::optional<std::string> rounding_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::div(dispatchKeySet, self, other, rounding_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIV_SCALAR_MODE, dispatchKeySet, self, other, rounding_mode);
}

at::Tensor & wrap_div__Scalar_mode(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other, c10::optional<std::string> rounding_mode) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIV__SCALAR_MODE, dispatchKeySet, self, other, rounding_mode);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::div_(dispatchKeySet, self, other, rounding_mode);
}

at::Tensor wrap_divide_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::divide(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIVIDE_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_divide__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIVIDE__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::divide_(dispatchKeySet, self, other);
}

at::Tensor & wrap_divide_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIVIDE_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::divide_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_divide_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::divide(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIVIDE_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_divide__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIVIDE__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::divide_(dispatchKeySet, self, other);
}

at::Tensor wrap_divide_Tensor_mode(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, c10::optional<std::string> rounding_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::divide(dispatchKeySet, self, other, rounding_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIVIDE_TENSOR_MODE, dispatchKeySet, self, other, rounding_mode);
}

at::Tensor & wrap_divide__Tensor_mode(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other, c10::optional<std::string> rounding_mode) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIVIDE__TENSOR_MODE, dispatchKeySet, self, other, rounding_mode);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::divide_(dispatchKeySet, self, other, rounding_mode);
}

at::Tensor & wrap_divide_out_mode(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, c10::optional<std::string> rounding_mode, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIVIDE_OUT_MODE, dispatchKeySet, self, other, rounding_mode, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::divide_outf(dispatchKeySet, self, other, rounding_mode, out);
}

at::Tensor wrap_divide_Scalar_mode(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, c10::optional<std::string> rounding_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::divide(dispatchKeySet, self, other, rounding_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIVIDE_SCALAR_MODE, dispatchKeySet, self, other, rounding_mode);
}

at::Tensor & wrap_divide__Scalar_mode(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other, c10::optional<std::string> rounding_mode) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIVIDE__SCALAR_MODE, dispatchKeySet, self, other, rounding_mode);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::divide_(dispatchKeySet, self, other, rounding_mode);
}

at::Tensor wrap_true_divide_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::true_divide(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TRUE_DIVIDE_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_true_divide__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TRUE_DIVIDE__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::true_divide_(dispatchKeySet, self, other);
}

at::Tensor & wrap_true_divide_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TRUE_DIVIDE_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::true_divide_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_true_divide_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::true_divide(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TRUE_DIVIDE_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_true_divide__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TRUE_DIVIDE__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::true_divide_(dispatchKeySet, self, other);
}

at::Tensor wrap_dot(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & tensor) {
  if (trace.is_flushing()) {
    ensure_materialized(self, tensor);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::dot(dispatchKeySet, self, tensor);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DOT, dispatchKeySet, self, tensor);
}

at::Tensor & wrap_dot_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & tensor, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DOT_OUT, dispatchKeySet, self, tensor, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, tensor, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::dot_outf(dispatchKeySet, self, tensor, out);
}

at::Tensor wrap_vdot(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::vdot(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_VDOT, dispatchKeySet, self, other);
}

at::Tensor & wrap_vdot_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_VDOT_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::vdot_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_einsum(c10::DispatchKeySet dispatchKeySet, std::string equation, at::TensorList tensors) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::einsum(dispatchKeySet, equation, tensors));
}

at::Tensor wrap_embedding(c10::DispatchKeySet dispatchKeySet, const at::Tensor & weight, const at::Tensor & indices, int64_t padding_idx, bool scale_grad_by_freq, bool sparse) {
  if (trace.is_flushing()) {
    ensure_materialized(weight, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::embedding(dispatchKeySet, weight, indices, padding_idx, scale_grad_by_freq, sparse);
  }
  return at::detail::make_tensor<TorchyTensor>(weight.dtype(), weight.device(), H_EMBEDDING, dispatchKeySet, weight, indices, padding_idx, scale_grad_by_freq, sparse);
}

at::Tensor wrap_embedding_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq, bool sparse) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::embedding_backward(dispatchKeySet, grad, indices, num_weights, padding_idx, scale_grad_by_freq, sparse);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_EMBEDDING_BACKWARD, dispatchKeySet, grad, indices, num_weights, padding_idx, scale_grad_by_freq, sparse);
}

at::Tensor wrap_embedding_dense_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::embedding_dense_backward(dispatchKeySet, grad_output, indices, num_weights, padding_idx, scale_grad_by_freq);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_EMBEDDING_DENSE_BACKWARD, dispatchKeySet, grad_output, indices, num_weights, padding_idx, scale_grad_by_freq);
}

at::Tensor & wrap_embedding_renorm_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & indices, double max_norm, double norm_type) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EMBEDDING_RENORM_, dispatchKeySet, self, indices, max_norm, norm_type);
    return self;
  }
  will_override(self);
  ensure_materialized(self, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::embedding_renorm_(dispatchKeySet, self, indices, max_norm, norm_type);
}

at::Tensor wrap_embedding_sparse_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & indices, int64_t num_weights, int64_t padding_idx, bool scale_grad_by_freq) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::embedding_sparse_backward(dispatchKeySet, grad, indices, num_weights, padding_idx, scale_grad_by_freq);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_EMBEDDING_SPARSE_BACKWARD, dispatchKeySet, grad, indices, num_weights, padding_idx, scale_grad_by_freq);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap__embedding_bag_forward_only(c10::DispatchKeySet dispatchKeySet, const at::Tensor & weight, const at::Tensor & indices, const at::Tensor & offsets, bool scale_grad_by_freq, int64_t mode, bool sparse, const c10::optional<at::Tensor> & per_sample_weights, bool include_last_offset, int64_t padding_idx) {
  ensure_materialized(weight, indices, offsets);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_embedding_bag_forward_only(dispatchKeySet, weight, indices, offsets, scale_grad_by_freq, mode, sparse, per_sample_weights, include_last_offset, padding_idx);
}

std::tuple<at::Tensor,at::Tensor> wrap__rowwise_prune(c10::DispatchKeySet dispatchKeySet, const at::Tensor & weight, const at::Tensor & mask, at::ScalarType compressed_indices_dtype) {
  ensure_materialized(weight, mask);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_rowwise_prune(dispatchKeySet, weight, mask, compressed_indices_dtype);
}

at::Tensor wrap_row_stack(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::row_stack(dispatchKeySet, tensors));
}

at::Tensor & wrap_row_stack_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ROW_STACK_OUT, dispatchKeySet, tensors, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::row_stack_outf(dispatchKeySet, tensors, out);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap_embedding_bag(c10::DispatchKeySet dispatchKeySet, const at::Tensor & weight, const at::Tensor & indices, const at::Tensor & offsets, bool scale_grad_by_freq, int64_t mode, bool sparse, const c10::optional<at::Tensor> & per_sample_weights, bool include_last_offset) {
  ensure_materialized(weight, indices, offsets);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::embedding_bag(dispatchKeySet, weight, indices, offsets, scale_grad_by_freq, mode, sparse, per_sample_weights, include_last_offset);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap_embedding_bag_padding_idx(c10::DispatchKeySet dispatchKeySet, const at::Tensor & weight, const at::Tensor & indices, const at::Tensor & offsets, bool scale_grad_by_freq, int64_t mode, bool sparse, const c10::optional<at::Tensor> & per_sample_weights, bool include_last_offset, c10::optional<int64_t> padding_idx) {
  ensure_materialized(weight, indices, offsets);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::embedding_bag(dispatchKeySet, weight, indices, offsets, scale_grad_by_freq, mode, sparse, per_sample_weights, include_last_offset, padding_idx);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap__embedding_bag(c10::DispatchKeySet dispatchKeySet, const at::Tensor & weight, const at::Tensor & indices, const at::Tensor & offsets, bool scale_grad_by_freq, int64_t mode, bool sparse, const c10::optional<at::Tensor> & per_sample_weights, bool include_last_offset, int64_t padding_idx) {
  ensure_materialized(weight, indices, offsets);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_embedding_bag(dispatchKeySet, weight, indices, offsets, scale_grad_by_freq, mode, sparse, per_sample_weights, include_last_offset, padding_idx);
}

at::Tensor wrap__embedding_bag_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & indices, const at::Tensor & offsets, const at::Tensor & offset2bag, const at::Tensor & bag_size, const at::Tensor & maximum_indices, int64_t num_weights, bool scale_grad_by_freq, int64_t mode, bool sparse, const c10::optional<at::Tensor> & per_sample_weights, int64_t padding_idx) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, indices, offsets, offset2bag, bag_size, maximum_indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_embedding_bag_backward(dispatchKeySet, grad, indices, offsets, offset2bag, bag_size, maximum_indices, num_weights, scale_grad_by_freq, mode, sparse, per_sample_weights, padding_idx);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H__EMBEDDING_BAG_BACKWARD, dispatchKeySet, grad, indices, offsets, offset2bag, bag_size, maximum_indices, num_weights, scale_grad_by_freq, mode, sparse, per_sample_weights, padding_idx);
}

at::Tensor wrap__embedding_bag_sparse_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & indices, const at::Tensor & offsets, const at::Tensor & offset2bag, const at::Tensor & bag_size, int64_t num_weights, bool scale_grad_by_freq, int64_t mode, const c10::optional<at::Tensor> & per_sample_weights, int64_t padding_idx) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, indices, offsets, offset2bag, bag_size);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_embedding_bag_sparse_backward(dispatchKeySet, grad, indices, offsets, offset2bag, bag_size, num_weights, scale_grad_by_freq, mode, per_sample_weights, padding_idx);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H__EMBEDDING_BAG_SPARSE_BACKWARD, dispatchKeySet, grad, indices, offsets, offset2bag, bag_size, num_weights, scale_grad_by_freq, mode, per_sample_weights, padding_idx);
}

at::Tensor wrap__embedding_bag_dense_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & indices, const at::Tensor & offset2bag, const at::Tensor & bag_size, const at::Tensor & maximum_indices, int64_t num_weights, bool scale_grad_by_freq, int64_t mode, const c10::optional<at::Tensor> & per_sample_weights, int64_t padding_idx) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, indices, offset2bag, bag_size, maximum_indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_embedding_bag_dense_backward(dispatchKeySet, grad, indices, offset2bag, bag_size, maximum_indices, num_weights, scale_grad_by_freq, mode, per_sample_weights, padding_idx);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H__EMBEDDING_BAG_DENSE_BACKWARD, dispatchKeySet, grad, indices, offset2bag, bag_size, maximum_indices, num_weights, scale_grad_by_freq, mode, per_sample_weights, padding_idx);
}

at::Tensor wrap__embedding_bag_per_sample_weights_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & weight, const at::Tensor & indices, const at::Tensor & offsets, const at::Tensor & offset2bag, int64_t mode, int64_t padding_idx) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, weight, indices, offsets, offset2bag);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_embedding_bag_per_sample_weights_backward(dispatchKeySet, grad, weight, indices, offsets, offset2bag, mode, padding_idx);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H__EMBEDDING_BAG_PER_SAMPLE_WEIGHTS_BACKWARD, dispatchKeySet, grad, weight, indices, offsets, offset2bag, mode, padding_idx);
}

at::Tensor wrap_empty_names(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::empty(dispatchKeySet, size, names, dtype, layout, device, pin_memory, memory_format));
}

at::Tensor wrap_empty_memory_format(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::empty(dispatchKeySet, size, dtype, layout, device, pin_memory, memory_format));
}

at::Tensor wrap_new_empty(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::new_empty(dispatchKeySet, self, size, dtype, layout, device, pin_memory);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NEW_EMPTY, dispatchKeySet, self, size, dtype, layout, device, pin_memory);
}

at::Tensor wrap_new_empty_strided(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size, at::IntArrayRef stride, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::new_empty_strided(dispatchKeySet, self, size, stride, dtype, layout, device, pin_memory);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NEW_EMPTY_STRIDED, dispatchKeySet, self, size, stride, dtype, layout, device, pin_memory);
}

at::Tensor wrap_new_full(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size, const at::Scalar & fill_value, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::new_full(dispatchKeySet, self, size, fill_value, dtype, layout, device, pin_memory);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NEW_FULL, dispatchKeySet, self, size, fill_value, dtype, layout, device, pin_memory);
}

at::Tensor wrap_new_zeros(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::new_zeros(dispatchKeySet, self, size, dtype, layout, device, pin_memory);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NEW_ZEROS, dispatchKeySet, self, size, dtype, layout, device, pin_memory);
}

at::Tensor wrap__empty_affine_quantized(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, double scale, int64_t zero_point, c10::optional<at::MemoryFormat> memory_format) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::_empty_affine_quantized(dispatchKeySet, size, dtype, layout, device, pin_memory, scale, zero_point, memory_format));
}

at::Tensor wrap__empty_per_channel_affine_quantized(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, const at::Tensor & scales, const at::Tensor & zero_points, int64_t axis, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(scales, zero_points);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_empty_per_channel_affine_quantized(dispatchKeySet, size, scales, zero_points, axis, dtype, layout, device, pin_memory, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(scales.dtype(), scales.device(), H__EMPTY_PER_CHANNEL_AFFINE_QUANTIZED, dispatchKeySet, size, scales, zero_points, axis, dtype, layout, device, pin_memory, memory_format);
}

const at::Tensor & wrap_resize_(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size, c10::optional<at::MemoryFormat> memory_format) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::resize_(dispatchKeySet, self, size, memory_format);
}

at::Tensor wrap_empty_quantized(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, const at::Tensor & qtensor) {
  if (trace.is_flushing()) {
    ensure_materialized(qtensor);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::empty_quantized(dispatchKeySet, size, qtensor);
  }
  return at::detail::make_tensor<TorchyTensor>(qtensor.dtype(), qtensor.device(), H_EMPTY_QUANTIZED, dispatchKeySet, size, qtensor);
}

at::Tensor & wrap_empty_out(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::MemoryFormat> memory_format, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EMPTY_OUT, dispatchKeySet, size, memory_format, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::empty_outf(dispatchKeySet, size, memory_format, out);
}

at::Tensor wrap_empty_like(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::empty_like(dispatchKeySet, self, dtype, layout, device, pin_memory, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_EMPTY_LIKE, dispatchKeySet, self, dtype, layout, device, pin_memory, memory_format);
}

at::Tensor wrap_empty_strided(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, at::IntArrayRef stride, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::empty_strided(dispatchKeySet, size, stride, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_erf_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ERF_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::erf_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_erfc_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ERFC_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::erfc_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_exp_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EXP_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::exp_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_exp2_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EXP2_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::exp2_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_expm1_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EXPM1_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::expm1_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_expand(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size, bool implicit) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::expand(dispatchKeySet, self, size, implicit);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_EXPAND, dispatchKeySet, self, size, implicit);
}

at::Tensor wrap_expand_as(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::expand_as(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_EXPAND_AS, dispatchKeySet, self, other);
}

at::Tensor wrap_eye(c10::DispatchKeySet dispatchKeySet, int64_t n, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::eye(dispatchKeySet, n, dtype, layout, device, pin_memory));
}

at::Tensor wrap_eye_m(c10::DispatchKeySet dispatchKeySet, int64_t n, int64_t m, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::eye(dispatchKeySet, n, m, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_eye_out(c10::DispatchKeySet dispatchKeySet, int64_t n, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EYE_OUT, dispatchKeySet, n, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::eye_outf(dispatchKeySet, n, out);
}

at::Tensor & wrap_eye_m_out(c10::DispatchKeySet dispatchKeySet, int64_t n, int64_t m, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EYE_M_OUT, dispatchKeySet, n, m, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::eye_outf(dispatchKeySet, n, m, out);
}

at::Tensor wrap_flatten_using_ints(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t start_dim, int64_t end_dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::flatten(dispatchKeySet, self, start_dim, end_dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLATTEN_USING_INTS, dispatchKeySet, self, start_dim, end_dim);
}

at::Tensor wrap_flatten_named_out_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t start_dim, int64_t end_dim, at::Dimname out_dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::flatten(dispatchKeySet, self, start_dim, end_dim, out_dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLATTEN_NAMED_OUT_DIM, dispatchKeySet, self, start_dim, end_dim, out_dim);
}

at::Tensor wrap_flatten_using_names(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname start_dim, at::Dimname end_dim, at::Dimname out_dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::flatten(dispatchKeySet, self, start_dim, end_dim, out_dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLATTEN_USING_NAMES, dispatchKeySet, self, start_dim, end_dim, out_dim);
}

at::Tensor wrap_flatten_DimnameList(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dims, at::Dimname out_dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::flatten(dispatchKeySet, self, dims, out_dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLATTEN_DIMNAMELIST, dispatchKeySet, self, dims, out_dim);
}

at::Tensor wrap_unflatten_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, at::IntArrayRef sizes, c10::optional<at::DimnameList> names) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::unflatten(dispatchKeySet, self, dim, sizes, names);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_UNFLATTEN_INT, dispatchKeySet, self, dim, sizes, names);
}

at::Tensor wrap_unflatten_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, at::IntArrayRef sizes, at::DimnameList names) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::unflatten(dispatchKeySet, self, dim, sizes, names);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_UNFLATTEN_DIMNAME, dispatchKeySet, self, dim, sizes, names);
}

at::Tensor & wrap_fill__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FILL__SCALAR, dispatchKeySet, self, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fill_(dispatchKeySet, self, value);
}

at::Tensor & wrap_fill__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FILL__TENSOR, dispatchKeySet, self, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self, value);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fill_(dispatchKeySet, self, value);
}

at::Tensor wrap_floor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::floor(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLOOR, dispatchKeySet, self);
}

at::Tensor & wrap_floor_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FLOOR_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::floor_(dispatchKeySet, self);
}

at::Tensor & wrap_floor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FLOOR_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::floor_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_floor_divide(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::floor_divide(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLOOR_DIVIDE, dispatchKeySet, self, other);
}

at::Tensor & wrap_floor_divide__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FLOOR_DIVIDE__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::floor_divide_(dispatchKeySet, self, other);
}

at::Tensor & wrap_floor_divide_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FLOOR_DIVIDE_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::floor_divide_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_floor_divide_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::floor_divide(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLOOR_DIVIDE_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_floor_divide__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FLOOR_DIVIDE__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::floor_divide_(dispatchKeySet, self, other);
}

at::Tensor wrap_frac(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::frac(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FRAC, dispatchKeySet, self);
}

at::Tensor & wrap_frac_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FRAC_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::frac_(dispatchKeySet, self);
}

at::Tensor & wrap_frac_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FRAC_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::frac_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_full_names(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, const at::Scalar & fill_value, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::full(dispatchKeySet, size, fill_value, names, dtype, layout, device, pin_memory));
}

at::Tensor wrap_full(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, const at::Scalar & fill_value, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::full(dispatchKeySet, size, fill_value, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_full_out(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, const at::Scalar & fill_value, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FULL_OUT, dispatchKeySet, size, fill_value, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::full_outf(dispatchKeySet, size, fill_value, out);
}

at::Tensor wrap_full_like(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & fill_value, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::full_like(dispatchKeySet, self, fill_value, dtype, layout, device, pin_memory, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FULL_LIKE, dispatchKeySet, self, fill_value, dtype, layout, device, pin_memory, memory_format);
}

at::Tensor wrap_from_file(c10::DispatchKeySet dispatchKeySet, std::string filename, c10::optional<bool> shared, c10::optional<int64_t> size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::from_file(dispatchKeySet, filename, shared, size, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_gcd_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GCD_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::gcd_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_gcd(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::gcd(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GCD, dispatchKeySet, self, other);
}

at::Tensor & wrap_gcd_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GCD_, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::gcd_(dispatchKeySet, self, other);
}

at::Tensor & wrap_lcm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LCM_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lcm_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_lcm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::lcm(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LCM, dispatchKeySet, self, other);
}

at::Tensor & wrap_lcm_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LCM_, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lcm_(dispatchKeySet, self, other);
}

at::Tensor wrap_grid_sampler(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & grid, int64_t interpolation_mode, int64_t padding_mode, bool align_corners) {
  if (trace.is_flushing()) {
    ensure_materialized(input, grid);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::grid_sampler(dispatchKeySet, input, grid, interpolation_mode, padding_mode, align_corners);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_GRID_SAMPLER, dispatchKeySet, input, grid, interpolation_mode, padding_mode, align_corners);
}

at::Tensor wrap_grid_sampler_2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & grid, int64_t interpolation_mode, int64_t padding_mode, bool align_corners) {
  if (trace.is_flushing()) {
    ensure_materialized(input, grid);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::grid_sampler_2d(dispatchKeySet, input, grid, interpolation_mode, padding_mode, align_corners);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_GRID_SAMPLER_2D, dispatchKeySet, input, grid, interpolation_mode, padding_mode, align_corners);
}

std::tuple<at::Tensor,at::Tensor> wrap_grid_sampler_2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & input, const at::Tensor & grid, int64_t interpolation_mode, int64_t padding_mode, bool align_corners) {
  ensure_materialized(grad_output, input, grid);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::grid_sampler_2d_backward(dispatchKeySet, grad_output, input, grid, interpolation_mode, padding_mode, align_corners);
}

at::Tensor wrap__grid_sampler_2d_cpu_fallback(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & grid, int64_t interpolation_mode, int64_t padding_mode, bool align_corners) {
  if (trace.is_flushing()) {
    ensure_materialized(input, grid);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_grid_sampler_2d_cpu_fallback(dispatchKeySet, input, grid, interpolation_mode, padding_mode, align_corners);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H__GRID_SAMPLER_2D_CPU_FALLBACK, dispatchKeySet, input, grid, interpolation_mode, padding_mode, align_corners);
}

std::tuple<at::Tensor,at::Tensor> wrap__grid_sampler_2d_cpu_fallback_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & input, const at::Tensor & grid, int64_t interpolation_mode, int64_t padding_mode, bool align_corners) {
  ensure_materialized(grad_output, input, grid);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_grid_sampler_2d_cpu_fallback_backward(dispatchKeySet, grad_output, input, grid, interpolation_mode, padding_mode, align_corners);
}

at::Tensor wrap_grid_sampler_3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & grid, int64_t interpolation_mode, int64_t padding_mode, bool align_corners) {
  if (trace.is_flushing()) {
    ensure_materialized(input, grid);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::grid_sampler_3d(dispatchKeySet, input, grid, interpolation_mode, padding_mode, align_corners);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_GRID_SAMPLER_3D, dispatchKeySet, input, grid, interpolation_mode, padding_mode, align_corners);
}

std::tuple<at::Tensor,at::Tensor> wrap_grid_sampler_3d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & input, const at::Tensor & grid, int64_t interpolation_mode, int64_t padding_mode, bool align_corners) {
  ensure_materialized(grad_output, input, grid);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::grid_sampler_3d_backward(dispatchKeySet, grad_output, input, grid, interpolation_mode, padding_mode, align_corners);
}

at::Tensor wrap_hann_window(c10::DispatchKeySet dispatchKeySet, int64_t window_length, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::hann_window(dispatchKeySet, window_length, dtype, layout, device, pin_memory));
}

at::Tensor wrap_hann_window_periodic(c10::DispatchKeySet dispatchKeySet, int64_t window_length, bool periodic, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::hann_window(dispatchKeySet, window_length, periodic, dtype, layout, device, pin_memory));
}

at::Tensor wrap_hamming_window(c10::DispatchKeySet dispatchKeySet, int64_t window_length, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::hamming_window(dispatchKeySet, window_length, dtype, layout, device, pin_memory));
}

at::Tensor wrap_hamming_window_periodic(c10::DispatchKeySet dispatchKeySet, int64_t window_length, bool periodic, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::hamming_window(dispatchKeySet, window_length, periodic, dtype, layout, device, pin_memory));
}

at::Tensor wrap_hamming_window_periodic_alpha(c10::DispatchKeySet dispatchKeySet, int64_t window_length, bool periodic, double alpha, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::hamming_window(dispatchKeySet, window_length, periodic, alpha, dtype, layout, device, pin_memory));
}

at::Tensor wrap_hamming_window_periodic_alpha_beta(c10::DispatchKeySet dispatchKeySet, int64_t window_length, bool periodic, double alpha, double beta, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::hamming_window(dispatchKeySet, window_length, periodic, alpha, beta, dtype, layout, device, pin_memory));
}

at::Tensor wrap_kaiser_window(c10::DispatchKeySet dispatchKeySet, int64_t window_length, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::kaiser_window(dispatchKeySet, window_length, dtype, layout, device, pin_memory));
}

at::Tensor wrap_kaiser_window_periodic(c10::DispatchKeySet dispatchKeySet, int64_t window_length, bool periodic, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::kaiser_window(dispatchKeySet, window_length, periodic, dtype, layout, device, pin_memory));
}

at::Tensor wrap_kaiser_window_beta(c10::DispatchKeySet dispatchKeySet, int64_t window_length, bool periodic, double beta, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::kaiser_window(dispatchKeySet, window_length, periodic, beta, dtype, layout, device, pin_memory));
}

at::Tensor wrap_hinge_embedding_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, double margin, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hinge_embedding_loss(dispatchKeySet, self, target, margin, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_HINGE_EMBEDDING_LOSS, dispatchKeySet, self, target, margin, reduction);
}

at::Tensor wrap_group_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, int64_t num_groups, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, double eps, bool cudnn_enabled) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::group_norm(dispatchKeySet, input, num_groups, weight, bias, eps, cudnn_enabled);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_GROUP_NORM, dispatchKeySet, input, num_groups, weight, bias, eps, cudnn_enabled);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_native_group_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, int64_t N, int64_t C, int64_t HxW, int64_t group, double eps) {
  ensure_materialized(input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::native_group_norm(dispatchKeySet, input, weight, bias, N, C, HxW, group, eps);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_native_group_norm_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_out, const at::Tensor & input, const at::Tensor & mean, const at::Tensor & rstd, const c10::optional<at::Tensor> & weight, int64_t N, int64_t C, int64_t HxW, int64_t group, std::array<bool,3> output_mask) {
  ensure_materialized(grad_out, input, mean, rstd);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::native_group_norm_backward(dispatchKeySet, grad_out, input, mean, rstd, weight, N, C, HxW, group, output_mask);
}

at::Tensor wrap__fft_r2c(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, int64_t normalization, bool onesided) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_fft_r2c(dispatchKeySet, self, dim, normalization, onesided);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__FFT_R2C, dispatchKeySet, self, dim, normalization, onesided);
}

at::Tensor & wrap__fft_r2c_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, int64_t normalization, bool onesided, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__FFT_R2C_OUT, dispatchKeySet, self, dim, normalization, onesided, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_fft_r2c_outf(dispatchKeySet, self, dim, normalization, onesided, out);
}

at::Tensor wrap__fft_c2r(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, int64_t normalization, int64_t last_dim_size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_fft_c2r(dispatchKeySet, self, dim, normalization, last_dim_size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__FFT_C2R, dispatchKeySet, self, dim, normalization, last_dim_size);
}

at::Tensor & wrap__fft_c2r_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, int64_t normalization, int64_t last_dim_size, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__FFT_C2R_OUT, dispatchKeySet, self, dim, normalization, last_dim_size, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_fft_c2r_outf(dispatchKeySet, self, dim, normalization, last_dim_size, out);
}

at::Tensor wrap__fft_c2c(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, int64_t normalization, bool forward) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_fft_c2c(dispatchKeySet, self, dim, normalization, forward);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__FFT_C2C, dispatchKeySet, self, dim, normalization, forward);
}

at::Tensor & wrap__fft_c2c_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, int64_t normalization, bool forward, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__FFT_C2C_OUT, dispatchKeySet, self, dim, normalization, forward, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_fft_c2c_outf(dispatchKeySet, self, dim, normalization, forward, out);
}

int64_t wrap__cufft_get_plan_cache_size(c10::DispatchKeySet dispatchKeySet, int64_t device_index) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cufft_get_plan_cache_size(dispatchKeySet, device_index);
}

int64_t wrap__cufft_get_plan_cache_max_size(c10::DispatchKeySet dispatchKeySet, int64_t device_index) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cufft_get_plan_cache_max_size(dispatchKeySet, device_index);
}

void wrap__cufft_set_plan_cache_max_size(c10::DispatchKeySet dispatchKeySet, int64_t device_index, int64_t max_size) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cufft_set_plan_cache_max_size(dispatchKeySet, device_index, max_size);
}

void wrap__cufft_clear_plan_cache(c10::DispatchKeySet dispatchKeySet, int64_t device_index) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cufft_clear_plan_cache(dispatchKeySet, device_index);
}

at::Tensor wrap_index_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::List<c10::optional<at::Tensor>> & indices) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index(dispatchKeySet, self, indices);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_TENSOR, dispatchKeySet, self, indices);
}

at::Tensor & wrap_index_copy_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_COPY_, dispatchKeySet, self, dim, index, source);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, source);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_copy_(dispatchKeySet, self, dim, index, source);
}

at::Tensor wrap_index_copy(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, source);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_copy(dispatchKeySet, self, dim, index, source);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_COPY, dispatchKeySet, self, dim, index, source);
}

at::Tensor & wrap_index_copy__dimname(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & source) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_COPY__DIMNAME, dispatchKeySet, self, dim, index, source);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, source);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_copy_(dispatchKeySet, self, dim, index, source);
}

at::Tensor wrap_index_copy_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & source) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, source);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_copy(dispatchKeySet, self, dim, index, source);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_COPY_DIMNAME, dispatchKeySet, self, dim, index, source);
}

at::Tensor & wrap_index_put_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const c10::List<c10::optional<at::Tensor>> & indices, const at::Tensor & values, bool accumulate) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_PUT_, dispatchKeySet, self, indices, values, accumulate);
    return self;
  }
  will_override(self);
  ensure_materialized(self, values);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_put_(dispatchKeySet, self, indices, values, accumulate);
}

at::Tensor wrap_index_put(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::List<c10::optional<at::Tensor>> & indices, const at::Tensor & values, bool accumulate) {
  if (trace.is_flushing()) {
    ensure_materialized(self, values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_put(dispatchKeySet, self, indices, values, accumulate);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_PUT, dispatchKeySet, self, indices, values, accumulate);
}

at::Tensor & wrap__index_put_impl_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const c10::List<c10::optional<at::Tensor>> & indices, const at::Tensor & values, bool accumulate, bool unsafe) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__INDEX_PUT_IMPL_, dispatchKeySet, self, indices, values, accumulate, unsafe);
    return self;
  }
  will_override(self);
  ensure_materialized(self, values);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_index_put_impl_(dispatchKeySet, self, indices, values, accumulate, unsafe);
}

at::Tensor wrap_instance_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, bool use_input_stats, double momentum, double eps, bool cudnn_enabled) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::instance_norm(dispatchKeySet, input, weight, bias, running_mean, running_var, use_input_stats, momentum, eps, cudnn_enabled);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_INSTANCE_NORM, dispatchKeySet, input, weight, bias, running_mean, running_var, use_input_stats, momentum, eps, cudnn_enabled);
}

at::Tensor wrap_inverse(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::inverse(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INVERSE, dispatchKeySet, self);
}

at::Tensor & wrap_inverse_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INVERSE_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::inverse_outf(dispatchKeySet, self, out);
}

at::Tensor wrap__inverse_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_inverse_helper(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__INVERSE_HELPER, dispatchKeySet, self);
}

at::Tensor wrap_isclose(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, double rtol, double atol, bool equal_nan) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::isclose(dispatchKeySet, self, other, rtol, atol, equal_nan);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ISCLOSE, dispatchKeySet, self, other, rtol, atol, equal_nan);
}

at::Tensor wrap_isnan(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::isnan(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ISNAN, dispatchKeySet, self);
}

bool wrap_is_distributed(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::is_distributed(dispatchKeySet, self);
}

at::Tensor wrap_isreal(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::isreal(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ISREAL, dispatchKeySet, self);
}

bool wrap_is_nonzero(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::is_nonzero(dispatchKeySet, self);
}

bool wrap_is_same_size(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::is_same_size(dispatchKeySet, self, other);
}

at::Tensor wrap_kl_div(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction, bool log_target) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::kl_div(dispatchKeySet, self, target, reduction, log_target);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_KL_DIV, dispatchKeySet, self, target, reduction, log_target);
}

at::Tensor wrap_kl_div_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction, bool log_target) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::kl_div_backward(dispatchKeySet, grad_output, self, target, reduction, log_target);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_KL_DIV_BACKWARD, dispatchKeySet, grad_output, self, target, reduction, log_target);
}

at::Tensor wrap_kron(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::kron(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_KRON, dispatchKeySet, self, other);
}

at::Tensor & wrap_kron_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_KRON_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::kron_outf(dispatchKeySet, self, other, out);
}

std::tuple<at::Tensor,at::Tensor> wrap_kthvalue(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t k, int64_t dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::kthvalue(dispatchKeySet, self, k, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_kthvalue_values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t k, int64_t dim, bool keepdim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::kthvalue_outf(dispatchKeySet, self, k, dim, keepdim, values, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_kthvalue_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t k, at::Dimname dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::kthvalue(dispatchKeySet, self, k, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_kthvalue_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t k, at::Dimname dim, bool keepdim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::kthvalue_outf(dispatchKeySet, self, k, dim, keepdim, values, indices);
}

at::Tensor wrap_layer_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::IntArrayRef normalized_shape, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, double eps, bool cudnn_enable) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::layer_norm(dispatchKeySet, input, normalized_shape, weight, bias, eps, cudnn_enable);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_LAYER_NORM, dispatchKeySet, input, normalized_shape, weight, bias, eps, cudnn_enable);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_native_layer_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::IntArrayRef normalized_shape, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, double eps) {
  ensure_materialized(input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::native_layer_norm(dispatchKeySet, input, normalized_shape, weight, bias, eps);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_native_layer_norm_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_out, const at::Tensor & input, at::IntArrayRef normalized_shape, const at::Tensor & mean, const at::Tensor & rstd, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, std::array<bool,3> output_mask) {
  ensure_materialized(grad_out, input, mean, rstd);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::native_layer_norm_backward(dispatchKeySet, grad_out, input, normalized_shape, mean, rstd, weight, bias, output_mask);
}

at::Tensor wrap_nan_to_num(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<double> nan, c10::optional<double> posinf, c10::optional<double> neginf) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nan_to_num(dispatchKeySet, self, nan, posinf, neginf);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NAN_TO_NUM, dispatchKeySet, self, nan, posinf, neginf);
}

at::Tensor & wrap_nan_to_num_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, c10::optional<double> nan, c10::optional<double> posinf, c10::optional<double> neginf) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NAN_TO_NUM_, dispatchKeySet, self, nan, posinf, neginf);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nan_to_num_(dispatchKeySet, self, nan, posinf, neginf);
}

at::Tensor & wrap_nan_to_num_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<double> nan, c10::optional<double> posinf, c10::optional<double> neginf, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NAN_TO_NUM_OUT, dispatchKeySet, self, nan, posinf, neginf, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nan_to_num_outf(dispatchKeySet, self, nan, posinf, neginf, out);
}

at::Tensor wrap_linear(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linear(dispatchKeySet, input, weight, bias);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_LINEAR, dispatchKeySet, input, weight, bias);
}

at::Tensor wrap_mkldnn_linear(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, const c10::optional<at::Tensor> & bias) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_linear(dispatchKeySet, self, weight, bias);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MKLDNN_LINEAR, dispatchKeySet, self, weight, bias);
}

at::Tensor wrap_mkldnn_linear_backward_input(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef input_size, const at::Tensor & grad_output, const at::Tensor & weight) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_linear_backward_input(dispatchKeySet, input_size, grad_output, weight);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MKLDNN_LINEAR_BACKWARD_INPUT, dispatchKeySet, input_size, grad_output, weight);
}

std::tuple<at::Tensor,at::Tensor> wrap_mkldnn_linear_backward_weights(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & input, const at::Tensor & weight, bool bias_defined) {
  ensure_materialized(grad_output, input, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mkldnn_linear_backward_weights(dispatchKeySet, grad_output, input, weight, bias_defined);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_mkldnn_linear_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, std::array<bool,3> output_mask) {
  ensure_materialized(self, grad_output, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mkldnn_linear_backward(dispatchKeySet, self, grad_output, weight, output_mask);
}

at::Tensor wrap_fbgemm_linear_int8_weight_fp32_activation(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const at::Tensor & packed, const at::Tensor & col_offsets, const at::Scalar & weight_scale, const at::Scalar & weight_zero_point, const at::Tensor & bias) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight, packed, col_offsets, bias);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fbgemm_linear_int8_weight_fp32_activation(dispatchKeySet, input, weight, packed, col_offsets, weight_scale, weight_zero_point, bias);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_FBGEMM_LINEAR_INT8_WEIGHT_FP32_ACTIVATION, dispatchKeySet, input, weight, packed, col_offsets, weight_scale, weight_zero_point, bias);
}

at::Tensor wrap_fbgemm_linear_int8_weight(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const at::Tensor & packed, const at::Tensor & col_offsets, const at::Scalar & weight_scale, const at::Scalar & weight_zero_point, const at::Tensor & bias) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight, packed, col_offsets, bias);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fbgemm_linear_int8_weight(dispatchKeySet, input, weight, packed, col_offsets, weight_scale, weight_zero_point, bias);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_FBGEMM_LINEAR_INT8_WEIGHT, dispatchKeySet, input, weight, packed, col_offsets, weight_scale, weight_zero_point, bias);
}

std::tuple<at::Tensor,at::Tensor,double,int64_t> wrap_fbgemm_linear_quantize_weight(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input) {
  ensure_materialized(input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fbgemm_linear_quantize_weight(dispatchKeySet, input);
}

at::Tensor wrap_fbgemm_pack_gemm_matrix_fp16(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fbgemm_pack_gemm_matrix_fp16(dispatchKeySet, input);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_FBGEMM_PACK_GEMM_MATRIX_FP16, dispatchKeySet, input);
}

at::Tensor wrap_fbgemm_linear_fp16_weight_fp32_activation(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & packed_weight, const at::Tensor & bias) {
  if (trace.is_flushing()) {
    ensure_materialized(input, packed_weight, bias);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fbgemm_linear_fp16_weight_fp32_activation(dispatchKeySet, input, packed_weight, bias);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_FBGEMM_LINEAR_FP16_WEIGHT_FP32_ACTIVATION, dispatchKeySet, input, packed_weight, bias);
}

at::Tensor wrap_fbgemm_linear_fp16_weight(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & packed_weight, const at::Tensor & bias) {
  if (trace.is_flushing()) {
    ensure_materialized(input, packed_weight, bias);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fbgemm_linear_fp16_weight(dispatchKeySet, input, packed_weight, bias);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_FBGEMM_LINEAR_FP16_WEIGHT, dispatchKeySet, input, packed_weight, bias);
}

at::Tensor wrap_fbgemm_pack_quantized_matrix(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fbgemm_pack_quantized_matrix(dispatchKeySet, input);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_FBGEMM_PACK_QUANTIZED_MATRIX, dispatchKeySet, input);
}

at::Tensor wrap_fbgemm_pack_quantized_matrix_KN(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, int64_t K, int64_t N) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fbgemm_pack_quantized_matrix(dispatchKeySet, input, K, N);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_FBGEMM_PACK_QUANTIZED_MATRIX_KN, dispatchKeySet, input, K, N);
}

at::Tensor wrap_ldexp_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ldexp(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LDEXP_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_ldexp_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LDEXP_, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ldexp_(dispatchKeySet, self, other);
}

at::Tensor & wrap_ldexp_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LDEXP_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ldexp_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_linspace(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, c10::optional<int64_t> steps, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::linspace(dispatchKeySet, start, end, steps, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_linspace_out(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, c10::optional<int64_t> steps, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINSPACE_OUT, dispatchKeySet, start, end, steps, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linspace_outf(dispatchKeySet, start, end, steps, out);
}

at::Tensor & wrap_log_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOG_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::log_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_log10_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOG10_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::log10_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_log1p(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::log1p(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOG1P, dispatchKeySet, self);
}

at::Tensor & wrap_log1p_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOG1P_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::log1p_(dispatchKeySet, self);
}

at::Tensor & wrap_log1p_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOG1P_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::log1p_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_log2_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOG2_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::log2_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_logaddexp_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGADDEXP_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logaddexp_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_logaddexp(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logaddexp(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGADDEXP, dispatchKeySet, self, other);
}

at::Tensor & wrap_logaddexp2_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGADDEXP2_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logaddexp2_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_logaddexp2(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logaddexp2(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGADDEXP2, dispatchKeySet, self, other);
}

at::Tensor wrap_xlogy_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::xlogy(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_XLOGY_TENSOR, dispatchKeySet, self, other);
}

at::Tensor wrap_xlogy_Scalar_Self(c10::DispatchKeySet dispatchKeySet, const at::Scalar & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::xlogy(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(other.dtype(), other.device(), H_XLOGY_SCALAR_SELF, dispatchKeySet, self, other);
}

at::Tensor wrap_xlogy_Scalar_Other(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::xlogy(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_XLOGY_SCALAR_OTHER, dispatchKeySet, self, other);
}

at::Tensor & wrap_xlogy__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_XLOGY__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::xlogy_(dispatchKeySet, self, other);
}

at::Tensor & wrap_xlogy__Scalar_Other(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_XLOGY__SCALAR_OTHER, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::xlogy_(dispatchKeySet, self, other);
}

at::Tensor & wrap_xlogy_OutTensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_XLOGY_OUTTENSOR, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::xlogy_outf(dispatchKeySet, self, other, out);
}

at::Tensor & wrap_xlogy_OutScalar_Self(c10::DispatchKeySet dispatchKeySet, const at::Scalar & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_XLOGY_OUTSCALAR_SELF, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::xlogy_outf(dispatchKeySet, self, other, out);
}

at::Tensor & wrap_xlogy_OutScalar_Other(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_XLOGY_OUTSCALAR_OTHER, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::xlogy_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_logdet(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logdet(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGDET, dispatchKeySet, self);
}

at::Tensor wrap_logspace(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, c10::optional<int64_t> steps, double base, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::logspace(dispatchKeySet, start, end, steps, base, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_logspace_out(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, c10::optional<int64_t> steps, double base, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGSPACE_OUT, dispatchKeySet, start, end, steps, base, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logspace_outf(dispatchKeySet, start, end, steps, base, out);
}

at::Tensor wrap_log_softmax_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::log_softmax(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOG_SOFTMAX_INT, dispatchKeySet, self, dim, dtype);
}

at::Tensor wrap_log_softmax_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::log_softmax(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOG_SOFTMAX_DIMNAME, dispatchKeySet, self, dim, dtype);
}

at::Tensor wrap__log_softmax(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool half_to_float) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_log_softmax(dispatchKeySet, self, dim, half_to_float);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__LOG_SOFTMAX, dispatchKeySet, self, dim, half_to_float);
}

at::Tensor wrap__log_softmax_backward_data(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_log_softmax_backward_data(dispatchKeySet, grad_output, output, dim, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H__LOG_SOFTMAX_BACKWARD_DATA, dispatchKeySet, grad_output, output, dim, self);
}

at::Tensor wrap__logcumsumexp(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_logcumsumexp(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__LOGCUMSUMEXP, dispatchKeySet, self, dim);
}

at::Tensor & wrap__logcumsumexp_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__LOGCUMSUMEXP_OUT, dispatchKeySet, self, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_logcumsumexp_outf(dispatchKeySet, self, dim, out);
}

at::Tensor wrap_logcumsumexp(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logcumsumexp(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGCUMSUMEXP, dispatchKeySet, self, dim);
}

at::Tensor & wrap_logcumsumexp_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGCUMSUMEXP_OUT, dispatchKeySet, self, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logcumsumexp_outf(dispatchKeySet, self, dim, out);
}

at::Tensor wrap_logcumsumexp_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logcumsumexp(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGCUMSUMEXP_DIMNAME, dispatchKeySet, self, dim);
}

at::Tensor & wrap_logcumsumexp_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGCUMSUMEXP_DIMNAME_OUT, dispatchKeySet, self, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logcumsumexp_outf(dispatchKeySet, self, dim, out);
}

at::Tensor wrap_logsumexp(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logsumexp(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGSUMEXP, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_logsumexp_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGSUMEXP_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logsumexp_outf(dispatchKeySet, self, dim, keepdim, out);
}

at::Tensor wrap_logsumexp_names(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logsumexp(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGSUMEXP_NAMES, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_logsumexp_names_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGSUMEXP_NAMES_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logsumexp_outf(dispatchKeySet, self, dim, keepdim, out);
}

at::Tensor wrap_margin_ranking_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input1, const at::Tensor & input2, const at::Tensor & target, double margin, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(input1, input2, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::margin_ranking_loss(dispatchKeySet, input1, input2, target, margin, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(input1.dtype(), input1.device(), H_MARGIN_RANKING_LOSS, dispatchKeySet, input1, input2, target, margin, reduction);
}

at::Tensor wrap_matmul(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::matmul(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MATMUL, dispatchKeySet, self, other);
}

at::Tensor & wrap_matmul_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MATMUL_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::matmul_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_matrix_rank_tol(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double tol, bool symmetric) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::matrix_rank(dispatchKeySet, self, tol, symmetric);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MATRIX_RANK_TOL, dispatchKeySet, self, tol, symmetric);
}

at::Tensor wrap_matrix_rank(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool symmetric) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::matrix_rank(dispatchKeySet, self, symmetric);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MATRIX_RANK, dispatchKeySet, self, symmetric);
}

at::Tensor wrap_matrix_power(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t n) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::matrix_power(dispatchKeySet, self, n);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MATRIX_POWER, dispatchKeySet, self, n);
}

at::Tensor & wrap_matrix_power_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t n, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MATRIX_POWER_OUT, dispatchKeySet, self, n, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::matrix_power_outf(dispatchKeySet, self, n, out);
}

at::Tensor wrap_matrix_exp(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::matrix_exp(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MATRIX_EXP, dispatchKeySet, self);
}

at::Tensor wrap_matrix_exp_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & grad) {
  if (trace.is_flushing()) {
    ensure_materialized(self, grad);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::matrix_exp_backward(dispatchKeySet, self, grad);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MATRIX_EXP_BACKWARD, dispatchKeySet, self, grad);
}

std::tuple<at::Tensor,at::Tensor> wrap__aminmax(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_aminmax(dispatchKeySet, self);
}

std::tuple<at::Tensor,at::Tensor> wrap__aminmax_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_aminmax(dispatchKeySet, self, dim, keepdim);
}

at::Tensor wrap__compute_linear_combination(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & coefficients) {
  if (trace.is_flushing()) {
    ensure_materialized(input, coefficients);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_compute_linear_combination(dispatchKeySet, input, coefficients);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H__COMPUTE_LINEAR_COMBINATION, dispatchKeySet, input, coefficients);
}

at::Tensor & wrap__compute_linear_combination_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & coefficients, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__COMPUTE_LINEAR_COMBINATION_OUT, dispatchKeySet, input, coefficients, out);
    return out;
  }
  will_override(out);
  ensure_materialized(input, coefficients, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_compute_linear_combination_outf(dispatchKeySet, input, coefficients, out);
}

std::tuple<at::Tensor,at::Tensor> wrap_max_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max(dispatchKeySet, self, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_max_dim_max(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & max, at::Tensor & max_values) {
  ensure_materialized(self, max, max_values);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_outf(dispatchKeySet, self, dim, keepdim, max, max_values);
}

std::tuple<at::Tensor,at::Tensor> wrap_max_names_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max(dispatchKeySet, self, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_max_names_dim_max(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & max, at::Tensor & max_values) {
  ensure_materialized(self, max, max_values);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_outf(dispatchKeySet, self, dim, keepdim, max, max_values);
}

at::Tensor wrap_value_selecting_reduction_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, int64_t dim, const at::Tensor & indices, at::IntArrayRef sizes, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::value_selecting_reduction_backward(dispatchKeySet, grad, dim, indices, sizes, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_VALUE_SELECTING_REDUCTION_BACKWARD, dispatchKeySet, grad, dim, indices, sizes, keepdim);
}

at::Tensor wrap_amax(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::amax(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_AMAX, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_amax_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_AMAX_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::amax_outf(dispatchKeySet, self, dim, keepdim, out);
}

std::tuple<at::Tensor,at::Tensor> wrap_max_pool1d_with_indices(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_pool1d_with_indices(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor wrap_max_pool1d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max_pool1d(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MAX_POOL1D, dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor wrap_max_pool2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max_pool2d(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MAX_POOL2D, dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor wrap_mkldnn_max_pool2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_max_pool2d(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MKLDNN_MAX_POOL2D, dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor wrap_mkldnn_max_pool2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output, const at::Tensor & input, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, output, input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_max_pool2d_backward(dispatchKeySet, grad_output, output, input, kernel_size, stride, padding, dilation, ceil_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MKLDNN_MAX_POOL2D_BACKWARD, dispatchKeySet, grad_output, output, input, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor wrap_mkldnn_max_pool3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_max_pool3d(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MKLDNN_MAX_POOL3D, dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor wrap_mkldnn_max_pool3d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output, const at::Tensor & input, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, output, input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_max_pool3d_backward(dispatchKeySet, grad_output, output, input, kernel_size, stride, padding, dilation, ceil_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MKLDNN_MAX_POOL3D_BACKWARD, dispatchKeySet, grad_output, output, input, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor wrap_quantized_max_pool1d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantized_max_pool1d(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_QUANTIZED_MAX_POOL1D, dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor wrap_quantized_max_pool2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantized_max_pool2d(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_QUANTIZED_MAX_POOL2D, dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor wrap_max_pool3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max_pool3d(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MAX_POOL3D, dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor wrap_mean(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mean(dispatchKeySet, self, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MEAN, dispatchKeySet, self, dtype);
}

at::Tensor wrap_mean_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mean(dispatchKeySet, self, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MEAN_DIM, dispatchKeySet, self, dim, keepdim, dtype);
}

at::Tensor & wrap_mean_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MEAN_OUT, dispatchKeySet, self, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mean_outf(dispatchKeySet, self, dim, keepdim, dtype, out);
}

at::Tensor wrap_mean_names_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mean(dispatchKeySet, self, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MEAN_NAMES_DIM, dispatchKeySet, self, dim, keepdim, dtype);
}

at::Tensor & wrap_mean_names_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MEAN_NAMES_OUT, dispatchKeySet, self, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mean_outf(dispatchKeySet, self, dim, keepdim, dtype, out);
}

at::Tensor wrap_median(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::median(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MEDIAN, dispatchKeySet, self);
}

std::tuple<at::Tensor,at::Tensor> wrap_median_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::median(dispatchKeySet, self, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_median_dim_values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::median_outf(dispatchKeySet, self, dim, keepdim, values, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_median_names_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::median(dispatchKeySet, self, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_median_names_dim_values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::median_outf(dispatchKeySet, self, dim, keepdim, values, indices);
}

at::Tensor wrap_nanmedian(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nanmedian(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NANMEDIAN, dispatchKeySet, self);
}

std::tuple<at::Tensor,at::Tensor> wrap_nanmedian_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nanmedian(dispatchKeySet, self, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_nanmedian_dim_values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nanmedian_outf(dispatchKeySet, self, dim, keepdim, values, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_nanmedian_names_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nanmedian(dispatchKeySet, self, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_nanmedian_names_dim_values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nanmedian_outf(dispatchKeySet, self, dim, keepdim, values, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_min_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::min(dispatchKeySet, self, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_min_dim_min(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & min, at::Tensor & min_indices) {
  ensure_materialized(self, min, min_indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::min_outf(dispatchKeySet, self, dim, keepdim, min, min_indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_min_names_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::min(dispatchKeySet, self, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_min_names_dim_min(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & min, at::Tensor & min_indices) {
  ensure_materialized(self, min, min_indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::min_outf(dispatchKeySet, self, dim, keepdim, min, min_indices);
}

at::Tensor wrap_amin(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::amin(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_AMIN, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_amin_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_AMIN_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::amin_outf(dispatchKeySet, self, dim, keepdim, out);
}

at::Tensor wrap_mkldnn_convolution(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_convolution(dispatchKeySet, self, weight, bias, padding, stride, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MKLDNN_CONVOLUTION, dispatchKeySet, self, weight, bias, padding, stride, dilation, groups);
}

at::Tensor wrap_mkldnn_convolution_backward_input(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef self_size, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool bias_defined) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_convolution_backward_input(dispatchKeySet, self_size, grad_output, weight, padding, stride, dilation, groups, bias_defined);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MKLDNN_CONVOLUTION_BACKWARD_INPUT, dispatchKeySet, self_size, grad_output, weight, padding, stride, dilation, groups, bias_defined);
}

std::tuple<at::Tensor,at::Tensor> wrap_mkldnn_convolution_backward_weights(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef weight_size, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool bias_defined) {
  ensure_materialized(grad_output, self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mkldnn_convolution_backward_weights(dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, bias_defined);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_mkldnn_convolution_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, std::array<bool,3> output_mask) {
  ensure_materialized(self, grad_output, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mkldnn_convolution_backward(dispatchKeySet, self, grad_output, weight, padding, stride, dilation, groups, output_mask);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_miopen_batch_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, bool training, double exponential_average_factor, double epsilon) {
  ensure_materialized(input, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::miopen_batch_norm(dispatchKeySet, input, weight, bias, running_mean, running_var, training, exponential_average_factor, epsilon);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_miopen_batch_norm_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & grad_output, const at::Tensor & weight, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, const c10::optional<at::Tensor> & save_mean, const c10::optional<at::Tensor> & save_var, double epsilon) {
  ensure_materialized(input, grad_output, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::miopen_batch_norm_backward(dispatchKeySet, input, grad_output, weight, running_mean, running_var, save_mean, save_var, epsilon);
}

at::Tensor wrap_miopen_convolution(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::miopen_convolution(dispatchKeySet, self, weight, bias, padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MIOPEN_CONVOLUTION, dispatchKeySet, self, weight, bias, padding, stride, dilation, groups, benchmark, deterministic);
}

at::Tensor wrap_miopen_convolution_backward_input(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef self_size, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::miopen_convolution_backward_input(dispatchKeySet, self_size, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MIOPEN_CONVOLUTION_BACKWARD_INPUT, dispatchKeySet, self_size, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_miopen_convolution_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, std::array<bool,3> output_mask) {
  ensure_materialized(self, grad_output, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::miopen_convolution_backward(dispatchKeySet, self, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic, output_mask);
}

at::Tensor wrap_miopen_convolution_backward_bias(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::miopen_convolution_backward_bias(dispatchKeySet, grad_output);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MIOPEN_CONVOLUTION_BACKWARD_BIAS, dispatchKeySet, grad_output);
}

at::Tensor wrap_miopen_convolution_backward_weight(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef weight_size, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::miopen_convolution_backward_weight(dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MIOPEN_CONVOLUTION_BACKWARD_WEIGHT, dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, benchmark, deterministic);
}

at::Tensor wrap_miopen_convolution_transpose(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::miopen_convolution_transpose(dispatchKeySet, self, weight, bias, padding, output_padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MIOPEN_CONVOLUTION_TRANSPOSE, dispatchKeySet, self, weight, bias, padding, output_padding, stride, dilation, groups, benchmark, deterministic);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_miopen_convolution_transpose_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, std::array<bool,3> output_mask) {
  ensure_materialized(self, grad_output, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::miopen_convolution_transpose_backward(dispatchKeySet, self, grad_output, weight, padding, output_padding, stride, dilation, groups, benchmark, deterministic, output_mask);
}

at::Tensor wrap_miopen_convolution_transpose_backward_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::miopen_convolution_transpose_backward_input(dispatchKeySet, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MIOPEN_CONVOLUTION_TRANSPOSE_BACKWARD_INPUT, dispatchKeySet, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic);
}

at::Tensor wrap_miopen_convolution_transpose_backward_weight(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef weight_size, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::miopen_convolution_transpose_backward_weight(dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MIOPEN_CONVOLUTION_TRANSPOSE_BACKWARD_WEIGHT, dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, benchmark, deterministic);
}

at::Tensor wrap_miopen_depthwise_convolution(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::miopen_depthwise_convolution(dispatchKeySet, self, weight, bias, padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MIOPEN_DEPTHWISE_CONVOLUTION, dispatchKeySet, self, weight, bias, padding, stride, dilation, groups, benchmark, deterministic);
}

at::Tensor wrap_miopen_depthwise_convolution_backward_input(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef self_size, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::miopen_depthwise_convolution_backward_input(dispatchKeySet, self_size, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MIOPEN_DEPTHWISE_CONVOLUTION_BACKWARD_INPUT, dispatchKeySet, self_size, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_miopen_depthwise_convolution_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic, std::array<bool,3> output_mask) {
  ensure_materialized(self, grad_output, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::miopen_depthwise_convolution_backward(dispatchKeySet, self, grad_output, weight, padding, stride, dilation, groups, benchmark, deterministic, output_mask);
}

at::Tensor wrap_miopen_depthwise_convolution_backward_weight(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef weight_size, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, bool benchmark, bool deterministic) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::miopen_depthwise_convolution_backward_weight(dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, benchmark, deterministic);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MIOPEN_DEPTHWISE_CONVOLUTION_BACKWARD_WEIGHT, dispatchKeySet, weight_size, grad_output, self, padding, stride, dilation, groups, benchmark, deterministic);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap_miopen_rnn(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const at::Tensor & hx, const c10::optional<at::Tensor> & cx, int64_t mode, int64_t hidden_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const c10::optional<at::Tensor> & dropout_state) {
  ensure_materialized(input, hx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::miopen_rnn(dispatchKeySet, input, weight, weight_stride0, hx, cx, mode, hidden_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,std::vector<at::Tensor>> wrap_miopen_rnn_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const at::Tensor & weight_buf, const at::Tensor & hx, const c10::optional<at::Tensor> & cx, const at::Tensor & output, const c10::optional<at::Tensor> & grad_output, const c10::optional<at::Tensor> & grad_hy, const c10::optional<at::Tensor> & grad_cy, int64_t mode, int64_t hidden_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const c10::optional<at::Tensor> & dropout_state, const at::Tensor & reserve, std::array<bool,4> output_mask) {
  ensure_materialized(input, weight_buf, hx, output, reserve);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::miopen_rnn_backward(dispatchKeySet, input, weight, weight_stride0, weight_buf, hx, cx, output, grad_output, grad_hy, grad_cy, mode, hidden_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state, reserve, output_mask);
}

at::Tensor wrap_mm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat2) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mat2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mm(dispatchKeySet, self, mat2);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MM, dispatchKeySet, self, mat2);
}

at::Tensor & wrap_mm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat2, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MM_OUT, dispatchKeySet, self, mat2, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, mat2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mm_outf(dispatchKeySet, self, mat2, out);
}

at::Tensor wrap__sparse_mm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & sparse, const at::Tensor & dense) {
  if (trace.is_flushing()) {
    ensure_materialized(sparse, dense);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_mm(dispatchKeySet, sparse, dense);
  }
  return at::detail::make_tensor<TorchyTensor>(sparse.dtype(), sparse.device(), H__SPARSE_MM, dispatchKeySet, sparse, dense);
}

at::Tensor wrap__sparse_sparse_matmul(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_sparse_matmul(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_SPARSE_MATMUL, dispatchKeySet, self, other);
}

at::Tensor wrap__sparse_mask_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & t, const at::Tensor & mask_indices) {
  if (trace.is_flushing()) {
    ensure_materialized(t, mask_indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_mask_helper(dispatchKeySet, t, mask_indices);
  }
  return at::detail::make_tensor<TorchyTensor>(t.dtype(), t.device(), H__SPARSE_MASK_HELPER, dispatchKeySet, t, mask_indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_mode(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mode(dispatchKeySet, self, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_mode_values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mode_outf(dispatchKeySet, self, dim, keepdim, values, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_mode_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mode(dispatchKeySet, self, dim, keepdim);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_mode_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mode_outf(dispatchKeySet, self, dim, keepdim, values, indices);
}

at::Tensor wrap_mul_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mul(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MUL_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_mul__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MUL__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mul_(dispatchKeySet, self, other);
}

at::Tensor & wrap_mul_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MUL_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mul_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_mul_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mul(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MUL_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_mul__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MUL__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mul_(dispatchKeySet, self, other);
}

at::Tensor wrap_multiply_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::multiply(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MULTIPLY_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_multiply__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MULTIPLY__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::multiply_(dispatchKeySet, self, other);
}

at::Tensor & wrap_multiply_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MULTIPLY_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::multiply_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_multiply_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::multiply(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MULTIPLY_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_multiply__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MULTIPLY__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::multiply_(dispatchKeySet, self, other);
}

at::Tensor wrap_mv(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & vec) {
  if (trace.is_flushing()) {
    ensure_materialized(self, vec);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mv(dispatchKeySet, self, vec);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MV, dispatchKeySet, self, vec);
}

at::Tensor & wrap_mv_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & vec, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MV_OUT, dispatchKeySet, self, vec, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, vec, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mv_outf(dispatchKeySet, self, vec, out);
}

at::Tensor wrap_mvlgamma(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t p) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mvlgamma(dispatchKeySet, self, p);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MVLGAMMA, dispatchKeySet, self, p);
}

at::Tensor & wrap_mvlgamma_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t p) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MVLGAMMA_, dispatchKeySet, self, p);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mvlgamma_(dispatchKeySet, self, p);
}

at::Tensor wrap_narrow_copy(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, int64_t start, int64_t length) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::narrow_copy(dispatchKeySet, self, dim, start, length);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NARROW_COPY, dispatchKeySet, self, dim, start, length);
}

at::Tensor & wrap_narrow_copy_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, int64_t start, int64_t length, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NARROW_COPY_OUT, dispatchKeySet, self, dim, start, length, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::narrow_copy_outf(dispatchKeySet, self, dim, start, length, out);
}

at::Tensor wrap_narrow(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, int64_t start, int64_t length) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::narrow(dispatchKeySet, self, dim, start, length);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NARROW, dispatchKeySet, self, dim, start, length);
}

at::Tensor wrap_narrow_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & start, int64_t length) {
  if (trace.is_flushing()) {
    ensure_materialized(self, start);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::narrow(dispatchKeySet, self, dim, start, length);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NARROW_TENSOR, dispatchKeySet, self, dim, start, length);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_native_batch_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, bool training, double momentum, double eps) {
  ensure_materialized(input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::native_batch_norm(dispatchKeySet, input, weight, bias, running_mean, running_var, training, momentum, eps);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> wrap_native_batch_norm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, bool training, double momentum, double eps, at::Tensor & out, at::Tensor & save_mean, at::Tensor & save_invstd) {
  ensure_materialized(input, out, save_mean, save_invstd);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::native_batch_norm_outf(dispatchKeySet, input, weight, bias, running_mean, running_var, training, momentum, eps, out, save_mean, save_invstd);
}

std::tuple<at::Tensor,at::Tensor> wrap_batch_norm_stats(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, double eps) {
  ensure_materialized(input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::batch_norm_stats(dispatchKeySet, input, eps);
}

at::Tensor wrap_batch_norm_elemt(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & mean, const at::Tensor & invstd, double eps) {
  if (trace.is_flushing()) {
    ensure_materialized(input, mean, invstd);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::batch_norm_elemt(dispatchKeySet, input, weight, bias, mean, invstd, eps);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_BATCH_NORM_ELEMT, dispatchKeySet, input, weight, bias, mean, invstd, eps);
}

at::Tensor & wrap_batch_norm_elemt_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & mean, const at::Tensor & invstd, double eps, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BATCH_NORM_ELEMT_OUT, dispatchKeySet, input, weight, bias, mean, invstd, eps, out);
    return out;
  }
  will_override(out);
  ensure_materialized(input, mean, invstd, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::batch_norm_elemt_outf(dispatchKeySet, input, weight, bias, mean, invstd, eps, out);
}

std::tuple<at::Tensor,at::Tensor> wrap_batch_norm_gather_stats(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & mean, const at::Tensor & invstd, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, double momentum, double eps, int64_t count) {
  ensure_materialized(input, mean, invstd);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::batch_norm_gather_stats(dispatchKeySet, input, mean, invstd, running_mean, running_var, momentum, eps, count);
}

std::tuple<at::Tensor,at::Tensor> wrap_batch_norm_gather_stats_with_counts(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & mean, const at::Tensor & invstd, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, double momentum, double eps, const at::Tensor & counts) {
  ensure_materialized(input, mean, invstd, counts);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::batch_norm_gather_stats_with_counts(dispatchKeySet, input, mean, invstd, running_mean, running_var, momentum, eps, counts);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_native_batch_norm_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_out, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, const c10::optional<at::Tensor> & save_mean, const c10::optional<at::Tensor> & save_invstd, bool train, double eps, std::array<bool,3> output_mask) {
  ensure_materialized(grad_out, input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::native_batch_norm_backward(dispatchKeySet, grad_out, input, weight, running_mean, running_var, save_mean, save_invstd, train, eps, output_mask);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap_batch_norm_backward_reduce(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_out, const at::Tensor & input, const at::Tensor & mean, const at::Tensor & invstd, const c10::optional<at::Tensor> & weight, bool input_g, bool weight_g, bool bias_g) {
  ensure_materialized(grad_out, input, mean, invstd);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::batch_norm_backward_reduce(dispatchKeySet, grad_out, input, mean, invstd, weight, input_g, weight_g, bias_g);
}

at::Tensor wrap_batch_norm_backward_elemt(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_out, const at::Tensor & input, const at::Tensor & mean, const at::Tensor & invstd, const c10::optional<at::Tensor> & weight, const at::Tensor & mean_dy, const at::Tensor & mean_dy_xmu, const at::Tensor & count) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_out, input, mean, invstd, mean_dy, mean_dy_xmu, count);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::batch_norm_backward_elemt(dispatchKeySet, grad_out, input, mean, invstd, weight, mean_dy, mean_dy_xmu, count);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_out.dtype(), grad_out.device(), H_BATCH_NORM_BACKWARD_ELEMT, dispatchKeySet, grad_out, input, mean, invstd, weight, mean_dy, mean_dy_xmu, count);
}

std::tuple<at::Tensor,at::Tensor> wrap_batch_norm_update_stats(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const c10::optional<at::Tensor> & running_mean, const c10::optional<at::Tensor> & running_var, double momentum) {
  ensure_materialized(input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::batch_norm_update_stats(dispatchKeySet, input, running_mean, running_var, momentum);
}

bool wrap_is_vulkan_available(c10::DispatchKeySet dispatchKeySet) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::is_vulkan_available(dispatchKeySet);
}

bool wrap__nnpack_available(c10::DispatchKeySet dispatchKeySet) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_nnpack_available(dispatchKeySet);
}

at::Tensor wrap__nnpack_spatial_convolution(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef padding, at::IntArrayRef stride) {
  if (trace.is_flushing()) {
    ensure_materialized(input, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_nnpack_spatial_convolution(dispatchKeySet, input, weight, bias, padding, stride);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H__NNPACK_SPATIAL_CONVOLUTION, dispatchKeySet, input, weight, bias, padding, stride);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap__nnpack_spatial_convolution_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, std::array<bool,3> output_mask) {
  ensure_materialized(input, grad_output, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_nnpack_spatial_convolution_backward(dispatchKeySet, input, grad_output, weight, padding, output_mask);
}

at::Tensor wrap__nnpack_spatial_convolution_backward_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(input, grad_output, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_nnpack_spatial_convolution_backward_input(dispatchKeySet, input, grad_output, weight, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H__NNPACK_SPATIAL_CONVOLUTION_BACKWARD_INPUT, dispatchKeySet, input, grad_output, weight, padding);
}

at::Tensor wrap__nnpack_spatial_convolution_backward_weight(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::IntArrayRef weightsize, const at::Tensor & grad_output, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(input, grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_nnpack_spatial_convolution_backward_weight(dispatchKeySet, input, weightsize, grad_output, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H__NNPACK_SPATIAL_CONVOLUTION_BACKWARD_WEIGHT, dispatchKeySet, input, weightsize, grad_output, padding);
}

at::Tensor wrap_ones_names(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::ones(dispatchKeySet, size, names, dtype, layout, device, pin_memory));
}

at::Tensor wrap_ones(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::ones(dispatchKeySet, size, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_ones_out(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ONES_OUT, dispatchKeySet, size, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ones_outf(dispatchKeySet, size, out);
}

at::Tensor wrap_ones_like(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ones_like(dispatchKeySet, self, dtype, layout, device, pin_memory, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ONES_LIKE, dispatchKeySet, self, dtype, layout, device, pin_memory, memory_format);
}

at::Tensor wrap_pairwise_distance(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x1, const at::Tensor & x2, double p, double eps, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(x1, x2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::pairwise_distance(dispatchKeySet, x1, x2, p, eps, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(x1.dtype(), x1.device(), H_PAIRWISE_DISTANCE, dispatchKeySet, x1, x2, p, eps, keepdim);
}

at::Tensor wrap_cdist(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x1, const at::Tensor & x2, double p, c10::optional<int64_t> compute_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(x1, x2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cdist(dispatchKeySet, x1, x2, p, compute_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(x1.dtype(), x1.device(), H_CDIST, dispatchKeySet, x1, x2, p, compute_mode);
}

at::Tensor wrap__euclidean_dist(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x1, const at::Tensor & x2) {
  if (trace.is_flushing()) {
    ensure_materialized(x1, x2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_euclidean_dist(dispatchKeySet, x1, x2);
  }
  return at::detail::make_tensor<TorchyTensor>(x1.dtype(), x1.device(), H__EUCLIDEAN_DIST, dispatchKeySet, x1, x2);
}

at::Tensor wrap__cdist_forward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x1, const at::Tensor & x2, double p, c10::optional<int64_t> compute_mode) {
  if (trace.is_flushing()) {
    ensure_materialized(x1, x2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cdist_forward(dispatchKeySet, x1, x2, p, compute_mode);
  }
  return at::detail::make_tensor<TorchyTensor>(x1.dtype(), x1.device(), H__CDIST_FORWARD, dispatchKeySet, x1, x2, p, compute_mode);
}

at::Tensor wrap__cdist_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & x1, const at::Tensor & x2, double p, const at::Tensor & cdist) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, x1, x2, cdist);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cdist_backward(dispatchKeySet, grad, x1, x2, p, cdist);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H__CDIST_BACKWARD, dispatchKeySet, grad, x1, x2, p, cdist);
}

at::Tensor wrap_pdist(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double p) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::pdist(dispatchKeySet, self, p);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PDIST, dispatchKeySet, self, p);
}

at::Tensor wrap__pdist_forward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double p) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_pdist_forward(dispatchKeySet, self, p);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__PDIST_FORWARD, dispatchKeySet, self, p);
}

at::Tensor wrap__pdist_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & self, double p, const at::Tensor & pdist) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, self, pdist);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_pdist_backward(dispatchKeySet, grad, self, p, pdist);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H__PDIST_BACKWARD, dispatchKeySet, grad, self, p, pdist);
}

at::Tensor wrap_cosine_similarity(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x1, const at::Tensor & x2, int64_t dim, double eps) {
  if (trace.is_flushing()) {
    ensure_materialized(x1, x2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cosine_similarity(dispatchKeySet, x1, x2, dim, eps);
  }
  return at::detail::make_tensor<TorchyTensor>(x1.dtype(), x1.device(), H_COSINE_SIMILARITY, dispatchKeySet, x1, x2, dim, eps);
}

at::Tensor wrap_permute(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dims) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::permute(dispatchKeySet, self, dims);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PERMUTE, dispatchKeySet, self, dims);
}

at::Tensor wrap_movedim_intlist(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef source, at::IntArrayRef destination) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::movedim(dispatchKeySet, self, source, destination);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MOVEDIM_INTLIST, dispatchKeySet, self, source, destination);
}

at::Tensor wrap_movedim_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t source, int64_t destination) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::movedim(dispatchKeySet, self, source, destination);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MOVEDIM_INT, dispatchKeySet, self, source, destination);
}

at::Tensor wrap_moveaxis_intlist(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef source, at::IntArrayRef destination) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::moveaxis(dispatchKeySet, self, source, destination);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MOVEAXIS_INTLIST, dispatchKeySet, self, source, destination);
}

at::Tensor wrap_moveaxis_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t source, int64_t destination) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::moveaxis(dispatchKeySet, self, source, destination);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MOVEAXIS_INT, dispatchKeySet, self, source, destination);
}

at::Tensor wrap_numpy_T(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::numpy_T(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NUMPY_T, dispatchKeySet, self);
}

at::Tensor wrap_pixel_shuffle(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t upscale_factor) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::pixel_shuffle(dispatchKeySet, self, upscale_factor);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PIXEL_SHUFFLE, dispatchKeySet, self, upscale_factor);
}

at::Tensor wrap_pixel_unshuffle(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t downscale_factor) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::pixel_unshuffle(dispatchKeySet, self, downscale_factor);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PIXEL_UNSHUFFLE, dispatchKeySet, self, downscale_factor);
}

at::Tensor wrap_channel_shuffle(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::channel_shuffle(dispatchKeySet, self, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CHANNEL_SHUFFLE, dispatchKeySet, self, groups);
}

bool wrap_is_pinned(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::is_pinned(dispatchKeySet, self);
}

at::Tensor wrap_pin_memory(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::pin_memory(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PIN_MEMORY, dispatchKeySet, self);
}

at::Tensor wrap_pinverse(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double rcond) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::pinverse(dispatchKeySet, self, rcond);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PINVERSE, dispatchKeySet, self, rcond);
}

at::Tensor wrap_poisson_nll_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & target, bool log_input, bool full, double eps, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(input, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::poisson_nll_loss(dispatchKeySet, input, target, log_input, full, eps, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_POISSON_NLL_LOSS, dispatchKeySet, input, target, log_input, full, eps, reduction);
}

at::Tensor wrap_rad2deg(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rad2deg(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RAD2DEG, dispatchKeySet, self);
}

at::Tensor & wrap_rad2deg_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RAD2DEG_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rad2deg_(dispatchKeySet, self);
}

at::Tensor & wrap_rad2deg_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RAD2DEG_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rad2deg_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_deg2rad(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::deg2rad(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DEG2RAD, dispatchKeySet, self);
}

at::Tensor & wrap_deg2rad_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DEG2RAD_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::deg2rad_(dispatchKeySet, self);
}

at::Tensor & wrap_deg2rad_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DEG2RAD_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::deg2rad_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_scalar_tensor(c10::DispatchKeySet dispatchKeySet, const at::Scalar & s, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::scalar_tensor(dispatchKeySet, s, dtype, layout, device, pin_memory));
}

at::Tensor wrap_rand_names(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::rand(dispatchKeySet, size, names, dtype, layout, device, pin_memory));
}

at::Tensor wrap_rand_generator_with_names(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::rand(dispatchKeySet, size, generator, names, dtype, layout, device, pin_memory));
}

at::Tensor wrap_rand(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::rand(dispatchKeySet, size, dtype, layout, device, pin_memory));
}

at::Tensor wrap_rand_generator(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::rand(dispatchKeySet, size, generator, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_rand_out(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RAND_OUT, dispatchKeySet, size, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rand_outf(dispatchKeySet, size, out);
}

at::Tensor & wrap_rand_generator_out(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RAND_GENERATOR_OUT, dispatchKeySet, size, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rand_outf(dispatchKeySet, size, generator, out);
}

at::Tensor wrap_rand_like(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rand_like(dispatchKeySet, self, dtype, layout, device, pin_memory, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RAND_LIKE, dispatchKeySet, self, dtype, layout, device, pin_memory, memory_format);
}

at::Tensor wrap_randint(c10::DispatchKeySet dispatchKeySet, int64_t high, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::randint(dispatchKeySet, high, size, dtype, layout, device, pin_memory));
}

at::Tensor wrap_randint_generator(c10::DispatchKeySet dispatchKeySet, int64_t high, at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::randint(dispatchKeySet, high, size, generator, dtype, layout, device, pin_memory));
}

at::Tensor wrap_randint_low(c10::DispatchKeySet dispatchKeySet, int64_t low, int64_t high, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::randint(dispatchKeySet, low, high, size, dtype, layout, device, pin_memory));
}

at::Tensor wrap_randint_low_generator(c10::DispatchKeySet dispatchKeySet, int64_t low, int64_t high, at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::randint(dispatchKeySet, low, high, size, generator, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_randint_out(c10::DispatchKeySet dispatchKeySet, int64_t high, at::IntArrayRef size, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDINT_OUT, dispatchKeySet, high, size, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::randint_outf(dispatchKeySet, high, size, out);
}

at::Tensor & wrap_randint_generator_out(c10::DispatchKeySet dispatchKeySet, int64_t high, at::IntArrayRef size, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDINT_GENERATOR_OUT, dispatchKeySet, high, size, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::randint_outf(dispatchKeySet, high, size, generator, out);
}

at::Tensor & wrap_randint_low_out(c10::DispatchKeySet dispatchKeySet, int64_t low, int64_t high, at::IntArrayRef size, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDINT_LOW_OUT, dispatchKeySet, low, high, size, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::randint_outf(dispatchKeySet, low, high, size, out);
}

at::Tensor & wrap_randint_low_generator_out(c10::DispatchKeySet dispatchKeySet, int64_t low, int64_t high, at::IntArrayRef size, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDINT_LOW_GENERATOR_OUT, dispatchKeySet, low, high, size, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::randint_outf(dispatchKeySet, low, high, size, generator, out);
}

at::Tensor wrap_randint_like(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t high, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::randint_like(dispatchKeySet, self, high, dtype, layout, device, pin_memory, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RANDINT_LIKE, dispatchKeySet, self, high, dtype, layout, device, pin_memory, memory_format);
}

at::Tensor wrap_randint_like_low_dtype(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t low, int64_t high, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::randint_like(dispatchKeySet, self, low, high, dtype, layout, device, pin_memory, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RANDINT_LIKE_LOW_DTYPE, dispatchKeySet, self, low, high, dtype, layout, device, pin_memory, memory_format);
}

at::Tensor wrap_randn(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::randn(dispatchKeySet, size, dtype, layout, device, pin_memory));
}

at::Tensor wrap_randn_generator(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::randn(dispatchKeySet, size, generator, dtype, layout, device, pin_memory));
}

at::Tensor wrap_randn_names(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::randn(dispatchKeySet, size, names, dtype, layout, device, pin_memory));
}

at::Tensor wrap_randn_generator_with_names(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::randn(dispatchKeySet, size, generator, names, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_randn_out(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDN_OUT, dispatchKeySet, size, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::randn_outf(dispatchKeySet, size, out);
}

at::Tensor & wrap_randn_generator_out(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDN_GENERATOR_OUT, dispatchKeySet, size, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::randn_outf(dispatchKeySet, size, generator, out);
}

at::Tensor wrap_randn_like(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::randn_like(dispatchKeySet, self, dtype, layout, device, pin_memory, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RANDN_LIKE, dispatchKeySet, self, dtype, layout, device, pin_memory, memory_format);
}

at::Tensor wrap_randperm(c10::DispatchKeySet dispatchKeySet, int64_t n, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::randperm(dispatchKeySet, n, dtype, layout, device, pin_memory));
}

at::Tensor wrap_randperm_generator(c10::DispatchKeySet dispatchKeySet, int64_t n, c10::optional<at::Generator> generator, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::randperm(dispatchKeySet, n, generator, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_randperm_out(c10::DispatchKeySet dispatchKeySet, int64_t n, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDPERM_OUT, dispatchKeySet, n, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::randperm_outf(dispatchKeySet, n, out);
}

at::Tensor & wrap_randperm_generator_out(c10::DispatchKeySet dispatchKeySet, int64_t n, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDPERM_GENERATOR_OUT, dispatchKeySet, n, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::randperm_outf(dispatchKeySet, n, generator, out);
}

at::Tensor wrap_range_step(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, const at::Scalar & step, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::range(dispatchKeySet, start, end, step, dtype, layout, device, pin_memory));
}

at::Tensor wrap_range(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::range(dispatchKeySet, start, end, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_range_out(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, const at::Scalar & step, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANGE_OUT, dispatchKeySet, start, end, step, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::range_outf(dispatchKeySet, start, end, step, out);
}

at::Tensor wrap_ravel(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ravel(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RAVEL, dispatchKeySet, self);
}

at::Tensor & wrap_reciprocal_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RECIPROCAL_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::reciprocal_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_neg(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::neg(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NEG, dispatchKeySet, self);
}

at::Tensor & wrap_neg_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NEG_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::neg_(dispatchKeySet, self);
}

at::Tensor & wrap_neg_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NEG_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::neg_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_negative(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::negative(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NEGATIVE, dispatchKeySet, self);
}

at::Tensor & wrap_negative_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NEGATIVE_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::negative_(dispatchKeySet, self);
}

at::Tensor & wrap_negative_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NEGATIVE_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::negative_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_repeat(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef repeats) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::repeat(dispatchKeySet, self, repeats);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_REPEAT, dispatchKeySet, self, repeats);
}

at::Tensor wrap_repeat_interleave_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & repeats) {
  if (trace.is_flushing()) {
    ensure_materialized(repeats);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::repeat_interleave(dispatchKeySet, repeats);
  }
  return at::detail::make_tensor<TorchyTensor>(repeats.dtype(), repeats.device(), H_REPEAT_INTERLEAVE_TENSOR, dispatchKeySet, repeats);
}

at::Tensor wrap_repeat_interleave_self_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & repeats, c10::optional<int64_t> dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self, repeats);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::repeat_interleave(dispatchKeySet, self, repeats, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_REPEAT_INTERLEAVE_SELF_TENSOR, dispatchKeySet, self, repeats, dim);
}

at::Tensor wrap_repeat_interleave_self_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t repeats, c10::optional<int64_t> dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::repeat_interleave(dispatchKeySet, self, repeats, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_REPEAT_INTERLEAVE_SELF_INT, dispatchKeySet, self, repeats, dim);
}

at::Tensor wrap_reshape(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef shape) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::reshape(dispatchKeySet, self, shape);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RESHAPE, dispatchKeySet, self, shape);
}

at::Tensor wrap__mkldnn_reshape(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef shape) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_mkldnn_reshape(dispatchKeySet, self, shape);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__MKLDNN_RESHAPE, dispatchKeySet, self, shape);
}

at::Tensor wrap_reshape_as(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::reshape_as(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RESHAPE_AS, dispatchKeySet, self, other);
}

at::Tensor wrap_round(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::round(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ROUND, dispatchKeySet, self);
}

at::Tensor & wrap_round_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ROUND_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::round_(dispatchKeySet, self);
}

at::Tensor & wrap_round_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ROUND_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::round_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_rrelu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & lower, const at::Scalar & upper, bool training, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rrelu(dispatchKeySet, self, lower, upper, training, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RRELU, dispatchKeySet, self, lower, upper, training, generator);
}

at::Tensor & wrap_rrelu_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & lower, const at::Scalar & upper, bool training, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RRELU_, dispatchKeySet, self, lower, upper, training, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rrelu_(dispatchKeySet, self, lower, upper, training, generator);
}

at::Tensor wrap_relu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::relu(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RELU, dispatchKeySet, self);
}

at::Tensor & wrap_relu_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RELU_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::relu_(dispatchKeySet, self);
}

at::Tensor wrap_relu6(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::relu6(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RELU6, dispatchKeySet, self);
}

at::Tensor & wrap_relu6_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RELU6_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::relu6_(dispatchKeySet, self);
}

at::Tensor wrap_prelu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::prelu(dispatchKeySet, self, weight);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PRELU, dispatchKeySet, self, weight);
}

std::tuple<at::Tensor,at::Tensor> wrap_prelu_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight) {
  ensure_materialized(grad_output, self, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::prelu_backward(dispatchKeySet, grad_output, self, weight);
}

at::Tensor wrap_gelu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::gelu(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GELU, dispatchKeySet, self);
}

at::Tensor wrap_gelu_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::gelu_backward(dispatchKeySet, grad, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_GELU_BACKWARD, dispatchKeySet, grad, self);
}

at::Tensor wrap_infinitely_differentiable_gelu_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::infinitely_differentiable_gelu_backward(dispatchKeySet, grad, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_INFINITELY_DIFFERENTIABLE_GELU_BACKWARD, dispatchKeySet, grad, self);
}

at::Tensor wrap_hardshrink(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & lambd) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hardshrink(dispatchKeySet, self, lambd);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_HARDSHRINK, dispatchKeySet, self, lambd);
}

at::Tensor wrap_hardshrink_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_out, const at::Tensor & self, const at::Scalar & lambd) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_out, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hardshrink_backward(dispatchKeySet, grad_out, self, lambd);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_out.dtype(), grad_out.device(), H_HARDSHRINK_BACKWARD, dispatchKeySet, grad_out, self, lambd);
}

at::Tensor wrap_rsqrt(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rsqrt(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RSQRT, dispatchKeySet, self);
}

at::Tensor & wrap_rsqrt_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RSQRT_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rsqrt_(dispatchKeySet, self);
}

at::Tensor & wrap_rsqrt_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RSQRT_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rsqrt_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_select_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, int64_t index) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::select(dispatchKeySet, self, dim, index);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SELECT_DIMNAME, dispatchKeySet, self, dim, index);
}

at::Tensor wrap_select_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, int64_t index) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::select(dispatchKeySet, self, dim, index);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SELECT_INT, dispatchKeySet, self, dim, index);
}

at::Tensor wrap_select_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, at::IntArrayRef input_sizes, int64_t dim, int64_t index) {
  if (trace.is_flushing()) {
    ensure_materialized(grad);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::select_backward(dispatchKeySet, grad, input_sizes, dim, index);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_SELECT_BACKWARD, dispatchKeySet, grad, input_sizes, dim, index);
}

at::Tensor wrap_selu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::selu(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SELU, dispatchKeySet, self);
}

at::Tensor & wrap_selu_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SELU_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::selu_(dispatchKeySet, self);
}

at::Tensor wrap_celu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::celu(dispatchKeySet, self, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CELU, dispatchKeySet, self, alpha);
}

at::Tensor & wrap_celu_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CELU_, dispatchKeySet, self, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::celu_(dispatchKeySet, self, alpha);
}

at::Tensor wrap_silu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::silu(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SILU, dispatchKeySet, self);
}

at::Tensor & wrap_silu_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SILU_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::silu_(dispatchKeySet, self);
}

at::Tensor & wrap_silu_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SILU_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::silu_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_silu_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::silu_backward(dispatchKeySet, grad_output, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_SILU_BACKWARD, dispatchKeySet, grad_output, self);
}

at::Tensor wrap_sigmoid(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sigmoid(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SIGMOID, dispatchKeySet, self);
}

at::Tensor & wrap_sigmoid_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SIGMOID_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sigmoid_(dispatchKeySet, self);
}

at::Tensor & wrap_sigmoid_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SIGMOID_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sigmoid_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_logit(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<double> eps) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logit(dispatchKeySet, self, eps);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOGIT, dispatchKeySet, self, eps);
}

at::Tensor & wrap_logit_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, c10::optional<double> eps) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGIT_, dispatchKeySet, self, eps);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logit_(dispatchKeySet, self, eps);
}

at::Tensor & wrap_logit_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<double> eps, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGIT_OUT, dispatchKeySet, self, eps, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logit_outf(dispatchKeySet, self, eps, out);
}

at::Tensor & wrap_sin_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SIN_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sin_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_sinc_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SINC_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sinc_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_sinh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SINH_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sinh_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_detach(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::detach(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DETACH, dispatchKeySet, self);
}

at::Tensor & wrap_detach_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DETACH_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::detach_(dispatchKeySet, self);
}

int64_t wrap_size_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::size(dispatchKeySet, self, dim);
}

at::Tensor wrap_slice_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<int64_t> start, c10::optional<int64_t> end, int64_t step) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::slice(dispatchKeySet, self, dim, start, end, step);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SLICE_TENSOR, dispatchKeySet, self, dim, start, end, step);
}

at::Tensor wrap_slice_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, at::IntArrayRef input_sizes, int64_t dim, int64_t start, int64_t end, int64_t step) {
  if (trace.is_flushing()) {
    ensure_materialized(grad);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::slice_backward(dispatchKeySet, grad, input_sizes, dim, start, end, step);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_SLICE_BACKWARD, dispatchKeySet, grad, input_sizes, dim, start, end, step);
}

std::tuple<at::Tensor,at::Tensor> wrap_slogdet(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slogdet(dispatchKeySet, self);
}

at::Tensor wrap_smm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat2) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mat2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::smm(dispatchKeySet, self, mat2);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SMM, dispatchKeySet, self, mat2);
}

at::Tensor wrap_softmax_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::softmax(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SOFTMAX_INT, dispatchKeySet, self, dim, dtype);
}

at::Tensor wrap_softmax_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::softmax(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SOFTMAX_DIMNAME, dispatchKeySet, self, dim, dtype);
}

at::Tensor wrap__softmax(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool half_to_float) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_softmax(dispatchKeySet, self, dim, half_to_float);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SOFTMAX, dispatchKeySet, self, dim, half_to_float);
}

at::Tensor wrap__softmax_backward_data(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_softmax_backward_data(dispatchKeySet, grad_output, output, dim, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H__SOFTMAX_BACKWARD_DATA, dispatchKeySet, grad_output, output, dim, self);
}

std::vector<at::Tensor> wrap_unsafe_split_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t split_size, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::unsafe_split(dispatchKeySet, self, split_size, dim);
}

std::vector<at::Tensor> wrap_split_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t split_size, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::split(dispatchKeySet, self, split_size, dim);
}

std::vector<at::Tensor> wrap_unsafe_split_with_sizes(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef split_sizes, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::unsafe_split_with_sizes(dispatchKeySet, self, split_sizes, dim);
}

std::vector<at::Tensor> wrap_split_with_sizes(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef split_sizes, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::split_with_sizes(dispatchKeySet, self, split_sizes, dim);
}

at::Tensor wrap_squeeze(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::squeeze(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SQUEEZE, dispatchKeySet, self);
}

at::Tensor wrap_squeeze_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::squeeze(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SQUEEZE_DIM, dispatchKeySet, self, dim);
}

at::Tensor wrap_squeeze_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::squeeze(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SQUEEZE_DIMNAME, dispatchKeySet, self, dim);
}

at::Tensor & wrap_squeeze_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SQUEEZE_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::squeeze_(dispatchKeySet, self);
}

at::Tensor & wrap_squeeze__dim(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SQUEEZE__DIM, dispatchKeySet, self, dim);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::squeeze_(dispatchKeySet, self, dim);
}

at::Tensor & wrap_squeeze__dimname(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Dimname dim) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SQUEEZE__DIMNAME, dispatchKeySet, self, dim);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::squeeze_(dispatchKeySet, self, dim);
}

at::Tensor wrap_sspaddmm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat1, const at::Tensor & mat2, const at::Scalar & beta, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mat1, mat2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sspaddmm(dispatchKeySet, self, mat1, mat2, beta, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SSPADDMM, dispatchKeySet, self, mat1, mat2, beta, alpha);
}

at::Tensor & wrap_sspaddmm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat1, const at::Tensor & mat2, const at::Scalar & beta, const at::Scalar & alpha, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SSPADDMM_OUT, dispatchKeySet, self, mat1, mat2, beta, alpha, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, mat1, mat2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sspaddmm_outf(dispatchKeySet, self, mat1, mat2, beta, alpha, out);
}

at::Tensor wrap_stack(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, int64_t dim) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::stack(dispatchKeySet, tensors, dim));
}

at::Tensor & wrap_stack_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, int64_t dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_STACK_OUT, dispatchKeySet, tensors, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::stack_outf(dispatchKeySet, tensors, dim, out);
}

at::Tensor wrap__stack(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, int64_t dim) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::_stack(dispatchKeySet, tensors, dim));
}

at::Tensor & wrap__stack_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, int64_t dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__STACK_OUT, dispatchKeySet, tensors, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_stack_outf(dispatchKeySet, tensors, dim, out);
}

at::Tensor wrap_hstack(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::hstack(dispatchKeySet, tensors));
}

at::Tensor & wrap_hstack_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HSTACK_OUT, dispatchKeySet, tensors, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hstack_outf(dispatchKeySet, tensors, out);
}

at::Tensor wrap_vstack(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::vstack(dispatchKeySet, tensors));
}

at::Tensor & wrap_vstack_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_VSTACK_OUT, dispatchKeySet, tensors, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::vstack_outf(dispatchKeySet, tensors, out);
}

at::Tensor wrap_dstack(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::dstack(dispatchKeySet, tensors));
}

at::Tensor & wrap_dstack_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DSTACK_OUT, dispatchKeySet, tensors, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::dstack_outf(dispatchKeySet, tensors, out);
}

at::Tensor wrap_stft(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t n_fft, c10::optional<int64_t> hop_length, c10::optional<int64_t> win_length, const c10::optional<at::Tensor> & window, bool normalized, c10::optional<bool> onesided, c10::optional<bool> return_complex) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::stft(dispatchKeySet, self, n_fft, hop_length, win_length, window, normalized, onesided, return_complex);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_STFT, dispatchKeySet, self, n_fft, hop_length, win_length, window, normalized, onesided, return_complex);
}

at::Tensor wrap_istft(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t n_fft, c10::optional<int64_t> hop_length, c10::optional<int64_t> win_length, const c10::optional<at::Tensor> & window, bool center, bool normalized, c10::optional<bool> onesided, c10::optional<int64_t> length, bool return_complex) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::istft(dispatchKeySet, self, n_fft, hop_length, win_length, window, center, normalized, onesided, length, return_complex);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ISTFT, dispatchKeySet, self, n_fft, hop_length, win_length, window, center, normalized, onesided, length, return_complex);
}

int64_t wrap_stride_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::stride(dispatchKeySet, self, dim);
}

at::Tensor wrap_sum(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sum(dispatchKeySet, self, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SUM, dispatchKeySet, self, dtype);
}

at::Tensor wrap_sum_dim_IntList(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sum(dispatchKeySet, self, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SUM_DIM_INTLIST, dispatchKeySet, self, dim, keepdim, dtype);
}

at::Tensor wrap_sum_dim_DimnameList(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sum(dispatchKeySet, self, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SUM_DIM_DIMNAMELIST, dispatchKeySet, self, dim, keepdim, dtype);
}

at::Tensor & wrap_sum_IntList_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SUM_INTLIST_OUT, dispatchKeySet, self, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sum_outf(dispatchKeySet, self, dim, keepdim, dtype, out);
}

at::Tensor & wrap_sum_DimnameList_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SUM_DIMNAMELIST_OUT, dispatchKeySet, self, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sum_outf(dispatchKeySet, self, dim, keepdim, dtype, out);
}

at::Tensor wrap_nansum(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nansum(dispatchKeySet, self, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NANSUM, dispatchKeySet, self, dtype);
}

at::Tensor wrap_nansum_dim_IntList(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nansum(dispatchKeySet, self, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NANSUM_DIM_INTLIST, dispatchKeySet, self, dim, keepdim, dtype);
}

at::Tensor & wrap_nansum_IntList_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NANSUM_INTLIST_OUT, dispatchKeySet, self, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nansum_outf(dispatchKeySet, self, dim, keepdim, dtype, out);
}

at::Tensor wrap_sum_to_size(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sum_to_size(dispatchKeySet, self, size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SUM_TO_SIZE, dispatchKeySet, self, size);
}

at::Tensor wrap_sqrt(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sqrt(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SQRT, dispatchKeySet, self);
}

at::Tensor & wrap_sqrt_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SQRT_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sqrt_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_square(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::square(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SQUARE, dispatchKeySet, self);
}

at::Tensor & wrap_square_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SQUARE_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::square_(dispatchKeySet, self);
}

at::Tensor & wrap_square_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SQUARE_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::square_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_std(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool unbiased) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::std(dispatchKeySet, self, unbiased);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_STD, dispatchKeySet, self, unbiased);
}

at::Tensor wrap_std_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool unbiased, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::std(dispatchKeySet, self, dim, unbiased, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_STD_DIM, dispatchKeySet, self, dim, unbiased, keepdim);
}

std::tuple<at::Tensor,at::Tensor> wrap_std_mean(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool unbiased) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::std_mean(dispatchKeySet, self, unbiased);
}

std::tuple<at::Tensor,at::Tensor> wrap_std_mean_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool unbiased, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::std_mean(dispatchKeySet, self, dim, unbiased, keepdim);
}

std::tuple<at::Tensor,at::Tensor> wrap_std_mean_names_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::std_mean(dispatchKeySet, self, dim, unbiased, keepdim);
}

at::Tensor & wrap_std_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool unbiased, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_STD_OUT, dispatchKeySet, self, dim, unbiased, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::std_outf(dispatchKeySet, self, dim, unbiased, keepdim, out);
}

at::Tensor wrap_std_names_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::std(dispatchKeySet, self, dim, unbiased, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_STD_NAMES_DIM, dispatchKeySet, self, dim, unbiased, keepdim);
}

at::Tensor & wrap_std_names_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_STD_NAMES_OUT, dispatchKeySet, self, dim, unbiased, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::std_outf(dispatchKeySet, self, dim, unbiased, keepdim, out);
}

at::Tensor wrap_prod(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::prod(dispatchKeySet, self, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PROD, dispatchKeySet, self, dtype);
}

at::Tensor wrap_prod_dim_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::prod(dispatchKeySet, self, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PROD_DIM_INT, dispatchKeySet, self, dim, keepdim, dtype);
}

at::Tensor & wrap_prod_int_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_PROD_INT_OUT, dispatchKeySet, self, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::prod_outf(dispatchKeySet, self, dim, keepdim, dtype, out);
}

at::Tensor wrap_prod_dim_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::prod(dispatchKeySet, self, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PROD_DIM_DIMNAME, dispatchKeySet, self, dim, keepdim, dtype);
}

at::Tensor & wrap_prod_Dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_PROD_DIMNAME_OUT, dispatchKeySet, self, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::prod_outf(dispatchKeySet, self, dim, keepdim, dtype, out);
}

at::Tensor wrap_t(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::t(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_T, dispatchKeySet, self);
}

at::Tensor & wrap_t_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_T_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::t_(dispatchKeySet, self);
}

at::Tensor & wrap_tan_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TAN_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::tan_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_tanh(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::tanh(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TANH, dispatchKeySet, self);
}

at::Tensor & wrap_tanh_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TANH_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::tanh_(dispatchKeySet, self);
}

at::Tensor & wrap_tanh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TANH_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::tanh_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_tensordot(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::IntArrayRef dims_self, at::IntArrayRef dims_other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::tensordot(dispatchKeySet, self, other, dims_self, dims_other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TENSORDOT, dispatchKeySet, self, other, dims_self, dims_other);
}

at::Tensor & wrap_tensordot_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::IntArrayRef dims_self, at::IntArrayRef dims_other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TENSORDOT_OUT, dispatchKeySet, self, other, dims_self, dims_other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::tensordot_outf(dispatchKeySet, self, other, dims_self, dims_other, out);
}

at::Tensor wrap_threshold(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & threshold, const at::Scalar & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::threshold(dispatchKeySet, self, threshold, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_THRESHOLD, dispatchKeySet, self, threshold, value);
}

at::Tensor & wrap_threshold_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & threshold, const at::Scalar & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_THRESHOLD_, dispatchKeySet, self, threshold, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::threshold_(dispatchKeySet, self, threshold, value);
}

at::Tensor & wrap_threshold_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & threshold, const at::Scalar & value, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_THRESHOLD_OUT, dispatchKeySet, self, threshold, value, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::threshold_outf(dispatchKeySet, self, threshold, value, out);
}

at::Tensor wrap_threshold_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & threshold) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::threshold_backward(dispatchKeySet, grad_output, self, threshold);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_THRESHOLD_BACKWARD, dispatchKeySet, grad_output, self, threshold);
}

at::Tensor wrap_tile(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dims) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::tile(dispatchKeySet, self, dims);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TILE, dispatchKeySet, self, dims);
}

at::Tensor wrap_transpose_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim0, int64_t dim1) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::transpose(dispatchKeySet, self, dim0, dim1);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TRANSPOSE_INT, dispatchKeySet, self, dim0, dim1);
}

at::Tensor wrap_transpose_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim0, at::Dimname dim1) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::transpose(dispatchKeySet, self, dim0, dim1);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TRANSPOSE_DIMNAME, dispatchKeySet, self, dim0, dim1);
}

at::Tensor wrap__mkldnn_transpose(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim0, int64_t dim1) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_mkldnn_transpose(dispatchKeySet, self, dim0, dim1);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__MKLDNN_TRANSPOSE, dispatchKeySet, self, dim0, dim1);
}

at::Tensor & wrap_transpose_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim0, int64_t dim1) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TRANSPOSE_, dispatchKeySet, self, dim0, dim1);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::transpose_(dispatchKeySet, self, dim0, dim1);
}

at::Tensor & wrap__mkldnn_transpose_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim0, int64_t dim1) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__MKLDNN_TRANSPOSE_, dispatchKeySet, self, dim0, dim1);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_mkldnn_transpose_(dispatchKeySet, self, dim0, dim1);
}

at::Tensor wrap_one_hot(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t num_classes) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::one_hot(dispatchKeySet, self, num_classes);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ONE_HOT, dispatchKeySet, self, num_classes);
}

at::Tensor wrap_flip(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dims) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::flip(dispatchKeySet, self, dims);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLIP, dispatchKeySet, self, dims);
}

at::Tensor wrap_fliplr(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fliplr(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLIPLR, dispatchKeySet, self);
}

at::Tensor wrap_flipud(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::flipud(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLIPUD, dispatchKeySet, self);
}

at::Tensor wrap_roll(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef shifts, at::IntArrayRef dims) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::roll(dispatchKeySet, self, shifts, dims);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ROLL, dispatchKeySet, self, shifts, dims);
}

at::Tensor wrap_rot90(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t k, at::IntArrayRef dims) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rot90(dispatchKeySet, self, k, dims);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ROT90, dispatchKeySet, self, k, dims);
}

at::Tensor wrap_trapz_x(c10::DispatchKeySet dispatchKeySet, const at::Tensor & y, const at::Tensor & x, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(y, x);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::trapz(dispatchKeySet, y, x, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(y.dtype(), y.device(), H_TRAPZ_X, dispatchKeySet, y, x, dim);
}

at::Tensor wrap_trapz_dx(c10::DispatchKeySet dispatchKeySet, const at::Tensor & y, double dx, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(y);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::trapz(dispatchKeySet, y, dx, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(y.dtype(), y.device(), H_TRAPZ_DX, dispatchKeySet, y, dx, dim);
}

at::Tensor wrap__trilinear(c10::DispatchKeySet dispatchKeySet, const at::Tensor & i1, const at::Tensor & i2, const at::Tensor & i3, at::IntArrayRef expand1, at::IntArrayRef expand2, at::IntArrayRef expand3, at::IntArrayRef sumdim, int64_t unroll_dim) {
  if (trace.is_flushing()) {
    ensure_materialized(i1, i2, i3);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_trilinear(dispatchKeySet, i1, i2, i3, expand1, expand2, expand3, sumdim, unroll_dim);
  }
  return at::detail::make_tensor<TorchyTensor>(i1.dtype(), i1.device(), H__TRILINEAR, dispatchKeySet, i1, i2, i3, expand1, expand2, expand3, sumdim, unroll_dim);
}

at::Tensor wrap_triplet_margin_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & anchor, const at::Tensor & positive, const at::Tensor & negative, double margin, double p, double eps, bool swap, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(anchor, positive, negative);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::triplet_margin_loss(dispatchKeySet, anchor, positive, negative, margin, p, eps, swap, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(anchor.dtype(), anchor.device(), H_TRIPLET_MARGIN_LOSS, dispatchKeySet, anchor, positive, negative, margin, p, eps, swap, reduction);
}

at::Tensor wrap_trunc(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::trunc(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TRUNC, dispatchKeySet, self);
}

at::Tensor & wrap_trunc_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TRUNC_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::trunc_(dispatchKeySet, self);
}

at::Tensor & wrap_trunc_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TRUNC_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::trunc_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_fix(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fix(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FIX, dispatchKeySet, self);
}

at::Tensor & wrap_fix_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FIX_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fix_(dispatchKeySet, self);
}

at::Tensor & wrap_fix_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FIX_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fix_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_type_as(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::type_as(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TYPE_AS, dispatchKeySet, self, other);
}

bool wrap__has_compatible_shallow_copy_type(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & from) {
  ensure_materialized(self, from);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_has_compatible_shallow_copy_type(dispatchKeySet, self, from);
}

std::tuple<at::Tensor,at::Tensor> wrap__unique(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool sorted, bool return_inverse) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_unique(dispatchKeySet, self, sorted, return_inverse);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_unique_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool sorted, bool return_inverse, bool return_counts) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::unique_dim(dispatchKeySet, self, dim, sorted, return_inverse, return_counts);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_unique_consecutive(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool return_inverse, bool return_counts, c10::optional<int64_t> dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::unique_consecutive(dispatchKeySet, self, return_inverse, return_counts, dim);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_unique_dim_consecutive(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool return_inverse, bool return_counts) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::unique_dim_consecutive(dispatchKeySet, self, dim, return_inverse, return_counts);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap__unique2(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool sorted, bool return_inverse, bool return_counts) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_unique2(dispatchKeySet, self, sorted, return_inverse, return_counts);
}

at::Tensor wrap__unsafe_view(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_unsafe_view(dispatchKeySet, self, size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__UNSAFE_VIEW, dispatchKeySet, self, size);
}

at::Tensor wrap_unsqueeze(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::unsqueeze(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_UNSQUEEZE, dispatchKeySet, self, dim);
}

at::Tensor & wrap_unsqueeze_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UNSQUEEZE_, dispatchKeySet, self, dim);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::unsqueeze_(dispatchKeySet, self, dim);
}

at::Tensor wrap_vander(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x, c10::optional<int64_t> N, bool increasing) {
  if (trace.is_flushing()) {
    ensure_materialized(x);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::vander(dispatchKeySet, x, N, increasing);
  }
  return at::detail::make_tensor<TorchyTensor>(x.dtype(), x.device(), H_VANDER, dispatchKeySet, x, N, increasing);
}

at::Tensor wrap_var(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool unbiased) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::var(dispatchKeySet, self, unbiased);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_VAR, dispatchKeySet, self, unbiased);
}

at::Tensor wrap_var_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool unbiased, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::var(dispatchKeySet, self, dim, unbiased, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_VAR_DIM, dispatchKeySet, self, dim, unbiased, keepdim);
}

at::Tensor & wrap_var_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool unbiased, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_VAR_OUT, dispatchKeySet, self, dim, unbiased, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::var_outf(dispatchKeySet, self, dim, unbiased, keepdim, out);
}

at::Tensor wrap_var_names_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::var(dispatchKeySet, self, dim, unbiased, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_VAR_NAMES_DIM, dispatchKeySet, self, dim, unbiased, keepdim);
}

at::Tensor & wrap_var_names_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_VAR_NAMES_OUT, dispatchKeySet, self, dim, unbiased, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::var_outf(dispatchKeySet, self, dim, unbiased, keepdim, out);
}

std::tuple<at::Tensor,at::Tensor> wrap_var_mean(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool unbiased) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::var_mean(dispatchKeySet, self, unbiased);
}

std::tuple<at::Tensor,at::Tensor> wrap_var_mean_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool unbiased, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::var_mean(dispatchKeySet, self, dim, unbiased, keepdim);
}

std::tuple<at::Tensor,at::Tensor> wrap_var_mean_names_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::var_mean(dispatchKeySet, self, dim, unbiased, keepdim);
}

at::Tensor wrap_view_as(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::view_as(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_VIEW_AS, dispatchKeySet, self, other);
}

at::Tensor wrap_where_self(c10::DispatchKeySet dispatchKeySet, const at::Tensor & condition, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(condition, self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::where(dispatchKeySet, condition, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(condition.dtype(), condition.device(), H_WHERE_SELF, dispatchKeySet, condition, self, other);
}

at::Tensor wrap_where_ScalarSelf(c10::DispatchKeySet dispatchKeySet, const at::Tensor & condition, const at::Scalar & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(condition, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::where(dispatchKeySet, condition, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(condition.dtype(), condition.device(), H_WHERE_SCALARSELF, dispatchKeySet, condition, self, other);
}

at::Tensor wrap_where_ScalarOther(c10::DispatchKeySet dispatchKeySet, const at::Tensor & condition, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(condition, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::where(dispatchKeySet, condition, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(condition.dtype(), condition.device(), H_WHERE_SCALAROTHER, dispatchKeySet, condition, self, other);
}

at::Tensor wrap_where_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & condition, const at::Scalar & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(condition);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::where(dispatchKeySet, condition, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(condition.dtype(), condition.device(), H_WHERE_SCALAR, dispatchKeySet, condition, self, other);
}

std::vector<at::Tensor> wrap_where(c10::DispatchKeySet dispatchKeySet, const at::Tensor & condition) {
  ensure_materialized(condition);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::where(dispatchKeySet, condition);
}

at::Tensor wrap__s_where(c10::DispatchKeySet dispatchKeySet, const at::Tensor & condition, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(condition, self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_s_where(dispatchKeySet, condition, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(condition.dtype(), condition.device(), H__S_WHERE, dispatchKeySet, condition, self, other);
}

at::Tensor wrap_norm_except_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & v, int64_t pow, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(v);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::norm_except_dim(dispatchKeySet, v, pow, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(v.dtype(), v.device(), H_NORM_EXCEPT_DIM, dispatchKeySet, v, pow, dim);
}

at::Tensor wrap__weight_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & v, const at::Tensor & g, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(v, g);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_weight_norm(dispatchKeySet, v, g, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(v.dtype(), v.device(), H__WEIGHT_NORM, dispatchKeySet, v, g, dim);
}

std::tuple<at::Tensor,at::Tensor> wrap__weight_norm_cuda_interface(c10::DispatchKeySet dispatchKeySet, const at::Tensor & v, const at::Tensor & g, int64_t dim) {
  ensure_materialized(v, g);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_weight_norm_cuda_interface(dispatchKeySet, v, g, dim);
}

std::tuple<at::Tensor,at::Tensor> wrap__weight_norm_cuda_interface_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_w, const at::Tensor & saved_v, const at::Tensor & saved_g, const at::Tensor & saved_norms, int64_t dim) {
  ensure_materialized(grad_w, saved_v, saved_g, saved_norms);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_weight_norm_cuda_interface_backward(dispatchKeySet, grad_w, saved_v, saved_g, saved_norms, dim);
}

std::tuple<at::Tensor,at::Tensor> wrap__weight_norm_differentiable_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_w, const at::Tensor & saved_v, const at::Tensor & saved_g, const at::Tensor & saved_norms, int64_t dim) {
  ensure_materialized(grad_w, saved_v, saved_g, saved_norms);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_weight_norm_differentiable_backward(dispatchKeySet, grad_w, saved_v, saved_g, saved_norms, dim);
}

at::Tensor wrap_zeros_names(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::zeros(dispatchKeySet, size, names, dtype, layout, device, pin_memory));
}

at::Tensor wrap_zeros(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::zeros(dispatchKeySet, size, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_zeros_out(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ZEROS_OUT, dispatchKeySet, size, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::zeros_outf(dispatchKeySet, size, out);
}

at::Tensor wrap_zeros_like(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::zeros_like(dispatchKeySet, self, dtype, layout, device, pin_memory, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ZEROS_LIKE, dispatchKeySet, self, dtype, layout, device, pin_memory, memory_format);
}

at::Tensor wrap__standard_gamma_grad(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & output) {
  if (trace.is_flushing()) {
    ensure_materialized(self, output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_standard_gamma_grad(dispatchKeySet, self, output);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__STANDARD_GAMMA_GRAD, dispatchKeySet, self, output);
}

at::Tensor wrap__standard_gamma(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_standard_gamma(dispatchKeySet, self, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__STANDARD_GAMMA, dispatchKeySet, self, generator);
}

at::Tensor wrap__dirichlet_grad(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x, const at::Tensor & alpha, const at::Tensor & total) {
  if (trace.is_flushing()) {
    ensure_materialized(x, alpha, total);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_dirichlet_grad(dispatchKeySet, x, alpha, total);
  }
  return at::detail::make_tensor<TorchyTensor>(x.dtype(), x.device(), H__DIRICHLET_GRAD, dispatchKeySet, x, alpha, total);
}

at::Tensor wrap__sample_dirichlet(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sample_dirichlet(dispatchKeySet, self, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SAMPLE_DIRICHLET, dispatchKeySet, self, generator);
}

at::Tensor wrap_poisson(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::poisson(dispatchKeySet, self, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_POISSON, dispatchKeySet, self, generator);
}

at::Tensor wrap_binomial(c10::DispatchKeySet dispatchKeySet, const at::Tensor & count, const at::Tensor & prob, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(count, prob);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::binomial(dispatchKeySet, count, prob, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(count.dtype(), count.device(), H_BINOMIAL, dispatchKeySet, count, prob, generator);
}

at::Tensor wrap_native_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & p) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::native_norm(dispatchKeySet, self, p);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NATIVE_NORM, dispatchKeySet, self, p);
}

at::Tensor wrap_native_norm_ScalarOpt_dim_dtype(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::native_norm(dispatchKeySet, self, p, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NATIVE_NORM_SCALAROPT_DIM_DTYPE, dispatchKeySet, self, p, dim, keepdim, dtype);
}

at::Tensor wrap__sparse_sum(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_sum(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_SUM, dispatchKeySet, self);
}

at::Tensor wrap__sparse_sum_dtype(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::ScalarType dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_sum(dispatchKeySet, self, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_SUM_DTYPE, dispatchKeySet, self, dtype);
}

at::Tensor wrap__sparse_sum_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_sum(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_SUM_DIM, dispatchKeySet, self, dim);
}

at::Tensor wrap__sparse_sum_dim_dtype(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, at::ScalarType dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_sum(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_SUM_DIM_DTYPE, dispatchKeySet, self, dim, dtype);
}

at::Tensor wrap__sparse_sum_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & self, at::IntArrayRef dim) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_sum_backward(dispatchKeySet, grad, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H__SPARSE_SUM_BACKWARD, dispatchKeySet, grad, self, dim);
}

at::Tensor wrap__sparse_softmax_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_softmax(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_SOFTMAX_INT, dispatchKeySet, self, dim, dtype);
}

at::Tensor wrap__sparse_softmax_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_softmax(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_SOFTMAX_DIMNAME, dispatchKeySet, self, dim, dtype);
}

at::Tensor wrap__sparse_softmax(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool half_to_float) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_softmax(dispatchKeySet, self, dim, half_to_float);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_SOFTMAX, dispatchKeySet, self, dim, half_to_float);
}

at::Tensor wrap__sparse_softmax_backward_data(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_softmax_backward_data(dispatchKeySet, grad_output, output, dim, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H__SPARSE_SOFTMAX_BACKWARD_DATA, dispatchKeySet, grad_output, output, dim, self);
}

at::Tensor wrap__sparse_log_softmax_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_log_softmax(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_LOG_SOFTMAX_INT, dispatchKeySet, self, dim, dtype);
}

at::Tensor wrap__sparse_log_softmax_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_log_softmax(dispatchKeySet, self, dim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_LOG_SOFTMAX_DIMNAME, dispatchKeySet, self, dim, dtype);
}

at::Tensor wrap__sparse_log_softmax(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool half_to_float) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_log_softmax(dispatchKeySet, self, dim, half_to_float);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_LOG_SOFTMAX, dispatchKeySet, self, dim, half_to_float);
}

at::Tensor wrap__sparse_log_softmax_backward_data(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_log_softmax_backward_data(dispatchKeySet, grad_output, output, dim, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H__SPARSE_LOG_SOFTMAX_BACKWARD_DATA, dispatchKeySet, grad_output, output, dim, self);
}

at::Tensor wrap_norm_ScalarOpt_dtype(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::ScalarType dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::norm(dispatchKeySet, self, p, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NORM_SCALAROPT_DTYPE, dispatchKeySet, self, p, dtype);
}

at::Tensor wrap_norm_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & p) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::norm(dispatchKeySet, self, p);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NORM_SCALAR, dispatchKeySet, self, p);
}

at::Tensor wrap_norm_ScalarOpt_dim_dtype(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, at::ScalarType dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::norm(dispatchKeySet, self, p, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NORM_SCALAROPT_DIM_DTYPE, dispatchKeySet, self, p, dim, keepdim, dtype);
}

at::Tensor wrap_norm_ScalarOpt_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::norm(dispatchKeySet, self, p, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NORM_SCALAROPT_DIM, dispatchKeySet, self, p, dim, keepdim);
}

at::Tensor & wrap_norm_dtype_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, at::ScalarType dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NORM_DTYPE_OUT, dispatchKeySet, self, p, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::norm_outf(dispatchKeySet, self, p, dim, keepdim, dtype, out);
}

at::Tensor & wrap_norm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NORM_OUT, dispatchKeySet, self, p, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::norm_outf(dispatchKeySet, self, p, dim, keepdim, out);
}

at::Tensor wrap_norm_names_ScalarOpt_dim_dtype(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::DimnameList dim, bool keepdim, at::ScalarType dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::norm(dispatchKeySet, self, p, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NORM_NAMES_SCALAROPT_DIM_DTYPE, dispatchKeySet, self, p, dim, keepdim, dtype);
}

at::Tensor wrap_norm_names_ScalarOpt_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::DimnameList dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::norm(dispatchKeySet, self, p, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NORM_NAMES_SCALAROPT_DIM, dispatchKeySet, self, p, dim, keepdim);
}

at::Tensor & wrap_norm_names_dtype_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::DimnameList dim, bool keepdim, at::ScalarType dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NORM_NAMES_DTYPE_OUT, dispatchKeySet, self, p, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::norm_outf(dispatchKeySet, self, p, dim, keepdim, dtype, out);
}

at::Tensor & wrap_norm_names_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::DimnameList dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NORM_NAMES_OUT, dispatchKeySet, self, p, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::norm_outf(dispatchKeySet, self, p, dim, keepdim, out);
}

std::tuple<at::Tensor,at::Tensor> wrap_frexp_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::frexp(dispatchKeySet, self);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_frexp_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & mantissa, at::Tensor & exponent) {
  ensure_materialized(self, mantissa, exponent);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::frexp_outf(dispatchKeySet, self, mantissa, exponent);
}

at::Tensor wrap_frobenius_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::frobenius_norm(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FROBENIUS_NORM, dispatchKeySet, self);
}

at::Tensor wrap_frobenius_norm_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::frobenius_norm(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FROBENIUS_NORM_DIM, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_frobenius_norm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FROBENIUS_NORM_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::frobenius_norm_outf(dispatchKeySet, self, dim, keepdim, out);
}

at::Tensor wrap_nuclear_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nuclear_norm(dispatchKeySet, self, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NUCLEAR_NORM, dispatchKeySet, self, keepdim);
}

at::Tensor & wrap_nuclear_norm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NUCLEAR_NORM_OUT, dispatchKeySet, self, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nuclear_norm_outf(dispatchKeySet, self, keepdim, out);
}

at::Tensor wrap_nuclear_norm_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nuclear_norm(dispatchKeySet, self, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NUCLEAR_NORM_DIM, dispatchKeySet, self, dim, keepdim);
}

at::Tensor & wrap_nuclear_norm_dim_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NUCLEAR_NORM_DIM_OUT, dispatchKeySet, self, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nuclear_norm_outf(dispatchKeySet, self, dim, keepdim, out);
}

at::Tensor wrap_clone(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::clone(dispatchKeySet, self, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CLONE, dispatchKeySet, self, memory_format);
}

const at::Tensor & wrap_resize_as_(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & the_template, c10::optional<at::MemoryFormat> memory_format) {
  ensure_materialized(self, the_template);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::resize_as_(dispatchKeySet, self, the_template, memory_format);
}

const at::Tensor & wrap_resize_as_sparse_(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & the_template) {
  ensure_materialized(self, the_template);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::resize_as_sparse_(dispatchKeySet, self, the_template);
}

at::Tensor & wrap_zero_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ZERO_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::zero_(dispatchKeySet, self);
}

at::Tensor & wrap_sub_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SUB_OUT, dispatchKeySet, self, other, alpha, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sub_outf(dispatchKeySet, self, other, alpha, out);
}

at::Tensor wrap_sub_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sub(dispatchKeySet, self, other, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SUB_TENSOR, dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap_sub__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SUB__TENSOR, dispatchKeySet, self, other, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sub_(dispatchKeySet, self, other, alpha);
}

at::Tensor wrap_sub_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sub(dispatchKeySet, self, other, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SUB_SCALAR, dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap_sub__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SUB__SCALAR, dispatchKeySet, self, other, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sub_(dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap_subtract_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SUBTRACT_OUT, dispatchKeySet, self, other, alpha, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::subtract_outf(dispatchKeySet, self, other, alpha, out);
}

at::Tensor wrap_subtract_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::subtract(dispatchKeySet, self, other, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SUBTRACT_TENSOR, dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap_subtract__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SUBTRACT__TENSOR, dispatchKeySet, self, other, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::subtract_(dispatchKeySet, self, other, alpha);
}

at::Tensor wrap_subtract_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::subtract(dispatchKeySet, self, other, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SUBTRACT_SCALAR, dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap_subtract__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SUBTRACT__SCALAR, dispatchKeySet, self, other, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::subtract_(dispatchKeySet, self, other, alpha);
}

at::Tensor wrap_rsub_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rsub(dispatchKeySet, self, other, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RSUB_TENSOR, dispatchKeySet, self, other, alpha);
}

at::Tensor & wrap_heaviside_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & values, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HEAVISIDE_OUT, dispatchKeySet, self, values, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, values, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::heaviside_outf(dispatchKeySet, self, values, out);
}

at::Tensor wrap_heaviside(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & values) {
  if (trace.is_flushing()) {
    ensure_materialized(self, values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::heaviside(dispatchKeySet, self, values);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_HEAVISIDE, dispatchKeySet, self, values);
}

at::Tensor & wrap_heaviside_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & values) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HEAVISIDE_, dispatchKeySet, self, values);
    return self;
  }
  will_override(self);
  ensure_materialized(self, values);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::heaviside_(dispatchKeySet, self, values);
}

at::Tensor wrap_rsub_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rsub(dispatchKeySet, self, other, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RSUB_SCALAR, dispatchKeySet, self, other, alpha);
}

at::Tensor wrap__sparse_addmm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & sparse, const at::Tensor & dense, const at::Scalar & beta, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, sparse, dense);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_addmm(dispatchKeySet, self, sparse, dense, beta, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__SPARSE_ADDMM, dispatchKeySet, self, sparse, dense, beta, alpha);
}

at::Tensor & wrap_addmm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat1, const at::Tensor & mat2, const at::Scalar & beta, const at::Scalar & alpha, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDMM_OUT, dispatchKeySet, self, mat1, mat2, beta, alpha, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, mat1, mat2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addmm_outf(dispatchKeySet, self, mat1, mat2, beta, alpha, out);
}

at::Tensor wrap_addmm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat1, const at::Tensor & mat2, const at::Scalar & beta, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mat1, mat2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::addmm(dispatchKeySet, self, mat1, mat2, beta, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ADDMM, dispatchKeySet, self, mat1, mat2, beta, alpha);
}

at::Tensor & wrap_addmm_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & mat1, const at::Tensor & mat2, const at::Scalar & beta, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDMM_, dispatchKeySet, self, mat1, mat2, beta, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self, mat1, mat2);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addmm_(dispatchKeySet, self, mat1, mat2, beta, alpha);
}

at::Tensor wrap_sparse_csr_tensor_crow_col_value_size(c10::DispatchKeySet dispatchKeySet, const at::Tensor & crow_indices, const at::Tensor & col_indices, const at::Tensor & values, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  if (trace.is_flushing()) {
    ensure_materialized(crow_indices, col_indices, values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sparse_csr_tensor(dispatchKeySet, crow_indices, col_indices, values, size, dtype, layout, device, pin_memory);
  }
  return at::detail::make_tensor<TorchyTensor>(crow_indices.dtype(), crow_indices.device(), H_SPARSE_CSR_TENSOR_CROW_COL_VALUE_SIZE, dispatchKeySet, crow_indices, col_indices, values, size, dtype, layout, device, pin_memory);
}

at::Tensor wrap_sparse_csr_tensor_crow_col_value(c10::DispatchKeySet dispatchKeySet, const at::Tensor & crow_indices, const at::Tensor & col_indices, const at::Tensor & values, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  if (trace.is_flushing()) {
    ensure_materialized(crow_indices, col_indices, values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sparse_csr_tensor(dispatchKeySet, crow_indices, col_indices, values, dtype, layout, device, pin_memory);
  }
  return at::detail::make_tensor<TorchyTensor>(crow_indices.dtype(), crow_indices.device(), H_SPARSE_CSR_TENSOR_CROW_COL_VALUE, dispatchKeySet, crow_indices, col_indices, values, dtype, layout, device, pin_memory);
}

at::Tensor wrap_sparse_coo_tensor_size(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::sparse_coo_tensor(dispatchKeySet, size, dtype, layout, device, pin_memory));
}

at::Tensor wrap_sparse_coo_tensor_indices(c10::DispatchKeySet dispatchKeySet, const at::Tensor & indices, const at::Tensor & values, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  if (trace.is_flushing()) {
    ensure_materialized(indices, values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sparse_coo_tensor(dispatchKeySet, indices, values, dtype, layout, device, pin_memory);
  }
  return at::detail::make_tensor<TorchyTensor>(indices.dtype(), indices.device(), H_SPARSE_COO_TENSOR_INDICES, dispatchKeySet, indices, values, dtype, layout, device, pin_memory);
}

at::Tensor wrap_sparse_coo_tensor_indices_size(c10::DispatchKeySet dispatchKeySet, const at::Tensor & indices, const at::Tensor & values, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  if (trace.is_flushing()) {
    ensure_materialized(indices, values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sparse_coo_tensor(dispatchKeySet, indices, values, size, dtype, layout, device, pin_memory);
  }
  return at::detail::make_tensor<TorchyTensor>(indices.dtype(), indices.device(), H_SPARSE_COO_TENSOR_INDICES_SIZE, dispatchKeySet, indices, values, size, dtype, layout, device, pin_memory);
}

at::Tensor wrap__sparse_coo_tensor_unsafe(c10::DispatchKeySet dispatchKeySet, const at::Tensor & indices, const at::Tensor & values, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  if (trace.is_flushing()) {
    ensure_materialized(indices, values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_coo_tensor_unsafe(dispatchKeySet, indices, values, size, dtype, layout, device, pin_memory);
  }
  return at::detail::make_tensor<TorchyTensor>(indices.dtype(), indices.device(), H__SPARSE_COO_TENSOR_UNSAFE, dispatchKeySet, indices, values, size, dtype, layout, device, pin_memory);
}

void wrap__validate_sparse_coo_tensor_args(c10::DispatchKeySet dispatchKeySet, const at::Tensor & indices, const at::Tensor & values, at::IntArrayRef size) {
  ensure_materialized(indices, values);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_validate_sparse_coo_tensor_args(dispatchKeySet, indices, values, size);
}

at::Tensor wrap__sparse_coo_tensor_with_dims(c10::DispatchKeySet dispatchKeySet, int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::_sparse_coo_tensor_with_dims(dispatchKeySet, sparse_dim, dense_dim, size, dtype, layout, device, pin_memory));
}

at::Tensor wrap__sparse_coo_tensor_with_dims_and_tensors(c10::DispatchKeySet dispatchKeySet, int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  if (trace.is_flushing()) {
    ensure_materialized(indices, values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_sparse_coo_tensor_with_dims_and_tensors(dispatchKeySet, sparse_dim, dense_dim, size, indices, values, dtype, layout, device, pin_memory);
  }
  return at::detail::make_tensor<TorchyTensor>(indices.dtype(), indices.device(), H__SPARSE_COO_TENSOR_WITH_DIMS_AND_TENSORS, dispatchKeySet, sparse_dim, dense_dim, size, indices, values, dtype, layout, device, pin_memory);
}

const at::Tensor & wrap_sparse_resize_(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size, int64_t sparse_dim, int64_t dense_dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sparse_resize_(dispatchKeySet, self, size, sparse_dim, dense_dim);
}

const at::Tensor & wrap_sparse_resize_and_clear_(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size, int64_t sparse_dim, int64_t dense_dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sparse_resize_and_clear_(dispatchKeySet, self, size, sparse_dim, dense_dim);
}

at::Tensor wrap_sparse_mask(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mask) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mask);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sparse_mask(dispatchKeySet, self, mask);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SPARSE_MASK, dispatchKeySet, self, mask);
}

at::Tensor wrap_to_dense(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::to_dense(dispatchKeySet, self, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TO_DENSE, dispatchKeySet, self, dtype);
}

at::Tensor wrap_to_dense_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & input) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::to_dense_backward(dispatchKeySet, grad, input);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_TO_DENSE_BACKWARD, dispatchKeySet, grad, input);
}

int64_t wrap_sparse_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sparse_dim(dispatchKeySet, self);
}

int64_t wrap__dimI(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_dimI(dispatchKeySet, self);
}

int64_t wrap_dense_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::dense_dim(dispatchKeySet, self);
}

int64_t wrap__dimV(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_dimV(dispatchKeySet, self);
}

int64_t wrap__nnz(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_nnz(dispatchKeySet, self);
}

at::Tensor wrap_coalesce(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::coalesce(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_COALESCE, dispatchKeySet, self);
}

at::Tensor wrap__coalesce(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_coalesce(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__COALESCE, dispatchKeySet, self);
}

bool wrap_is_coalesced(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::is_coalesced(dispatchKeySet, self);
}

at::Tensor wrap__indices(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_indices(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__INDICES, dispatchKeySet, self);
}

at::Tensor wrap__values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_values(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__VALUES, dispatchKeySet, self);
}

at::Tensor & wrap__coalesced_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, bool coalesced) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__COALESCED_, dispatchKeySet, self, coalesced);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_coalesced_(dispatchKeySet, self, coalesced);
}

at::Tensor wrap_indices(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::indices(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDICES, dispatchKeySet, self);
}

at::Tensor wrap_values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::values(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_VALUES, dispatchKeySet, self);
}

at::Tensor wrap_crow_indices(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::crow_indices(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CROW_INDICES, dispatchKeySet, self);
}

at::Tensor wrap_col_indices(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::col_indices(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_COL_INDICES, dispatchKeySet, self);
}

at::Tensor & wrap_hspmm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & mat1, const at::Tensor & mat2, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HSPMM_OUT, dispatchKeySet, mat1, mat2, out);
    return out;
  }
  will_override(out);
  ensure_materialized(mat1, mat2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hspmm_outf(dispatchKeySet, mat1, mat2, out);
}

at::Tensor wrap_hspmm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & mat1, const at::Tensor & mat2) {
  if (trace.is_flushing()) {
    ensure_materialized(mat1, mat2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hspmm(dispatchKeySet, mat1, mat2);
  }
  return at::detail::make_tensor<TorchyTensor>(mat1.dtype(), mat1.device(), H_HSPMM, dispatchKeySet, mat1, mat2);
}

at::Tensor & wrap_copy_sparse_to_sparse_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & src, bool non_blocking) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COPY_SPARSE_TO_SPARSE_, dispatchKeySet, self, src, non_blocking);
    return self;
  }
  will_override(self);
  ensure_materialized(self, src);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::copy_sparse_to_sparse_(dispatchKeySet, self, src, non_blocking);
}

std::vector<at::Tensor> wrap_unbind_int(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::unbind(dispatchKeySet, self, dim);
}

std::vector<at::Tensor> wrap_unbind_Dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::unbind(dispatchKeySet, self, dim);
}

at::Tensor wrap_to_sparse_sparse_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t sparse_dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::to_sparse(dispatchKeySet, self, sparse_dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TO_SPARSE_SPARSE_DIM, dispatchKeySet, self, sparse_dim);
}

at::Tensor wrap_to_sparse(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::to_sparse(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TO_SPARSE, dispatchKeySet, self);
}

at::Tensor wrap_to_mkldnn(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::to_mkldnn(dispatchKeySet, self, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TO_MKLDNN, dispatchKeySet, self, dtype);
}

at::Tensor wrap_mkldnn_reorder_conv2d_weight(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_reorder_conv2d_weight(dispatchKeySet, self, padding, stride, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MKLDNN_REORDER_CONV2D_WEIGHT, dispatchKeySet, self, padding, stride, dilation, groups);
}

at::Tensor wrap_mkldnn_reorder_conv3d_weight(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_reorder_conv3d_weight(dispatchKeySet, self, padding, stride, dilation, groups);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MKLDNN_REORDER_CONV3D_WEIGHT, dispatchKeySet, self, padding, stride, dilation, groups);
}

at::Tensor wrap_to_mkldnn_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & input) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::to_mkldnn_backward(dispatchKeySet, grad, input);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_TO_MKLDNN_BACKWARD, dispatchKeySet, grad, input);
}

at::Tensor wrap_quantize_per_tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double scale, int64_t zero_point, at::ScalarType dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantize_per_tensor(dispatchKeySet, self, scale, zero_point, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_QUANTIZE_PER_TENSOR, dispatchKeySet, self, scale, zero_point, dtype);
}

std::vector<at::Tensor> wrap_quantize_per_tensor_tensors(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, const at::Tensor & scales, const at::Tensor & zero_points, at::ScalarType dtype) {
  ensure_materialized(scales, zero_points);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::quantize_per_tensor(dispatchKeySet, tensors, scales, zero_points, dtype);
}

at::Tensor wrap_quantize_per_channel(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & scales, const at::Tensor & zero_points, int64_t axis, at::ScalarType dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self, scales, zero_points);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantize_per_channel(dispatchKeySet, self, scales, zero_points, axis, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_QUANTIZE_PER_CHANNEL, dispatchKeySet, self, scales, zero_points, axis, dtype);
}

at::Tensor wrap_dequantize_self(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::dequantize(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DEQUANTIZE_SELF, dispatchKeySet, self);
}

std::vector<at::Tensor> wrap_dequantize_tensors(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::dequantize(dispatchKeySet, tensors);
}

double wrap_q_scale(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::q_scale(dispatchKeySet, self);
}

int64_t wrap_q_zero_point(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::q_zero_point(dispatchKeySet, self);
}

at::Tensor wrap_q_per_channel_scales(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::q_per_channel_scales(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_Q_PER_CHANNEL_SCALES, dispatchKeySet, self);
}

at::Tensor wrap_q_per_channel_zero_points(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::q_per_channel_zero_points(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_Q_PER_CHANNEL_ZERO_POINTS, dispatchKeySet, self);
}

int64_t wrap_q_per_channel_axis(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::q_per_channel_axis(dispatchKeySet, self);
}

at::Tensor wrap_int_repr(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::int_repr(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INT_REPR, dispatchKeySet, self);
}

at::Tensor wrap__make_per_tensor_quantized_tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double scale, int64_t zero_point) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_make_per_tensor_quantized_tensor(dispatchKeySet, self, scale, zero_point);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__MAKE_PER_TENSOR_QUANTIZED_TENSOR, dispatchKeySet, self, scale, zero_point);
}

at::Tensor wrap__make_per_channel_quantized_tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, int64_t axis) {
  if (trace.is_flushing()) {
    ensure_materialized(self, scale, zero_point);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_make_per_channel_quantized_tensor(dispatchKeySet, self, scale, zero_point, axis);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__MAKE_PER_CHANNEL_QUANTIZED_TENSOR, dispatchKeySet, self, scale, zero_point, axis);
}

at::QScheme wrap_qscheme(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::qscheme(dispatchKeySet, self);
}

at::Tensor wrap_fake_quantize_per_tensor_affine(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double scale, int64_t zero_point, int64_t quant_min, int64_t quant_max) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fake_quantize_per_tensor_affine(dispatchKeySet, self, scale, zero_point, quant_min, quant_max);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FAKE_QUANTIZE_PER_TENSOR_AFFINE, dispatchKeySet, self, scale, zero_point, quant_min, quant_max);
}

std::tuple<at::Tensor,at::Tensor> wrap_fake_quantize_per_tensor_affine_cachemask(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double scale, int64_t zero_point, int64_t quant_min, int64_t quant_max) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fake_quantize_per_tensor_affine_cachemask(dispatchKeySet, self, scale, zero_point, quant_min, quant_max);
}

at::Tensor wrap_fake_quantize_per_tensor_affine_cachemask_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & mask) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, mask);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fake_quantize_per_tensor_affine_cachemask_backward(dispatchKeySet, grad, mask);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_FAKE_QUANTIZE_PER_TENSOR_AFFINE_CACHEMASK_BACKWARD, dispatchKeySet, grad, mask);
}

at::Tensor wrap__fake_quantize_learnable_per_tensor_affine(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, int64_t quant_min, int64_t quant_max, double grad_factor) {
  if (trace.is_flushing()) {
    ensure_materialized(self, scale, zero_point);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_fake_quantize_learnable_per_tensor_affine(dispatchKeySet, self, scale, zero_point, quant_min, quant_max, grad_factor);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__FAKE_QUANTIZE_LEARNABLE_PER_TENSOR_AFFINE, dispatchKeySet, self, scale, zero_point, quant_min, quant_max, grad_factor);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap__fake_quantize_learnable_per_tensor_affine_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, int64_t quant_min, int64_t quant_max, double grad_factor) {
  ensure_materialized(grad, self, scale, zero_point);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_fake_quantize_learnable_per_tensor_affine_backward(dispatchKeySet, grad, self, scale, zero_point, quant_min, quant_max, grad_factor);
}

at::Tensor wrap_fake_quantize_per_channel_affine(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, int64_t axis, int64_t quant_min, int64_t quant_max) {
  if (trace.is_flushing()) {
    ensure_materialized(self, scale, zero_point);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fake_quantize_per_channel_affine(dispatchKeySet, self, scale, zero_point, axis, quant_min, quant_max);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FAKE_QUANTIZE_PER_CHANNEL_AFFINE, dispatchKeySet, self, scale, zero_point, axis, quant_min, quant_max);
}

std::tuple<at::Tensor,at::Tensor> wrap_fake_quantize_per_channel_affine_cachemask(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, int64_t axis, int64_t quant_min, int64_t quant_max) {
  ensure_materialized(self, scale, zero_point);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fake_quantize_per_channel_affine_cachemask(dispatchKeySet, self, scale, zero_point, axis, quant_min, quant_max);
}

at::Tensor wrap_fake_quantize_per_channel_affine_cachemask_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & mask) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, mask);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fake_quantize_per_channel_affine_cachemask_backward(dispatchKeySet, grad, mask);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_FAKE_QUANTIZE_PER_CHANNEL_AFFINE_CACHEMASK_BACKWARD, dispatchKeySet, grad, mask);
}

at::Tensor wrap__fake_quantize_learnable_per_channel_affine(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, int64_t axis, int64_t quant_min, int64_t quant_max, double grad_factor) {
  if (trace.is_flushing()) {
    ensure_materialized(self, scale, zero_point);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_fake_quantize_learnable_per_channel_affine(dispatchKeySet, self, scale, zero_point, axis, quant_min, quant_max, grad_factor);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__FAKE_QUANTIZE_LEARNABLE_PER_CHANNEL_AFFINE, dispatchKeySet, self, scale, zero_point, axis, quant_min, quant_max, grad_factor);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap__fake_quantize_learnable_per_channel_affine_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, int64_t axis, int64_t quant_min, int64_t quant_max, double grad_factor) {
  ensure_materialized(grad, self, scale, zero_point);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_fake_quantize_learnable_per_channel_affine_backward(dispatchKeySet, grad, self, scale, zero_point, axis, quant_min, quant_max, grad_factor);
}

std::tuple<double,int64_t> wrap__choose_qparams_per_tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool reduce_range) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_choose_qparams_per_tensor(dispatchKeySet, self, reduce_range);
}

at::Tensor wrap__saturate_weight_to_fp16(c10::DispatchKeySet dispatchKeySet, const at::Tensor & weight) {
  if (trace.is_flushing()) {
    ensure_materialized(weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_saturate_weight_to_fp16(dispatchKeySet, weight);
  }
  return at::detail::make_tensor<TorchyTensor>(weight.dtype(), weight.device(), H__SATURATE_WEIGHT_TO_FP16, dispatchKeySet, weight);
}

std::tuple<at::Tensor,at::Tensor> wrap_choose_qparams_optimized(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, int64_t numel, int64_t n_bins, double ratio, int64_t bit_width) {
  ensure_materialized(input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::choose_qparams_optimized(dispatchKeySet, input, numel, n_bins, ratio, bit_width);
}

at::Tensor wrap_to_dtype_layout(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, bool non_blocking, bool copy, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::to(dispatchKeySet, self, dtype, layout, device, pin_memory, non_blocking, copy, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TO_DTYPE_LAYOUT, dispatchKeySet, self, dtype, layout, device, pin_memory, non_blocking, copy, memory_format);
}

at::Tensor wrap_to_device(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Device device, at::ScalarType dtype, bool non_blocking, bool copy, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::to(dispatchKeySet, self, device, dtype, non_blocking, copy, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TO_DEVICE, dispatchKeySet, self, device, dtype, non_blocking, copy, memory_format);
}

at::Tensor wrap_to_dtype(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::ScalarType dtype, bool non_blocking, bool copy, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::to(dispatchKeySet, self, dtype, non_blocking, copy, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TO_DTYPE, dispatchKeySet, self, dtype, non_blocking, copy, memory_format);
}

at::Tensor wrap_to_other(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, bool non_blocking, bool copy, c10::optional<at::MemoryFormat> memory_format) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::to(dispatchKeySet, self, other, non_blocking, copy, memory_format);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TO_OTHER, dispatchKeySet, self, other, non_blocking, copy, memory_format);
}

std::vector<at::Tensor> wrap_meshgrid(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::meshgrid(dispatchKeySet, tensors);
}

at::Tensor wrap_cartesian_prod(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::cartesian_prod(dispatchKeySet, tensors));
}

at::Tensor wrap_combinations(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t r, bool with_replacement) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::combinations(dispatchKeySet, self, r, with_replacement);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_COMBINATIONS, dispatchKeySet, self, r, with_replacement);
}

at::Scalar wrap_item(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::item(dispatchKeySet, self);
}

at::ScalarType wrap_result_type_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & tensor, const at::Tensor & other) {
  ensure_materialized(tensor, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::result_type(dispatchKeySet, tensor, other);
}

at::ScalarType wrap_result_type_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & tensor, const at::Scalar & other) {
  ensure_materialized(tensor);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::result_type(dispatchKeySet, tensor, other);
}

at::ScalarType wrap_result_type_Scalar_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Scalar & scalar, const at::Tensor & tensor) {
  ensure_materialized(tensor);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::result_type(dispatchKeySet, scalar, tensor);
}

at::ScalarType wrap_result_type_Scalar_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Scalar & scalar1, const at::Scalar & scalar2) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::result_type(dispatchKeySet, scalar1, scalar2);
}

bool wrap_can_cast(c10::DispatchKeySet dispatchKeySet, at::ScalarType from, at::ScalarType to) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::can_cast(dispatchKeySet, from, to);
}

at::ScalarType wrap_promote_types(c10::DispatchKeySet dispatchKeySet, at::ScalarType type1, at::ScalarType type2) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::promote_types(dispatchKeySet, type1, type2);
}

at::Scalar wrap__local_scalar_dense(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_local_scalar_dense(dispatchKeySet, self);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap__thnn_fused_lstm_cell(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input_gates, const at::Tensor & hidden_gates, const at::Tensor & cx, const c10::optional<at::Tensor> & input_bias, const c10::optional<at::Tensor> & hidden_bias) {
  ensure_materialized(input_gates, hidden_gates, cx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_thnn_fused_lstm_cell(dispatchKeySet, input_gates, hidden_gates, cx, input_bias, hidden_bias);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap__thnn_fused_lstm_cell_backward(c10::DispatchKeySet dispatchKeySet, const c10::optional<at::Tensor> & grad_hy, const c10::optional<at::Tensor> & grad_cy, const at::Tensor & cx, const at::Tensor & cy, const at::Tensor & workspace, bool has_bias) {
  ensure_materialized(cx, cy, workspace);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_thnn_fused_lstm_cell_backward(dispatchKeySet, grad_hy, grad_cy, cx, cy, workspace, has_bias);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap__thnn_differentiable_lstm_cell_backward(c10::DispatchKeySet dispatchKeySet, const c10::optional<at::Tensor> & grad_hy, const c10::optional<at::Tensor> & grad_cy, const at::Tensor & input_gates, const at::Tensor & hidden_gates, const c10::optional<at::Tensor> & input_bias, const c10::optional<at::Tensor> & hidden_bias, const at::Tensor & cx, const at::Tensor & cy) {
  ensure_materialized(input_gates, hidden_gates, cx, cy);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_thnn_differentiable_lstm_cell_backward(dispatchKeySet, grad_hy, grad_cy, input_gates, hidden_gates, input_bias, hidden_bias, cx, cy);
}

std::tuple<at::Tensor,at::Tensor> wrap__thnn_fused_gru_cell(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input_gates, const at::Tensor & hidden_gates, const at::Tensor & hx, const c10::optional<at::Tensor> & input_bias, const c10::optional<at::Tensor> & hidden_bias) {
  ensure_materialized(input_gates, hidden_gates, hx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_thnn_fused_gru_cell(dispatchKeySet, input_gates, hidden_gates, hx, input_bias, hidden_bias);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap__thnn_fused_gru_cell_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_hy, const at::Tensor & workspace, bool has_bias) {
  ensure_materialized(grad_hy, workspace);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_thnn_fused_gru_cell_backward(dispatchKeySet, grad_hy, workspace, has_bias);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap__thnn_differentiable_gru_cell_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_hy, const at::Tensor & input_gates, const at::Tensor & hidden_gates, const at::Tensor & hx, const c10::optional<at::Tensor> & input_bias, const c10::optional<at::Tensor> & hidden_bias) {
  ensure_materialized(grad_hy, input_gates, hidden_gates, hx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_thnn_differentiable_gru_cell_backward(dispatchKeySet, grad_hy, input_gates, hidden_gates, hx, input_bias, hidden_bias);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_lstm_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::TensorList hx, at::TensorList params, bool has_biases, int64_t num_layers, double dropout, bool train, bool bidirectional, bool batch_first) {
  ensure_materialized(input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lstm(dispatchKeySet, input, hx, params, has_biases, num_layers, dropout, train, bidirectional, batch_first);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_lstm_data(c10::DispatchKeySet dispatchKeySet, const at::Tensor & data, const at::Tensor & batch_sizes, at::TensorList hx, at::TensorList params, bool has_biases, int64_t num_layers, double dropout, bool train, bool bidirectional) {
  ensure_materialized(data, batch_sizes);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lstm(dispatchKeySet, data, batch_sizes, hx, params, has_biases, num_layers, dropout, train, bidirectional);
}

std::tuple<at::Tensor,at::Tensor> wrap_gru_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & hx, at::TensorList params, bool has_biases, int64_t num_layers, double dropout, bool train, bool bidirectional, bool batch_first) {
  ensure_materialized(input, hx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::gru(dispatchKeySet, input, hx, params, has_biases, num_layers, dropout, train, bidirectional, batch_first);
}

std::tuple<at::Tensor,at::Tensor> wrap_gru_data(c10::DispatchKeySet dispatchKeySet, const at::Tensor & data, const at::Tensor & batch_sizes, const at::Tensor & hx, at::TensorList params, bool has_biases, int64_t num_layers, double dropout, bool train, bool bidirectional) {
  ensure_materialized(data, batch_sizes, hx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::gru(dispatchKeySet, data, batch_sizes, hx, params, has_biases, num_layers, dropout, train, bidirectional);
}

std::tuple<at::Tensor,at::Tensor> wrap_rnn_tanh_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & hx, at::TensorList params, bool has_biases, int64_t num_layers, double dropout, bool train, bool bidirectional, bool batch_first) {
  ensure_materialized(input, hx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rnn_tanh(dispatchKeySet, input, hx, params, has_biases, num_layers, dropout, train, bidirectional, batch_first);
}

std::tuple<at::Tensor,at::Tensor> wrap_rnn_tanh_data(c10::DispatchKeySet dispatchKeySet, const at::Tensor & data, const at::Tensor & batch_sizes, const at::Tensor & hx, at::TensorList params, bool has_biases, int64_t num_layers, double dropout, bool train, bool bidirectional) {
  ensure_materialized(data, batch_sizes, hx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rnn_tanh(dispatchKeySet, data, batch_sizes, hx, params, has_biases, num_layers, dropout, train, bidirectional);
}

std::tuple<at::Tensor,at::Tensor> wrap_rnn_relu_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & hx, at::TensorList params, bool has_biases, int64_t num_layers, double dropout, bool train, bool bidirectional, bool batch_first) {
  ensure_materialized(input, hx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rnn_relu(dispatchKeySet, input, hx, params, has_biases, num_layers, dropout, train, bidirectional, batch_first);
}

std::tuple<at::Tensor,at::Tensor> wrap_rnn_relu_data(c10::DispatchKeySet dispatchKeySet, const at::Tensor & data, const at::Tensor & batch_sizes, const at::Tensor & hx, at::TensorList params, bool has_biases, int64_t num_layers, double dropout, bool train, bool bidirectional) {
  ensure_materialized(data, batch_sizes, hx);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rnn_relu(dispatchKeySet, data, batch_sizes, hx, params, has_biases, num_layers, dropout, train, bidirectional);
}

std::tuple<at::Tensor,at::Tensor> wrap_lstm_cell(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::TensorList hx, const at::Tensor & w_ih, const at::Tensor & w_hh, const c10::optional<at::Tensor> & b_ih, const c10::optional<at::Tensor> & b_hh) {
  ensure_materialized(input, w_ih, w_hh);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lstm_cell(dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh);
}

at::Tensor wrap_gru_cell(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & hx, const at::Tensor & w_ih, const at::Tensor & w_hh, const c10::optional<at::Tensor> & b_ih, const c10::optional<at::Tensor> & b_hh) {
  if (trace.is_flushing()) {
    ensure_materialized(input, hx, w_ih, w_hh);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::gru_cell(dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_GRU_CELL, dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh);
}

at::Tensor wrap_rnn_tanh_cell(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & hx, const at::Tensor & w_ih, const at::Tensor & w_hh, const c10::optional<at::Tensor> & b_ih, const c10::optional<at::Tensor> & b_hh) {
  if (trace.is_flushing()) {
    ensure_materialized(input, hx, w_ih, w_hh);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rnn_tanh_cell(dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_RNN_TANH_CELL, dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh);
}

at::Tensor wrap_rnn_relu_cell(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & hx, const at::Tensor & w_ih, const at::Tensor & w_hh, const c10::optional<at::Tensor> & b_ih, const c10::optional<at::Tensor> & b_hh) {
  if (trace.is_flushing()) {
    ensure_materialized(input, hx, w_ih, w_hh);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rnn_relu_cell(dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_RNN_RELU_CELL, dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh);
}

std::tuple<at::Tensor,at::Tensor> wrap_quantized_lstm_cell(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::TensorList hx, const at::Tensor & w_ih, const at::Tensor & w_hh, const at::Tensor & b_ih, const at::Tensor & b_hh, const at::Tensor & packed_ih, const at::Tensor & packed_hh, const at::Tensor & col_offsets_ih, const at::Tensor & col_offsets_hh, const at::Scalar & scale_ih, const at::Scalar & scale_hh, const at::Scalar & zero_point_ih, const at::Scalar & zero_point_hh) {
  ensure_materialized(input, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::quantized_lstm_cell(dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh, scale_ih, scale_hh, zero_point_ih, zero_point_hh);
}

at::Tensor wrap_quantized_gru_cell(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & hx, const at::Tensor & w_ih, const at::Tensor & w_hh, const at::Tensor & b_ih, const at::Tensor & b_hh, const at::Tensor & packed_ih, const at::Tensor & packed_hh, const at::Tensor & col_offsets_ih, const at::Tensor & col_offsets_hh, const at::Scalar & scale_ih, const at::Scalar & scale_hh, const at::Scalar & zero_point_ih, const at::Scalar & zero_point_hh) {
  if (trace.is_flushing()) {
    ensure_materialized(input, hx, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantized_gru_cell(dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh, scale_ih, scale_hh, zero_point_ih, zero_point_hh);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_QUANTIZED_GRU_CELL, dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh, scale_ih, scale_hh, zero_point_ih, zero_point_hh);
}

at::Tensor wrap_quantized_rnn_relu_cell(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & hx, const at::Tensor & w_ih, const at::Tensor & w_hh, const at::Tensor & b_ih, const at::Tensor & b_hh, const at::Tensor & packed_ih, const at::Tensor & packed_hh, const at::Tensor & col_offsets_ih, const at::Tensor & col_offsets_hh, const at::Scalar & scale_ih, const at::Scalar & scale_hh, const at::Scalar & zero_point_ih, const at::Scalar & zero_point_hh) {
  if (trace.is_flushing()) {
    ensure_materialized(input, hx, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantized_rnn_relu_cell(dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh, scale_ih, scale_hh, zero_point_ih, zero_point_hh);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_QUANTIZED_RNN_RELU_CELL, dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh, scale_ih, scale_hh, zero_point_ih, zero_point_hh);
}

at::Tensor wrap_quantized_rnn_tanh_cell(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & hx, const at::Tensor & w_ih, const at::Tensor & w_hh, const at::Tensor & b_ih, const at::Tensor & b_hh, const at::Tensor & packed_ih, const at::Tensor & packed_hh, const at::Tensor & col_offsets_ih, const at::Tensor & col_offsets_hh, const at::Scalar & scale_ih, const at::Scalar & scale_hh, const at::Scalar & zero_point_ih, const at::Scalar & zero_point_hh) {
  if (trace.is_flushing()) {
    ensure_materialized(input, hx, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantized_rnn_tanh_cell(dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh, scale_ih, scale_hh, zero_point_ih, zero_point_hh);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_QUANTIZED_RNN_TANH_CELL, dispatchKeySet, input, hx, w_ih, w_hh, b_ih, b_hh, packed_ih, packed_hh, col_offsets_ih, col_offsets_hh, scale_ih, scale_hh, zero_point_ih, zero_point_hh);
}

std::tuple<at::Tensor,at::Tensor> wrap__pack_padded_sequence(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & lengths, bool batch_first) {
  ensure_materialized(input, lengths);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_pack_padded_sequence(dispatchKeySet, input, lengths, batch_first);
}

at::Tensor wrap__pack_padded_sequence_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, at::IntArrayRef input_size, const at::Tensor & batch_sizes, bool batch_first) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, batch_sizes);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_pack_padded_sequence_backward(dispatchKeySet, grad, input_size, batch_sizes, batch_first);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H__PACK_PADDED_SEQUENCE_BACKWARD, dispatchKeySet, grad, input_size, batch_sizes, batch_first);
}

std::tuple<at::Tensor,at::Tensor> wrap__pad_packed_sequence(c10::DispatchKeySet dispatchKeySet, const at::Tensor & data, const at::Tensor & batch_sizes, bool batch_first, const at::Scalar & padding_value, int64_t total_length) {
  ensure_materialized(data, batch_sizes);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_pad_packed_sequence(dispatchKeySet, data, batch_sizes, batch_first, padding_value, total_length);
}

at::Tensor & wrap_set__source_Storage(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Storage source) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SET__SOURCE_STORAGE, dispatchKeySet, self, source);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::set_(dispatchKeySet, self, source);
}

at::Tensor & wrap_set__source_Storage_storage_offset(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Storage source, int64_t storage_offset, at::IntArrayRef size, at::IntArrayRef stride) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SET__SOURCE_STORAGE_STORAGE_OFFSET, dispatchKeySet, self, source, storage_offset, size, stride);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::set_(dispatchKeySet, self, source, storage_offset, size, stride);
}

at::Tensor & wrap_set__source_Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & source) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SET__SOURCE_TENSOR, dispatchKeySet, self, source);
    return self;
  }
  will_override(self);
  ensure_materialized(self, source);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::set_(dispatchKeySet, self, source);
}

at::Tensor & wrap_set_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SET_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::set_(dispatchKeySet, self);
}

bool wrap_is_set_to(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & tensor) {
  ensure_materialized(self, tensor);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::is_set_to(dispatchKeySet, self, tensor);
}

at::Tensor & wrap_masked_fill__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & mask, const at::Scalar & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MASKED_FILL__SCALAR, dispatchKeySet, self, mask, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self, mask);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::masked_fill_(dispatchKeySet, self, mask, value);
}

at::Tensor wrap_masked_fill_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mask, const at::Scalar & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mask);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::masked_fill(dispatchKeySet, self, mask, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MASKED_FILL_SCALAR, dispatchKeySet, self, mask, value);
}

at::Tensor & wrap_masked_fill__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & mask, const at::Tensor & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MASKED_FILL__TENSOR, dispatchKeySet, self, mask, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self, mask, value);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::masked_fill_(dispatchKeySet, self, mask, value);
}

at::Tensor wrap_masked_fill_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mask, const at::Tensor & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mask, value);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::masked_fill(dispatchKeySet, self, mask, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MASKED_FILL_TENSOR, dispatchKeySet, self, mask, value);
}

at::Tensor & wrap_masked_scatter_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & mask, const at::Tensor & source) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MASKED_SCATTER_, dispatchKeySet, self, mask, source);
    return self;
  }
  will_override(self);
  ensure_materialized(self, mask, source);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::masked_scatter_(dispatchKeySet, self, mask, source);
}

at::Tensor wrap_masked_scatter(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mask, const at::Tensor & source) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mask, source);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::masked_scatter(dispatchKeySet, self, mask, source);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MASKED_SCATTER, dispatchKeySet, self, mask, source);
}

at::Tensor wrap_view(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::view(dispatchKeySet, self, size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_VIEW, dispatchKeySet, self, size);
}

at::Tensor wrap_view_dtype(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::ScalarType dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::view(dispatchKeySet, self, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_VIEW_DTYPE, dispatchKeySet, self, dtype);
}

at::Tensor & wrap_put_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & index, const at::Tensor & source, bool accumulate) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_PUT_, dispatchKeySet, self, index, source, accumulate);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, source);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::put_(dispatchKeySet, self, index, source, accumulate);
}

at::Tensor wrap_put(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & index, const at::Tensor & source, bool accumulate) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, source);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::put(dispatchKeySet, self, index, source, accumulate);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_PUT, dispatchKeySet, self, index, source, accumulate);
}

at::Tensor & wrap_index_add_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_ADD_, dispatchKeySet, self, dim, index, source);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, source);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_add_(dispatchKeySet, self, dim, index, source);
}

at::Tensor & wrap_index_add__alpha(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_ADD__ALPHA, dispatchKeySet, self, dim, index, source, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, source);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_add_(dispatchKeySet, self, dim, index, source, alpha);
}

at::Tensor wrap_index_add(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, source);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_add(dispatchKeySet, self, dim, index, source);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_ADD, dispatchKeySet, self, dim, index, source);
}

at::Tensor wrap_index_add_alpha(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, source);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_add(dispatchKeySet, self, dim, index, source, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_ADD_ALPHA, dispatchKeySet, self, dim, index, source, alpha);
}

at::Tensor wrap_index_add_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & source, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, source);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_add(dispatchKeySet, self, dim, index, source, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_ADD_DIMNAME, dispatchKeySet, self, dim, index, source, alpha);
}

at::Tensor & wrap_index_fill__int_Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Scalar & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_FILL__INT_SCALAR, dispatchKeySet, self, dim, index, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_fill_(dispatchKeySet, self, dim, index, value);
}

at::Tensor wrap_index_fill_int_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Scalar & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_fill(dispatchKeySet, self, dim, index, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_FILL_INT_SCALAR, dispatchKeySet, self, dim, index, value);
}

at::Tensor & wrap_index_fill__int_Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_FILL__INT_TENSOR, dispatchKeySet, self, dim, index, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, value);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_fill_(dispatchKeySet, self, dim, index, value);
}

at::Tensor wrap_index_fill_int_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, value);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_fill(dispatchKeySet, self, dim, index, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_FILL_INT_TENSOR, dispatchKeySet, self, dim, index, value);
}

at::Tensor & wrap_index_fill__Dimname_Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Scalar & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_FILL__DIMNAME_SCALAR, dispatchKeySet, self, dim, index, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_fill_(dispatchKeySet, self, dim, index, value);
}

at::Tensor & wrap_index_fill__Dimname_Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_FILL__DIMNAME_TENSOR, dispatchKeySet, self, dim, index, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, value);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_fill_(dispatchKeySet, self, dim, index, value);
}

at::Tensor wrap_index_fill_Dimname_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Scalar & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_fill(dispatchKeySet, self, dim, index, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_FILL_DIMNAME_SCALAR, dispatchKeySet, self, dim, index, value);
}

at::Tensor wrap_index_fill_Dimname_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, value);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_fill(dispatchKeySet, self, dim, index, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_FILL_DIMNAME_TENSOR, dispatchKeySet, self, dim, index, value);
}

at::Tensor & wrap_scatter__src(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & src) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SCATTER__SRC, dispatchKeySet, self, dim, index, src);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, src);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::scatter_(dispatchKeySet, self, dim, index, src);
}

at::Tensor wrap_scatter_src(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & src) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, src);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::scatter(dispatchKeySet, self, dim, index, src);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SCATTER_SRC, dispatchKeySet, self, dim, index, src);
}

at::Tensor & wrap_scatter__value(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Scalar & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SCATTER__VALUE, dispatchKeySet, self, dim, index, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::scatter_(dispatchKeySet, self, dim, index, value);
}

at::Tensor wrap_scatter_value(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Scalar & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::scatter(dispatchKeySet, self, dim, index, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SCATTER_VALUE, dispatchKeySet, self, dim, index, value);
}

at::Tensor wrap_scatter_dimname_src(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & src) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, src);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::scatter(dispatchKeySet, self, dim, index, src);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SCATTER_DIMNAME_SRC, dispatchKeySet, self, dim, index, src);
}

at::Tensor wrap_scatter_dimname_value(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Scalar & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::scatter(dispatchKeySet, self, dim, index, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SCATTER_DIMNAME_VALUE, dispatchKeySet, self, dim, index, value);
}

at::Tensor & wrap_scatter__reduce(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & src, std::string reduce) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SCATTER__REDUCE, dispatchKeySet, self, dim, index, src, reduce);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, src);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::scatter_(dispatchKeySet, self, dim, index, src, reduce);
}

at::Tensor & wrap_scatter__value_reduce(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Scalar & value, std::string reduce) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SCATTER__VALUE_REDUCE, dispatchKeySet, self, dim, index, value, reduce);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::scatter_(dispatchKeySet, self, dim, index, value, reduce);
}

at::Tensor & wrap_scatter_add_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & src) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SCATTER_ADD_, dispatchKeySet, self, dim, index, src);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, src);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::scatter_add_(dispatchKeySet, self, dim, index, src);
}

at::Tensor wrap_scatter_add(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & src) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, src);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::scatter_add(dispatchKeySet, self, dim, index, src);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SCATTER_ADD, dispatchKeySet, self, dim, index, src);
}

at::Tensor wrap_scatter_add_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & src) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, src);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::scatter_add(dispatchKeySet, self, dim, index, src);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SCATTER_ADD_DIMNAME, dispatchKeySet, self, dim, index, src);
}

at::Tensor & wrap_eq__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EQ__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::eq_(dispatchKeySet, self, other);
}

at::Tensor & wrap_eq__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EQ__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::eq_(dispatchKeySet, self, other);
}

at::Tensor & wrap_bitwise_and_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_AND_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_and_outf(dispatchKeySet, self, other, out);
}

at::Tensor & wrap_bitwise_and_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_AND_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_and_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_bitwise_and_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bitwise_and(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BITWISE_AND_SCALAR, dispatchKeySet, self, other);
}

at::Tensor wrap_bitwise_and_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bitwise_and(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BITWISE_AND_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_bitwise_and__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_AND__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_and_(dispatchKeySet, self, other);
}

at::Tensor & wrap_bitwise_and__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_AND__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_and_(dispatchKeySet, self, other);
}

at::Tensor wrap___and___Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::__and__(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H___AND___SCALAR, dispatchKeySet, self, other);
}

at::Tensor wrap___and___Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::__and__(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H___AND___TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap___iand___Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H___IAND___SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::__iand__(dispatchKeySet, self, other);
}

at::Tensor & wrap___iand___Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H___IAND___TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::__iand__(dispatchKeySet, self, other);
}

at::Tensor & wrap_bitwise_or_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_OR_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_or_outf(dispatchKeySet, self, other, out);
}

at::Tensor & wrap_bitwise_or_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_OR_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_or_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_bitwise_or_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bitwise_or(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BITWISE_OR_SCALAR, dispatchKeySet, self, other);
}

at::Tensor wrap_bitwise_or_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bitwise_or(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BITWISE_OR_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_bitwise_or__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_OR__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_or_(dispatchKeySet, self, other);
}

at::Tensor & wrap_bitwise_or__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_OR__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_or_(dispatchKeySet, self, other);
}

at::Tensor wrap___or___Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::__or__(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H___OR___SCALAR, dispatchKeySet, self, other);
}

at::Tensor wrap___or___Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::__or__(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H___OR___TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap___ior___Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H___IOR___SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::__ior__(dispatchKeySet, self, other);
}

at::Tensor & wrap___ior___Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H___IOR___TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::__ior__(dispatchKeySet, self, other);
}

at::Tensor & wrap_bitwise_xor_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_XOR_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_xor_outf(dispatchKeySet, self, other, out);
}

at::Tensor & wrap_bitwise_xor_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_XOR_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_xor_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_bitwise_xor_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bitwise_xor(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BITWISE_XOR_SCALAR, dispatchKeySet, self, other);
}

at::Tensor wrap_bitwise_xor_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bitwise_xor(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BITWISE_XOR_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_bitwise_xor__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_XOR__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_xor_(dispatchKeySet, self, other);
}

at::Tensor & wrap_bitwise_xor__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BITWISE_XOR__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bitwise_xor_(dispatchKeySet, self, other);
}

at::Tensor wrap___xor___Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::__xor__(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H___XOR___SCALAR, dispatchKeySet, self, other);
}

at::Tensor wrap___xor___Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::__xor__(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H___XOR___TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap___ixor___Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H___IXOR___SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::__ixor__(dispatchKeySet, self, other);
}

at::Tensor & wrap___ixor___Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H___IXOR___TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::__ixor__(dispatchKeySet, self, other);
}

at::Tensor wrap___lshift___Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::__lshift__(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H___LSHIFT___SCALAR, dispatchKeySet, self, other);
}

at::Tensor wrap___lshift___Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::__lshift__(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H___LSHIFT___TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap___ilshift___Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H___ILSHIFT___SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::__ilshift__(dispatchKeySet, self, other);
}

at::Tensor & wrap___ilshift___Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H___ILSHIFT___TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::__ilshift__(dispatchKeySet, self, other);
}

at::Tensor wrap___rshift___Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::__rshift__(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H___RSHIFT___SCALAR, dispatchKeySet, self, other);
}

at::Tensor wrap___rshift___Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::__rshift__(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H___RSHIFT___TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap___irshift___Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H___IRSHIFT___SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::__irshift__(dispatchKeySet, self, other);
}

at::Tensor & wrap___irshift___Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H___IRSHIFT___TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::__irshift__(dispatchKeySet, self, other);
}

at::Tensor & wrap_tril_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t diagonal) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TRIL_, dispatchKeySet, self, diagonal);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::tril_(dispatchKeySet, self, diagonal);
}

at::Tensor & wrap_triu_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t diagonal) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TRIU_, dispatchKeySet, self, diagonal);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::triu_(dispatchKeySet, self, diagonal);
}

at::Tensor & wrap_renorm_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & p, int64_t dim, const at::Scalar & maxnorm) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RENORM_, dispatchKeySet, self, p, dim, maxnorm);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::renorm_(dispatchKeySet, self, p, dim, maxnorm);
}

at::Tensor & wrap_lerp__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & end, const at::Scalar & weight) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LERP__SCALAR, dispatchKeySet, self, end, weight);
    return self;
  }
  will_override(self);
  ensure_materialized(self, end);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lerp_(dispatchKeySet, self, end, weight);
}

at::Tensor & wrap_lerp__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & end, const at::Tensor & weight) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LERP__TENSOR, dispatchKeySet, self, end, weight);
    return self;
  }
  will_override(self);
  ensure_materialized(self, end, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lerp_(dispatchKeySet, self, end, weight);
}

at::Tensor & wrap_fmod__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FMOD__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fmod_(dispatchKeySet, self, other);
}

at::Tensor & wrap_fmod__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FMOD__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fmod_(dispatchKeySet, self, other);
}

at::Tensor & wrap_remainder__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REMAINDER__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::remainder_(dispatchKeySet, self, other);
}

at::Tensor & wrap_remainder__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REMAINDER__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::remainder_(dispatchKeySet, self, other);
}

at::Tensor & wrap_addbmm_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & batch1, const at::Tensor & batch2, const at::Scalar & beta, const at::Scalar & alpha) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDBMM_, dispatchKeySet, self, batch1, batch2, beta, alpha);
    return self;
  }
  will_override(self);
  ensure_materialized(self, batch1, batch2);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addbmm_(dispatchKeySet, self, batch1, batch2, beta, alpha);
}

at::Tensor & wrap_addbmm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & batch1, const at::Tensor & batch2, const at::Scalar & beta, const at::Scalar & alpha, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDBMM_OUT, dispatchKeySet, self, batch1, batch2, beta, alpha, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, batch1, batch2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addbmm_outf(dispatchKeySet, self, batch1, batch2, beta, alpha, out);
}

at::Tensor wrap_addbmm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & batch1, const at::Tensor & batch2, const at::Scalar & beta, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, batch1, batch2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::addbmm(dispatchKeySet, self, batch1, batch2, beta, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ADDBMM, dispatchKeySet, self, batch1, batch2, beta, alpha);
}

at::Tensor & wrap_addcdiv_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & tensor1, const at::Tensor & tensor2, const at::Scalar & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDCDIV_, dispatchKeySet, self, tensor1, tensor2, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self, tensor1, tensor2);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addcdiv_(dispatchKeySet, self, tensor1, tensor2, value);
}

at::Tensor & wrap_random__from(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t from, c10::optional<int64_t> to, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDOM__FROM, dispatchKeySet, self, from, to, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::random_(dispatchKeySet, self, from, to, generator);
}

at::Tensor & wrap_random__to(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t to, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDOM__TO, dispatchKeySet, self, to, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::random_(dispatchKeySet, self, to, generator);
}

at::Tensor & wrap_random_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RANDOM_, dispatchKeySet, self, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::random_(dispatchKeySet, self, generator);
}

at::Tensor & wrap_uniform_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double from, double to, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UNIFORM_, dispatchKeySet, self, from, to, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::uniform_(dispatchKeySet, self, from, to, generator);
}

at::Tensor & wrap_cauchy_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double median, double sigma, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CAUCHY_, dispatchKeySet, self, median, sigma, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cauchy_(dispatchKeySet, self, median, sigma, generator);
}

at::Tensor & wrap_log_normal_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double mean, double std, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOG_NORMAL_, dispatchKeySet, self, mean, std, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::log_normal_(dispatchKeySet, self, mean, std, generator);
}

at::Tensor & wrap_exponential_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double lambd, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EXPONENTIAL_, dispatchKeySet, self, lambd, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::exponential_(dispatchKeySet, self, lambd, generator);
}

at::Tensor & wrap_geometric_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double p, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GEOMETRIC_, dispatchKeySet, self, p, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::geometric_(dispatchKeySet, self, p, generator);
}

at::Tensor & wrap_diag_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t diagonal, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIAG_OUT, dispatchKeySet, self, diagonal, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::diag_outf(dispatchKeySet, self, diagonal, out);
}

at::Tensor wrap_diag(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t diagonal) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::diag(dispatchKeySet, self, diagonal);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIAG, dispatchKeySet, self, diagonal);
}

at::Tensor wrap_diag_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, at::IntArrayRef input_sizes, int64_t diagonal) {
  if (trace.is_flushing()) {
    ensure_materialized(grad);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::diag_backward(dispatchKeySet, grad, input_sizes, diagonal);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_DIAG_BACKWARD, dispatchKeySet, grad, input_sizes, diagonal);
}

at::Tensor & wrap_cross_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, c10::optional<int64_t> dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CROSS_OUT, dispatchKeySet, self, other, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cross_outf(dispatchKeySet, self, other, dim, out);
}

at::Tensor wrap_cross(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, c10::optional<int64_t> dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cross(dispatchKeySet, self, other, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CROSS, dispatchKeySet, self, other, dim);
}

at::Tensor & wrap_triu_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t diagonal, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TRIU_OUT, dispatchKeySet, self, diagonal, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::triu_outf(dispatchKeySet, self, diagonal, out);
}

at::Tensor wrap_triu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t diagonal) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::triu(dispatchKeySet, self, diagonal);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TRIU, dispatchKeySet, self, diagonal);
}

at::Tensor & wrap_tril_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t diagonal, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TRIL_OUT, dispatchKeySet, self, diagonal, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::tril_outf(dispatchKeySet, self, diagonal, out);
}

at::Tensor wrap_tril(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t diagonal) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::tril(dispatchKeySet, self, diagonal);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TRIL, dispatchKeySet, self, diagonal);
}

at::Tensor wrap_tril_indices(c10::DispatchKeySet dispatchKeySet, int64_t row, int64_t col, int64_t offset, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::tril_indices(dispatchKeySet, row, col, offset, dtype, layout, device, pin_memory));
}

at::Tensor wrap_triu_indices(c10::DispatchKeySet dispatchKeySet, int64_t row, int64_t col, int64_t offset, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::triu_indices(dispatchKeySet, row, col, offset, dtype, layout, device, pin_memory));
}

at::Tensor wrap_trace(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::trace(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TRACE, dispatchKeySet, self);
}

at::Tensor wrap_trace_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, at::IntArrayRef sizes) {
  if (trace.is_flushing()) {
    ensure_materialized(grad);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::trace_backward(dispatchKeySet, grad, sizes);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_TRACE_BACKWARD, dispatchKeySet, grad, sizes);
}

at::Tensor & wrap_ne_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NE_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ne_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_ne_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ne(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NE_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_ne_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NE_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ne_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_ne_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ne(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NE_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_ne__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NE__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ne_(dispatchKeySet, self, other);
}

at::Tensor & wrap_ne__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NE__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ne_(dispatchKeySet, self, other);
}

at::Tensor & wrap_not_equal_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NOT_EQUAL_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::not_equal_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_not_equal_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::not_equal(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NOT_EQUAL_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_not_equal_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NOT_EQUAL_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::not_equal_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_not_equal_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::not_equal(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NOT_EQUAL_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_not_equal__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NOT_EQUAL__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::not_equal_(dispatchKeySet, self, other);
}

at::Tensor & wrap_not_equal__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NOT_EQUAL__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::not_equal_(dispatchKeySet, self, other);
}

at::Tensor & wrap_eq_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EQ_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::eq_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_eq_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::eq(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_EQ_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_eq_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_EQ_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::eq_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_eq_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::eq(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_EQ_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_ge_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GE_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ge_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_ge_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ge(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GE_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_ge_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GE_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ge_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_ge_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ge(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GE_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_ge__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GE__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ge_(dispatchKeySet, self, other);
}

at::Tensor & wrap_ge__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GE__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ge_(dispatchKeySet, self, other);
}

at::Tensor & wrap_greater_equal_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GREATER_EQUAL_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::greater_equal_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_greater_equal_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::greater_equal(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GREATER_EQUAL_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_greater_equal_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GREATER_EQUAL_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::greater_equal_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_greater_equal_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::greater_equal(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GREATER_EQUAL_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_greater_equal__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GREATER_EQUAL__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::greater_equal_(dispatchKeySet, self, other);
}

at::Tensor & wrap_greater_equal__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GREATER_EQUAL__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::greater_equal_(dispatchKeySet, self, other);
}

at::Tensor & wrap_le_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LE_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::le_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_le_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::le(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LE_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_le_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LE_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::le_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_le_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::le(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LE_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_le__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LE__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::le_(dispatchKeySet, self, other);
}

at::Tensor & wrap_le__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LE__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::le_(dispatchKeySet, self, other);
}

at::Tensor & wrap_less_equal_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LESS_EQUAL_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::less_equal_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_less_equal_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::less_equal(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LESS_EQUAL_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_less_equal_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LESS_EQUAL_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::less_equal_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_less_equal_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::less_equal(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LESS_EQUAL_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_less_equal__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LESS_EQUAL__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::less_equal_(dispatchKeySet, self, other);
}

at::Tensor & wrap_less_equal__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LESS_EQUAL__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::less_equal_(dispatchKeySet, self, other);
}

at::Tensor & wrap_gt_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GT_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::gt_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_gt_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::gt(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GT_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_gt_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GT_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::gt_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_gt_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::gt(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GT_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_gt__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GT__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::gt_(dispatchKeySet, self, other);
}

at::Tensor & wrap_gt__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GT__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::gt_(dispatchKeySet, self, other);
}

at::Tensor & wrap_greater_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GREATER_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::greater_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_greater_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::greater(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GREATER_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_greater_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GREATER_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::greater_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_greater_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::greater(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GREATER_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_greater__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GREATER__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::greater_(dispatchKeySet, self, other);
}

at::Tensor & wrap_greater__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GREATER__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::greater_(dispatchKeySet, self, other);
}

at::Tensor & wrap_lt_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LT_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lt_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_lt_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::lt(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LT_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_lt_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LT_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lt_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_lt_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::lt(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LT_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_lt__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LT__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lt_(dispatchKeySet, self, other);
}

at::Tensor & wrap_lt__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LT__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lt_(dispatchKeySet, self, other);
}

at::Tensor & wrap_less_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LESS_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::less_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_less_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::less(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LESS_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_less_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LESS_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::less_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_less_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::less(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LESS_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_less__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LESS__SCALAR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::less_(dispatchKeySet, self, other);
}

at::Tensor & wrap_less__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LESS__TENSOR, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::less_(dispatchKeySet, self, other);
}

at::Tensor & wrap_take_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & index, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TAKE_OUT, dispatchKeySet, self, index, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, index, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::take_outf(dispatchKeySet, self, index, out);
}

at::Tensor wrap_take(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & index) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::take(dispatchKeySet, self, index);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TAKE, dispatchKeySet, self, index);
}

at::Tensor & wrap_take_along_dim_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & indices, c10::optional<int64_t> dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TAKE_ALONG_DIM_OUT, dispatchKeySet, self, indices, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, indices, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::take_along_dim_outf(dispatchKeySet, self, indices, dim, out);
}

at::Tensor wrap_take_along_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & indices, c10::optional<int64_t> dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::take_along_dim(dispatchKeySet, self, indices, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_TAKE_ALONG_DIM, dispatchKeySet, self, indices, dim);
}

at::Tensor & wrap_index_select_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_SELECT_OUT, dispatchKeySet, self, dim, index, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, index, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_select_outf(dispatchKeySet, self, dim, index, out);
}

at::Tensor wrap_index_select(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_select(dispatchKeySet, self, dim, index);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_SELECT, dispatchKeySet, self, dim, index);
}

at::Tensor & wrap_index_select_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INDEX_SELECT_DIMNAME_OUT, dispatchKeySet, self, dim, index, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, index, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::index_select_outf(dispatchKeySet, self, dim, index, out);
}

at::Tensor wrap_index_select_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_select(dispatchKeySet, self, dim, index);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INDEX_SELECT_DIMNAME, dispatchKeySet, self, dim, index);
}

at::Tensor wrap_index_select_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, at::IntArrayRef self_sizes, int64_t dim, const at::Tensor & index) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::index_select_backward(dispatchKeySet, grad, self_sizes, dim, index);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_INDEX_SELECT_BACKWARD, dispatchKeySet, grad, self_sizes, dim, index);
}

at::Tensor & wrap_masked_select_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mask, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MASKED_SELECT_OUT, dispatchKeySet, self, mask, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, mask, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::masked_select_outf(dispatchKeySet, self, mask, out);
}

at::Tensor wrap_masked_select(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mask) {
  if (trace.is_flushing()) {
    ensure_materialized(self, mask);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::masked_select(dispatchKeySet, self, mask);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MASKED_SELECT, dispatchKeySet, self, mask);
}

at::Tensor wrap_masked_select_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & input, const at::Tensor & mask) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, input, mask);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::masked_select_backward(dispatchKeySet, grad, input, mask);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_MASKED_SELECT_BACKWARD, dispatchKeySet, grad, input, mask);
}

at::Tensor & wrap_nonzero_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NONZERO_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nonzero_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_nonzero(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nonzero(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NONZERO, dispatchKeySet, self);
}

std::vector<at::Tensor> wrap_nonzero_numpy(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nonzero_numpy(dispatchKeySet, self);
}

at::Tensor & wrap_gather_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, bool sparse_grad, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GATHER_OUT, dispatchKeySet, self, dim, index, sparse_grad, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, index, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::gather_outf(dispatchKeySet, self, dim, index, sparse_grad, out);
}

at::Tensor wrap_gather(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, bool sparse_grad) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::gather(dispatchKeySet, self, dim, index, sparse_grad);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GATHER, dispatchKeySet, self, dim, index, sparse_grad);
}

at::Tensor wrap_gather_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & self, int64_t dim, const at::Tensor & index, bool sparse_grad) {
  if (trace.is_flushing()) {
    ensure_materialized(grad, self, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::gather_backward(dispatchKeySet, grad, self, dim, index, sparse_grad);
  }
  return at::detail::make_tensor<TorchyTensor>(grad.dtype(), grad.device(), H_GATHER_BACKWARD, dispatchKeySet, grad, self, dim, index, sparse_grad);
}

at::Tensor & wrap_gather_dimname_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, bool sparse_grad, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GATHER_DIMNAME_OUT, dispatchKeySet, self, dim, index, sparse_grad, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, index, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::gather_outf(dispatchKeySet, self, dim, index, sparse_grad, out);
}

at::Tensor wrap_gather_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, bool sparse_grad) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::gather(dispatchKeySet, self, dim, index, sparse_grad);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GATHER_DIMNAME, dispatchKeySet, self, dim, index, sparse_grad);
}

at::Tensor wrap__gather_sparse_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & grad) {
  if (trace.is_flushing()) {
    ensure_materialized(self, index, grad);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_gather_sparse_backward(dispatchKeySet, self, dim, index, grad);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__GATHER_SPARSE_BACKWARD, dispatchKeySet, self, dim, index, grad);
}

at::Tensor & wrap_addcmul_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & tensor1, const at::Tensor & tensor2, const at::Scalar & value, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDCMUL_OUT, dispatchKeySet, self, tensor1, tensor2, value, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, tensor1, tensor2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addcmul_outf(dispatchKeySet, self, tensor1, tensor2, value, out);
}

at::Tensor wrap_addcmul(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & tensor1, const at::Tensor & tensor2, const at::Scalar & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self, tensor1, tensor2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::addcmul(dispatchKeySet, self, tensor1, tensor2, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ADDCMUL, dispatchKeySet, self, tensor1, tensor2, value);
}

at::Tensor & wrap_addcmul_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & tensor1, const at::Tensor & tensor2, const at::Scalar & value) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDCMUL_, dispatchKeySet, self, tensor1, tensor2, value);
    return self;
  }
  will_override(self);
  ensure_materialized(self, tensor1, tensor2);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addcmul_(dispatchKeySet, self, tensor1, tensor2, value);
}

at::Tensor & wrap_addcdiv_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & tensor1, const at::Tensor & tensor2, const at::Scalar & value, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADDCDIV_OUT, dispatchKeySet, self, tensor1, tensor2, value, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, tensor1, tensor2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::addcdiv_outf(dispatchKeySet, self, tensor1, tensor2, value, out);
}

at::Tensor wrap_addcdiv(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & tensor1, const at::Tensor & tensor2, const at::Scalar & value) {
  if (trace.is_flushing()) {
    ensure_materialized(self, tensor1, tensor2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::addcdiv(dispatchKeySet, self, tensor1, tensor2, value);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ADDCDIV, dispatchKeySet, self, tensor1, tensor2, value);
}

at::Tensor wrap_cross_entropy_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cross_entropy_loss(dispatchKeySet, self, target, weight, reduction, ignore_index);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CROSS_ENTROPY_LOSS, dispatchKeySet, self, target, weight, reduction, ignore_index);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_lstsq_X(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & A, at::Tensor & X, at::Tensor & qr) {
  ensure_materialized(self, A, X, qr);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lstsq_outf(dispatchKeySet, self, A, X, qr);
}

std::tuple<at::Tensor,at::Tensor> wrap_lstsq(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & A) {
  ensure_materialized(self, A);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lstsq(dispatchKeySet, self, A);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_triangular_solve_X(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & A, bool upper, bool transpose, bool unitriangular, at::Tensor & X, at::Tensor & M) {
  ensure_materialized(self, A, X, M);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::triangular_solve_outf(dispatchKeySet, self, A, upper, transpose, unitriangular, X, M);
}

std::tuple<at::Tensor,at::Tensor> wrap_triangular_solve(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & A, bool upper, bool transpose, bool unitriangular) {
  ensure_materialized(self, A);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::triangular_solve(dispatchKeySet, self, A, upper, transpose, unitriangular);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_symeig_e(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool eigenvectors, bool upper, at::Tensor & e, at::Tensor & V) {
  ensure_materialized(self, e, V);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::symeig_outf(dispatchKeySet, self, eigenvectors, upper, e, V);
}

std::tuple<at::Tensor,at::Tensor> wrap_symeig(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool eigenvectors, bool upper) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::symeig(dispatchKeySet, self, eigenvectors, upper);
}

std::tuple<at::Tensor,at::Tensor> wrap__symeig_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool eigenvectors, bool upper) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_symeig_helper(dispatchKeySet, self, eigenvectors, upper);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_eig_e(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool eigenvectors, at::Tensor & e, at::Tensor & v) {
  ensure_materialized(self, e, v);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::eig_outf(dispatchKeySet, self, eigenvectors, e, v);
}

std::tuple<at::Tensor,at::Tensor> wrap_eig(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool eigenvectors) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::eig(dispatchKeySet, self, eigenvectors);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> wrap_svd_U(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool some, bool compute_uv, at::Tensor & U, at::Tensor & S, at::Tensor & V) {
  ensure_materialized(self, U, S, V);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::svd_outf(dispatchKeySet, self, some, compute_uv, U, S, V);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_svd(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool some, bool compute_uv) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::svd(dispatchKeySet, self, some, compute_uv);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap__svd_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool some, bool compute_uv) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_svd_helper(dispatchKeySet, self, some, compute_uv);
}

at::Tensor wrap_swapaxes(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t axis0, int64_t axis1) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::swapaxes(dispatchKeySet, self, axis0, axis1);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SWAPAXES, dispatchKeySet, self, axis0, axis1);
}

at::Tensor & wrap_swapaxes_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t axis0, int64_t axis1) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SWAPAXES_, dispatchKeySet, self, axis0, axis1);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::swapaxes_(dispatchKeySet, self, axis0, axis1);
}

at::Tensor wrap_swapdims(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim0, int64_t dim1) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::swapdims(dispatchKeySet, self, dim0, dim1);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SWAPDIMS, dispatchKeySet, self, dim0, dim1);
}

at::Tensor & wrap_swapdims_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim0, int64_t dim1) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SWAPDIMS_, dispatchKeySet, self, dim0, dim1);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::swapdims_(dispatchKeySet, self, dim0, dim1);
}

at::Tensor & wrap_cholesky_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool upper, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CHOLESKY_OUT, dispatchKeySet, self, upper, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cholesky_outf(dispatchKeySet, self, upper, out);
}

at::Tensor wrap_cholesky(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool upper) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cholesky(dispatchKeySet, self, upper);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CHOLESKY, dispatchKeySet, self, upper);
}

at::Tensor wrap__cholesky_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool upper) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cholesky_helper(dispatchKeySet, self, upper);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CHOLESKY_HELPER, dispatchKeySet, self, upper);
}

at::Tensor & wrap_cholesky_solve_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & input2, bool upper, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CHOLESKY_SOLVE_OUT, dispatchKeySet, self, input2, upper, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, input2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cholesky_solve_outf(dispatchKeySet, self, input2, upper, out);
}

at::Tensor wrap_cholesky_solve(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & input2, bool upper) {
  if (trace.is_flushing()) {
    ensure_materialized(self, input2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cholesky_solve(dispatchKeySet, self, input2, upper);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CHOLESKY_SOLVE, dispatchKeySet, self, input2, upper);
}

at::Tensor wrap__cholesky_solve_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & A, bool upper) {
  if (trace.is_flushing()) {
    ensure_materialized(self, A);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cholesky_solve_helper(dispatchKeySet, self, A, upper);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CHOLESKY_SOLVE_HELPER, dispatchKeySet, self, A, upper);
}

std::tuple<at::Tensor,at::Tensor> wrap_solve(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & A) {
  ensure_materialized(self, A);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::solve(dispatchKeySet, self, A);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_solve_solution(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & A, at::Tensor & solution, at::Tensor & lu) {
  ensure_materialized(self, A, solution, lu);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::solve_outf(dispatchKeySet, self, A, solution, lu);
}

std::tuple<at::Tensor,at::Tensor> wrap__solve_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & A) {
  ensure_materialized(self, A);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_solve_helper(dispatchKeySet, self, A);
}

at::Tensor wrap_cholesky_inverse(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool upper) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::cholesky_inverse(dispatchKeySet, self, upper);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CHOLESKY_INVERSE, dispatchKeySet, self, upper);
}

at::Tensor & wrap_cholesky_inverse_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool upper, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_CHOLESKY_INVERSE_OUT, dispatchKeySet, self, upper, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::cholesky_inverse_outf(dispatchKeySet, self, upper, out);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_qr_Q(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool some, at::Tensor & Q, at::Tensor & R) {
  ensure_materialized(self, Q, R);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::qr_outf(dispatchKeySet, self, some, Q, R);
}

std::tuple<at::Tensor,at::Tensor> wrap_qr(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool some) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::qr(dispatchKeySet, self, some);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_geqrf_a(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & a, at::Tensor & tau) {
  ensure_materialized(self, a, tau);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::geqrf_outf(dispatchKeySet, self, a, tau);
}

std::tuple<at::Tensor,at::Tensor> wrap_geqrf(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::geqrf(dispatchKeySet, self);
}

at::Tensor wrap_orgqr(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & input2) {
  if (trace.is_flushing()) {
    ensure_materialized(self, input2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::orgqr(dispatchKeySet, self, input2);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ORGQR, dispatchKeySet, self, input2);
}

at::Tensor & wrap_orgqr_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & input2, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ORGQR_OUT, dispatchKeySet, self, input2, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, input2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::orgqr_outf(dispatchKeySet, self, input2, out);
}

at::Tensor & wrap_ormqr_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & input2, const at::Tensor & input3, bool left, bool transpose, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ORMQR_OUT, dispatchKeySet, self, input2, input3, left, transpose, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, input2, input3, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ormqr_outf(dispatchKeySet, self, input2, input3, left, transpose, out);
}

at::Tensor wrap_ormqr(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & input2, const at::Tensor & input3, bool left, bool transpose) {
  if (trace.is_flushing()) {
    ensure_materialized(self, input2, input3);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ormqr(dispatchKeySet, self, input2, input3, left, transpose);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ORMQR, dispatchKeySet, self, input2, input3, left, transpose);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap__lu_with_info(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool pivot, bool check_errors) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_lu_with_info(dispatchKeySet, self, pivot, check_errors);
}

at::Tensor & wrap_lu_solve_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & LU_data, const at::Tensor & LU_pivots, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LU_SOLVE_OUT, dispatchKeySet, self, LU_data, LU_pivots, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, LU_data, LU_pivots, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lu_solve_outf(dispatchKeySet, self, LU_data, LU_pivots, out);
}

at::Tensor wrap_lu_solve(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & LU_data, const at::Tensor & LU_pivots) {
  if (trace.is_flushing()) {
    ensure_materialized(self, LU_data, LU_pivots);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::lu_solve(dispatchKeySet, self, LU_data, LU_pivots);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LU_SOLVE, dispatchKeySet, self, LU_data, LU_pivots);
}

at::Tensor wrap__lu_solve_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & LU_data, const at::Tensor & LU_pivots) {
  if (trace.is_flushing()) {
    ensure_materialized(self, LU_data, LU_pivots);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_lu_solve_helper(dispatchKeySet, self, LU_data, LU_pivots);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__LU_SOLVE_HELPER, dispatchKeySet, self, LU_data, LU_pivots);
}

at::Tensor & wrap_multinomial_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t num_samples, bool replacement, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MULTINOMIAL_OUT, dispatchKeySet, self, num_samples, replacement, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::multinomial_outf(dispatchKeySet, self, num_samples, replacement, generator, out);
}

at::Tensor wrap_multinomial(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t num_samples, bool replacement, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::multinomial(dispatchKeySet, self, num_samples, replacement, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MULTINOMIAL, dispatchKeySet, self, num_samples, replacement, generator);
}

at::Tensor & wrap_lgamma_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LGAMMA_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lgamma_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_digamma_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_DIGAMMA_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::digamma_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_polygamma_out(c10::DispatchKeySet dispatchKeySet, int64_t n, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_POLYGAMMA_OUT, dispatchKeySet, n, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::polygamma_outf(dispatchKeySet, n, self, out);
}

at::Tensor wrap_polygamma(c10::DispatchKeySet dispatchKeySet, int64_t n, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::polygamma(dispatchKeySet, n, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_POLYGAMMA, dispatchKeySet, n, self);
}

at::Tensor & wrap_polygamma_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t n) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_POLYGAMMA_, dispatchKeySet, self, n);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::polygamma_(dispatchKeySet, self, n);
}

at::Tensor & wrap_erfinv_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ERFINV_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::erfinv_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_i0(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::i0(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_I0, dispatchKeySet, self);
}

at::Tensor & wrap_i0_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_I0_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::i0_(dispatchKeySet, self);
}

at::Tensor & wrap_i0_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_I0_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::i0_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_sign(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sign(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SIGN, dispatchKeySet, self);
}

at::Tensor & wrap_sign_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SIGN_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sign_(dispatchKeySet, self);
}

at::Tensor & wrap_sign_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SIGN_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sign_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_signbit(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::signbit(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SIGNBIT, dispatchKeySet, self);
}

at::Tensor & wrap_signbit_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SIGNBIT_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::signbit_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_dist(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & p) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::dist(dispatchKeySet, self, other, p);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DIST, dispatchKeySet, self, other, p);
}

at::Tensor & wrap_atan2_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ATAN2_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::atan2_outf(dispatchKeySet, self, other, out);
}

at::Tensor & wrap_lerp_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & end, const at::Scalar & weight, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LERP_SCALAR_OUT, dispatchKeySet, self, end, weight, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, end, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lerp_outf(dispatchKeySet, self, end, weight, out);
}

at::Tensor & wrap_lerp_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & end, const at::Tensor & weight, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LERP_TENSOR_OUT, dispatchKeySet, self, end, weight, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, end, weight, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::lerp_outf(dispatchKeySet, self, end, weight, out);
}

at::Tensor wrap_lerp_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & end, const at::Scalar & weight) {
  if (trace.is_flushing()) {
    ensure_materialized(self, end);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::lerp(dispatchKeySet, self, end, weight);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LERP_SCALAR, dispatchKeySet, self, end, weight);
}

at::Tensor wrap_lerp_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & end, const at::Tensor & weight) {
  if (trace.is_flushing()) {
    ensure_materialized(self, end, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::lerp(dispatchKeySet, self, end, weight);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LERP_TENSOR, dispatchKeySet, self, end, weight);
}

at::Tensor & wrap_histc_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t bins, const at::Scalar & min, const at::Scalar & max, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HISTC_OUT, dispatchKeySet, self, bins, min, max, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::histc_outf(dispatchKeySet, self, bins, min, max, out);
}

at::Tensor wrap_histc(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t bins, const at::Scalar & min, const at::Scalar & max) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::histc(dispatchKeySet, self, bins, min, max);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_HISTC, dispatchKeySet, self, bins, min, max);
}

at::Tensor & wrap_fmod_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FMOD_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fmod_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_fmod_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fmod(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FMOD_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_fmod_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FMOD_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fmod_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_fmod_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fmod(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FMOD_TENSOR, dispatchKeySet, self, other);
}

at::Tensor & wrap_hypot_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HYPOT_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hypot_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_hypot(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hypot(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_HYPOT, dispatchKeySet, self, other);
}

at::Tensor & wrap_hypot_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HYPOT_, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hypot_(dispatchKeySet, self, other);
}

at::Tensor & wrap_igamma_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_IGAMMA_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::igamma_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_igamma(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::igamma(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_IGAMMA, dispatchKeySet, self, other);
}

at::Tensor & wrap_igamma_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_IGAMMA_, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::igamma_(dispatchKeySet, self, other);
}

at::Tensor & wrap_igammac_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_IGAMMAC_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::igammac_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_igammac(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::igammac(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_IGAMMAC, dispatchKeySet, self, other);
}

at::Tensor & wrap_igammac_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_IGAMMAC_, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::igammac_(dispatchKeySet, self, other);
}

at::Tensor & wrap_nextafter_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NEXTAFTER_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nextafter_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_nextafter(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nextafter(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NEXTAFTER, dispatchKeySet, self, other);
}

at::Tensor & wrap_nextafter_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & other) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NEXTAFTER_, dispatchKeySet, self, other);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nextafter_(dispatchKeySet, self, other);
}

at::Tensor & wrap_remainder_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REMAINDER_SCALAR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::remainder_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_remainder_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::remainder(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_REMAINDER_SCALAR, dispatchKeySet, self, other);
}

at::Tensor & wrap_remainder_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REMAINDER_TENSOR_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::remainder_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_remainder_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::remainder(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_REMAINDER_TENSOR, dispatchKeySet, self, other);
}

at::Tensor wrap_min(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::min(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MIN, dispatchKeySet, self);
}

at::Tensor wrap_fmin(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fmin(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FMIN, dispatchKeySet, self, other);
}

at::Tensor & wrap_fmin_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FMIN_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fmin_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_max(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MAX, dispatchKeySet, self);
}

at::Tensor wrap_fmax(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fmax(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FMAX, dispatchKeySet, self, other);
}

at::Tensor & wrap_fmax_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FMAX_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fmax_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_maximum(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::maximum(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MAXIMUM, dispatchKeySet, self, other);
}

at::Tensor & wrap_maximum_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MAXIMUM_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::maximum_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_max_other(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MAX_OTHER, dispatchKeySet, self, other);
}

at::Tensor & wrap_max_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MAX_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_minimum(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::minimum(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MINIMUM, dispatchKeySet, self, other);
}

at::Tensor & wrap_minimum_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MINIMUM_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::minimum_outf(dispatchKeySet, self, other, out);
}

at::Tensor & wrap_min_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MIN_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::min_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_min_other(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::min(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MIN_OTHER, dispatchKeySet, self, other);
}

at::Tensor & wrap_quantile_scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double q, c10::optional<int64_t> dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_QUANTILE_SCALAR_OUT, dispatchKeySet, self, q, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::quantile_outf(dispatchKeySet, self, q, dim, keepdim, out);
}

at::Tensor wrap_quantile_scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double q, c10::optional<int64_t> dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantile(dispatchKeySet, self, q, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_QUANTILE_SCALAR, dispatchKeySet, self, q, dim, keepdim);
}

at::Tensor & wrap_quantile_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & q, c10::optional<int64_t> dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_QUANTILE_OUT, dispatchKeySet, self, q, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, q, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::quantile_outf(dispatchKeySet, self, q, dim, keepdim, out);
}

at::Tensor wrap_quantile(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & q, c10::optional<int64_t> dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self, q);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantile(dispatchKeySet, self, q, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_QUANTILE, dispatchKeySet, self, q, dim, keepdim);
}

at::Tensor & wrap_nanquantile_scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double q, c10::optional<int64_t> dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NANQUANTILE_SCALAR_OUT, dispatchKeySet, self, q, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nanquantile_outf(dispatchKeySet, self, q, dim, keepdim, out);
}

at::Tensor wrap_nanquantile_scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double q, c10::optional<int64_t> dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nanquantile(dispatchKeySet, self, q, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NANQUANTILE_SCALAR, dispatchKeySet, self, q, dim, keepdim);
}

at::Tensor & wrap_nanquantile_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & q, c10::optional<int64_t> dim, bool keepdim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NANQUANTILE_OUT, dispatchKeySet, self, q, dim, keepdim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, q, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nanquantile_outf(dispatchKeySet, self, q, dim, keepdim, out);
}

at::Tensor wrap_nanquantile(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & q, c10::optional<int64_t> dim, bool keepdim) {
  if (trace.is_flushing()) {
    ensure_materialized(self, q);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nanquantile(dispatchKeySet, self, q, dim, keepdim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NANQUANTILE, dispatchKeySet, self, q, dim, keepdim);
}

at::Tensor & wrap_quantile_new_scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double q, c10::optional<int64_t> dim, bool keepdim, std::string interpolation, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_QUANTILE_NEW_SCALAR_OUT, dispatchKeySet, self, q, dim, keepdim, interpolation, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::quantile_outf(dispatchKeySet, self, q, dim, keepdim, interpolation, out);
}

at::Tensor wrap_quantile_new_scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double q, c10::optional<int64_t> dim, bool keepdim, std::string interpolation) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantile(dispatchKeySet, self, q, dim, keepdim, interpolation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_QUANTILE_NEW_SCALAR, dispatchKeySet, self, q, dim, keepdim, interpolation);
}

at::Tensor & wrap_quantile_new_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & q, c10::optional<int64_t> dim, bool keepdim, std::string interpolation, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_QUANTILE_NEW_OUT, dispatchKeySet, self, q, dim, keepdim, interpolation, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, q, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::quantile_outf(dispatchKeySet, self, q, dim, keepdim, interpolation, out);
}

at::Tensor wrap_quantile_new(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & q, c10::optional<int64_t> dim, bool keepdim, std::string interpolation) {
  if (trace.is_flushing()) {
    ensure_materialized(self, q);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::quantile(dispatchKeySet, self, q, dim, keepdim, interpolation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_QUANTILE_NEW, dispatchKeySet, self, q, dim, keepdim, interpolation);
}

at::Tensor & wrap_nanquantile_new_scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double q, c10::optional<int64_t> dim, bool keepdim, std::string interpolation, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NANQUANTILE_NEW_SCALAR_OUT, dispatchKeySet, self, q, dim, keepdim, interpolation, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nanquantile_outf(dispatchKeySet, self, q, dim, keepdim, interpolation, out);
}

at::Tensor wrap_nanquantile_new_scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double q, c10::optional<int64_t> dim, bool keepdim, std::string interpolation) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nanquantile(dispatchKeySet, self, q, dim, keepdim, interpolation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NANQUANTILE_NEW_SCALAR, dispatchKeySet, self, q, dim, keepdim, interpolation);
}

at::Tensor & wrap_nanquantile_new_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & q, c10::optional<int64_t> dim, bool keepdim, std::string interpolation, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NANQUANTILE_NEW_OUT, dispatchKeySet, self, q, dim, keepdim, interpolation, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, q, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nanquantile_outf(dispatchKeySet, self, q, dim, keepdim, interpolation, out);
}

at::Tensor wrap_nanquantile_new(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & q, c10::optional<int64_t> dim, bool keepdim, std::string interpolation) {
  if (trace.is_flushing()) {
    ensure_materialized(self, q);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nanquantile(dispatchKeySet, self, q, dim, keepdim, interpolation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NANQUANTILE_NEW, dispatchKeySet, self, q, dim, keepdim, interpolation);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_sort_values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool descending, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sort_outf(dispatchKeySet, self, dim, descending, values, indices);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_sort_values_stable(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<bool> stable, int64_t dim, bool descending, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sort_outf(dispatchKeySet, self, stable, dim, descending, values, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_sort(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool descending) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sort(dispatchKeySet, self, dim, descending);
}

std::tuple<at::Tensor,at::Tensor> wrap_sort_stable(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<bool> stable, int64_t dim, bool descending) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sort(dispatchKeySet, self, stable, dim, descending);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_sort_dimname_values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool descending, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sort_outf(dispatchKeySet, self, dim, descending, values, indices);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_sort_dimname_values_stable(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<bool> stable, at::Dimname dim, bool descending, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sort_outf(dispatchKeySet, self, stable, dim, descending, values, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_sort_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool descending) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sort(dispatchKeySet, self, dim, descending);
}

std::tuple<at::Tensor,at::Tensor> wrap_sort_dimname_stable(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<bool> stable, at::Dimname dim, bool descending) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sort(dispatchKeySet, self, stable, dim, descending);
}

at::Tensor & wrap_msort_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MSORT_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::msort_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_msort(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::msort(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MSORT, dispatchKeySet, self);
}

at::Tensor wrap_argsort(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool descending) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::argsort(dispatchKeySet, self, dim, descending);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ARGSORT, dispatchKeySet, self, dim, descending);
}

at::Tensor wrap_argsort_dimname(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool descending) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::argsort(dispatchKeySet, self, dim, descending);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ARGSORT_DIMNAME, dispatchKeySet, self, dim, descending);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_topk_values(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t k, int64_t dim, bool largest, bool sorted, at::Tensor & values, at::Tensor & indices) {
  ensure_materialized(self, values, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::topk_outf(dispatchKeySet, self, k, dim, largest, sorted, values, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_topk(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t k, int64_t dim, bool largest, bool sorted) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::topk(dispatchKeySet, self, k, dim, largest, sorted);
}

at::Tensor wrap_all(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::all(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ALL, dispatchKeySet, self);
}

at::Tensor wrap_any(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::any(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ANY, dispatchKeySet, self);
}

at::Tensor & wrap_renorm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & p, int64_t dim, const at::Scalar & maxnorm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RENORM_OUT, dispatchKeySet, self, p, dim, maxnorm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::renorm_outf(dispatchKeySet, self, p, dim, maxnorm, out);
}

at::Tensor wrap_renorm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & p, int64_t dim, const at::Scalar & maxnorm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::renorm(dispatchKeySet, self, p, dim, maxnorm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RENORM, dispatchKeySet, self, p, dim, maxnorm);
}

at::Tensor wrap_unfold(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dimension, int64_t size, int64_t step) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::unfold(dispatchKeySet, self, dimension, size, step);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_UNFOLD, dispatchKeySet, self, dimension, size, step);
}

at::Tensor wrap_unfold_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_in, at::IntArrayRef input_sizes, int64_t dim, int64_t size, int64_t step) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_in);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::unfold_backward(dispatchKeySet, grad_in, input_sizes, dim, size, step);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_in.dtype(), grad_in.device(), H_UNFOLD_BACKWARD, dispatchKeySet, grad_in, input_sizes, dim, size, step);
}

bool wrap_equal(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  ensure_materialized(self, other);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::equal(dispatchKeySet, self, other);
}

at::Tensor & wrap_pow_Tensor_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & exponent, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_POW_TENSOR_TENSOR_OUT, dispatchKeySet, self, exponent, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, exponent, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::pow_outf(dispatchKeySet, self, exponent, out);
}

at::Tensor & wrap_pow_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Scalar & self, const at::Tensor & exponent, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_POW_SCALAR_OUT, dispatchKeySet, self, exponent, out);
    return out;
  }
  will_override(out);
  ensure_materialized(exponent, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::pow_outf(dispatchKeySet, self, exponent, out);
}

at::Tensor & wrap_pow_Tensor_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & exponent, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_POW_TENSOR_SCALAR_OUT, dispatchKeySet, self, exponent, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::pow_outf(dispatchKeySet, self, exponent, out);
}

at::Tensor wrap_pow_Tensor_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & exponent) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::pow(dispatchKeySet, self, exponent);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_POW_TENSOR_SCALAR, dispatchKeySet, self, exponent);
}

at::Tensor & wrap_float_power_Tensor_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & exponent, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FLOAT_POWER_TENSOR_TENSOR_OUT, dispatchKeySet, self, exponent, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, exponent, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::float_power_outf(dispatchKeySet, self, exponent, out);
}

at::Tensor wrap_float_power_Tensor_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & exponent) {
  if (trace.is_flushing()) {
    ensure_materialized(self, exponent);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::float_power(dispatchKeySet, self, exponent);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLOAT_POWER_TENSOR_TENSOR, dispatchKeySet, self, exponent);
}

at::Tensor & wrap_float_power_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Scalar & self, const at::Tensor & exponent, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FLOAT_POWER_SCALAR_OUT, dispatchKeySet, self, exponent, out);
    return out;
  }
  will_override(out);
  ensure_materialized(exponent, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::float_power_outf(dispatchKeySet, self, exponent, out);
}

at::Tensor wrap_float_power_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Scalar & self, const at::Tensor & exponent) {
  if (trace.is_flushing()) {
    ensure_materialized(exponent);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::float_power(dispatchKeySet, self, exponent);
  }
  return at::detail::make_tensor<TorchyTensor>(exponent.dtype(), exponent.device(), H_FLOAT_POWER_SCALAR, dispatchKeySet, self, exponent);
}

at::Tensor & wrap_float_power_Tensor_Scalar_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & exponent, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FLOAT_POWER_TENSOR_SCALAR_OUT, dispatchKeySet, self, exponent, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::float_power_outf(dispatchKeySet, self, exponent, out);
}

at::Tensor wrap_float_power_Tensor_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & exponent) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::float_power(dispatchKeySet, self, exponent);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FLOAT_POWER_TENSOR_SCALAR, dispatchKeySet, self, exponent);
}

at::Tensor & wrap_float_power__Scalar(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & exponent) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FLOAT_POWER__SCALAR, dispatchKeySet, self, exponent);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::float_power_(dispatchKeySet, self, exponent);
}

at::Tensor & wrap_float_power__Tensor(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & exponent) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FLOAT_POWER__TENSOR, dispatchKeySet, self, exponent);
    return self;
  }
  will_override(self);
  ensure_materialized(self, exponent);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::float_power_(dispatchKeySet, self, exponent);
}

at::Tensor & wrap_normal_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double mean, double std, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NORMAL_, dispatchKeySet, self, mean, std, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::normal_(dispatchKeySet, self, mean, std, generator);
}

at::Tensor & wrap_normal_Tensor_float_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & mean, double std, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NORMAL_TENSOR_FLOAT_OUT, dispatchKeySet, mean, std, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(mean, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::normal_outf(dispatchKeySet, mean, std, generator, out);
}

at::Tensor wrap_normal_Tensor_float(c10::DispatchKeySet dispatchKeySet, const at::Tensor & mean, double std, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(mean);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::normal(dispatchKeySet, mean, std, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(mean.dtype(), mean.device(), H_NORMAL_TENSOR_FLOAT, dispatchKeySet, mean, std, generator);
}

at::Tensor & wrap_normal_float_Tensor_out(c10::DispatchKeySet dispatchKeySet, double mean, const at::Tensor & std, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NORMAL_FLOAT_TENSOR_OUT, dispatchKeySet, mean, std, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(std, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::normal_outf(dispatchKeySet, mean, std, generator, out);
}

at::Tensor wrap_normal_float_Tensor(c10::DispatchKeySet dispatchKeySet, double mean, const at::Tensor & std, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(std);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::normal(dispatchKeySet, mean, std, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(std.dtype(), std.device(), H_NORMAL_FLOAT_TENSOR, dispatchKeySet, mean, std, generator);
}

at::Tensor & wrap_normal_Tensor_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & mean, const at::Tensor & std, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NORMAL_TENSOR_TENSOR_OUT, dispatchKeySet, mean, std, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(mean, std, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::normal_outf(dispatchKeySet, mean, std, generator, out);
}

at::Tensor wrap_normal_Tensor_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & mean, const at::Tensor & std, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(mean, std);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::normal(dispatchKeySet, mean, std, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(mean.dtype(), mean.device(), H_NORMAL_TENSOR_TENSOR, dispatchKeySet, mean, std, generator);
}

at::Tensor wrap_normal_float_float(c10::DispatchKeySet dispatchKeySet, double mean, double std, at::IntArrayRef size, c10::optional<at::Generator> generator, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::normal(dispatchKeySet, mean, std, size, generator, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_normal_float_float_out(c10::DispatchKeySet dispatchKeySet, double mean, double std, at::IntArrayRef size, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NORMAL_FLOAT_FLOAT_OUT, dispatchKeySet, mean, std, size, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::normal_outf(dispatchKeySet, mean, std, size, generator, out);
}

at::Tensor wrap_alias(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::alias(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ALIAS, dispatchKeySet, self);
}

at::Tensor & wrap__index_copy_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__INDEX_COPY_, dispatchKeySet, self, dim, index, source);
    return self;
  }
  will_override(self);
  ensure_materialized(self, index, source);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_index_copy_(dispatchKeySet, self, dim, index, source);
}

at::Tensor wrap__cumsum(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cumsum(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CUMSUM, dispatchKeySet, self, dim);
}

at::Tensor & wrap__cumsum_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__CUMSUM_OUT, dispatchKeySet, self, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cumsum_outf(dispatchKeySet, self, dim, out);
}

at::Tensor wrap__cumprod(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_cumprod(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__CUMPROD, dispatchKeySet, self, dim);
}

at::Tensor & wrap__cumprod_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__CUMPROD_OUT, dispatchKeySet, self, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cumprod_outf(dispatchKeySet, self, dim, out);
}

at::Tensor wrap__var(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool unbiased) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_var(dispatchKeySet, self, unbiased);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__VAR, dispatchKeySet, self, unbiased);
}

at::Tensor wrap__std(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool unbiased) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_std(dispatchKeySet, self, unbiased);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__STD, dispatchKeySet, self, unbiased);
}

void wrap__amp_foreach_non_finite_check_and_unscale_(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::Tensor & found_inf, const at::Tensor & inv_scale) {
  ensure_materialized(found_inf, inv_scale);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_amp_foreach_non_finite_check_and_unscale_(dispatchKeySet, self, found_inf, inv_scale);
}

at::Tensor wrap__amp_update_scale(c10::DispatchKeySet dispatchKeySet, at::Tensor & growth_tracker, const at::Tensor & current_scale, const at::Tensor & found_inf, double scale_growth_factor, double scale_backoff_factor, int64_t growth_interval) {
  if (trace.is_flushing()) {
    ensure_materialized(growth_tracker, current_scale, found_inf);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_amp_update_scale(dispatchKeySet, growth_tracker, current_scale, found_inf, scale_growth_factor, scale_backoff_factor, growth_interval);
  }
  return at::detail::make_tensor<TorchyTensor>(growth_tracker.dtype(), growth_tracker.device(), H__AMP_UPDATE_SCALE, dispatchKeySet, growth_tracker, current_scale, found_inf, scale_growth_factor, scale_backoff_factor, growth_interval);
}

at::Tensor wrap__cat(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, int64_t dim) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::_cat(dispatchKeySet, tensors, dim));
}

at::Tensor & wrap__cat_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, int64_t dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__CAT_OUT, dispatchKeySet, tensors, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_cat_outf(dispatchKeySet, tensors, dim, out);
}

std::vector<at::Tensor> wrap__foreach_add_Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, const at::Scalar & scalar) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_add(dispatchKeySet, tensors, scalar);
}

void wrap__foreach_add__Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList self, const at::Scalar & scalar) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_add_(dispatchKeySet, self, scalar);
}

std::vector<at::Tensor> wrap__foreach_sub_Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, const at::Scalar & scalar) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sub(dispatchKeySet, tensors, scalar);
}

void wrap__foreach_sub__Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList self, const at::Scalar & scalar) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sub_(dispatchKeySet, self, scalar);
}

std::vector<at::Tensor> wrap__foreach_mul_Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, const at::Scalar & scalar) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_mul(dispatchKeySet, tensors, scalar);
}

void wrap__foreach_mul__Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList self, const at::Scalar & scalar) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_mul_(dispatchKeySet, self, scalar);
}

std::vector<at::Tensor> wrap__foreach_div_Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, const at::Scalar & scalar) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_div(dispatchKeySet, tensors, scalar);
}

void wrap__foreach_div__Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList self, const at::Scalar & scalar) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_div_(dispatchKeySet, self, scalar);
}

std::vector<at::Tensor> wrap__foreach_add_List(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors1, at::TensorList tensors2, const at::Scalar & alpha) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_add(dispatchKeySet, tensors1, tensors2, alpha);
}

void wrap__foreach_add__List(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList other, const at::Scalar & alpha) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_add_(dispatchKeySet, self, other, alpha);
}

std::vector<at::Tensor> wrap__foreach_sub_List(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors1, at::TensorList tensors2, const at::Scalar & alpha) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sub(dispatchKeySet, tensors1, tensors2, alpha);
}

void wrap__foreach_sub__List(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList other, const at::Scalar & alpha) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sub_(dispatchKeySet, self, other, alpha);
}

std::vector<at::Tensor> wrap__foreach_mul_List(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors1, at::TensorList tensors2) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_mul(dispatchKeySet, tensors1, tensors2);
}

void wrap__foreach_mul__List(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList other) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_mul_(dispatchKeySet, self, other);
}

std::vector<at::Tensor> wrap__foreach_div_List(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors1, at::TensorList tensors2) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_div(dispatchKeySet, tensors1, tensors2);
}

void wrap__foreach_div__List(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList other) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_div_(dispatchKeySet, self, other);
}

std::vector<at::Tensor> wrap__foreach_add_ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_add(dispatchKeySet, tensors, scalars);
}

void wrap__foreach_add__ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_add_(dispatchKeySet, self, scalars);
}

std::vector<at::Tensor> wrap__foreach_sub_ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sub(dispatchKeySet, tensors, scalars);
}

void wrap__foreach_sub__ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sub_(dispatchKeySet, self, scalars);
}

std::vector<at::Tensor> wrap__foreach_div_ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_div(dispatchKeySet, tensors, scalars);
}

void wrap__foreach_div__ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_div_(dispatchKeySet, self, scalars);
}

std::vector<at::Tensor> wrap__foreach_mul_ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_mul(dispatchKeySet, tensors, scalars);
}

void wrap__foreach_mul__ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_mul_(dispatchKeySet, self, scalars);
}

std::vector<at::Tensor> wrap__foreach_exp(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_exp(dispatchKeySet, tensors);
}

void wrap__foreach_zero_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_zero_(dispatchKeySet, self);
}

void wrap__foreach_exp_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_exp_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_sqrt(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sqrt(dispatchKeySet, tensors);
}

void wrap__foreach_sqrt_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sqrt_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_abs(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_abs(dispatchKeySet, tensors);
}

void wrap__foreach_abs_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_abs_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_acos(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_acos(dispatchKeySet, tensors);
}

void wrap__foreach_acos_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_acos_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_asin(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_asin(dispatchKeySet, tensors);
}

void wrap__foreach_asin_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_asin_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_atan(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_atan(dispatchKeySet, tensors);
}

void wrap__foreach_atan_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_atan_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_ceil(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_ceil(dispatchKeySet, tensors);
}

void wrap__foreach_ceil_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_ceil_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_cos(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_cos(dispatchKeySet, tensors);
}

void wrap__foreach_cos_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_cos_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_cosh(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_cosh(dispatchKeySet, tensors);
}

void wrap__foreach_cosh_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_cosh_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_erf(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_erf(dispatchKeySet, tensors);
}

void wrap__foreach_erf_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_erf_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_erfc(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_erfc(dispatchKeySet, tensors);
}

void wrap__foreach_erfc_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_erfc_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_expm1(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_expm1(dispatchKeySet, tensors);
}

void wrap__foreach_expm1_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_expm1_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_floor(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_floor(dispatchKeySet, tensors);
}

void wrap__foreach_floor_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_floor_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_log(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_log(dispatchKeySet, tensors);
}

void wrap__foreach_log_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_log_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_log10(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_log10(dispatchKeySet, tensors);
}

void wrap__foreach_log10_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_log10_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_log1p(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_log1p(dispatchKeySet, tensors);
}

void wrap__foreach_log1p_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_log1p_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_log2(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_log2(dispatchKeySet, tensors);
}

void wrap__foreach_log2_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_log2_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_neg(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_neg(dispatchKeySet, tensors);
}

void wrap__foreach_neg_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_neg_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_tan(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_tan(dispatchKeySet, tensors);
}

void wrap__foreach_tan_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_tan_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_tanh(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_tanh(dispatchKeySet, tensors);
}

void wrap__foreach_tanh_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_tanh_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_sin(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sin(dispatchKeySet, tensors);
}

void wrap__foreach_sin_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sin_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_sinh(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sinh(dispatchKeySet, tensors);
}

void wrap__foreach_sinh_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sinh_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_round(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_round(dispatchKeySet, tensors);
}

void wrap__foreach_round_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_round_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_lgamma(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_lgamma(dispatchKeySet, tensors);
}

void wrap__foreach_lgamma_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_lgamma_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_frac(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_frac(dispatchKeySet, tensors);
}

void wrap__foreach_frac_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_frac_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_reciprocal(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_reciprocal(dispatchKeySet, tensors);
}

void wrap__foreach_reciprocal_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_reciprocal_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_sigmoid(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sigmoid(dispatchKeySet, tensors);
}

void wrap__foreach_sigmoid_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_sigmoid_(dispatchKeySet, self);
}

std::vector<at::Tensor> wrap__foreach_trunc(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_trunc(dispatchKeySet, tensors);
}

void wrap__foreach_trunc_(c10::DispatchKeySet dispatchKeySet, at::TensorList self) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_trunc_(dispatchKeySet, self);
}

void wrap__foreach_addcdiv__Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_addcdiv_(dispatchKeySet, self, tensor1, tensor2, value);
}

void wrap__foreach_addcmul__Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_addcmul_(dispatchKeySet, self, tensor1, tensor2, value);
}

void wrap__foreach_addcdiv__ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_addcdiv_(dispatchKeySet, self, tensor1, tensor2, scalars);
}

void wrap__foreach_addcmul__ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_addcmul_(dispatchKeySet, self, tensor1, tensor2, scalars);
}

std::vector<at::Tensor> wrap__foreach_addcdiv_Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList input, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_addcdiv(dispatchKeySet, input, tensor1, tensor2, value);
}

std::vector<at::Tensor> wrap__foreach_addcmul_Scalar(c10::DispatchKeySet dispatchKeySet, at::TensorList input, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_addcmul(dispatchKeySet, input, tensor1, tensor2, value);
}

std::vector<at::Tensor> wrap__foreach_addcdiv_ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList input, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_addcdiv(dispatchKeySet, input, tensor1, tensor2, scalars);
}

std::vector<at::Tensor> wrap__foreach_addcmul_ScalarList(c10::DispatchKeySet dispatchKeySet, at::TensorList input, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_addcmul(dispatchKeySet, input, tensor1, tensor2, scalars);
}

std::vector<at::Tensor> wrap__foreach_maximum_List(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors1, at::TensorList tensors2) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_maximum(dispatchKeySet, tensors1, tensors2);
}

std::vector<at::Tensor> wrap__foreach_minimum_List(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors1, at::TensorList tensors2) {
  ensure_materialized();
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_foreach_minimum(dispatchKeySet, tensors1, tensors2);
}

at::Tensor wrap_bucketize_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & boundaries, bool out_int32, bool right) {
  if (trace.is_flushing()) {
    ensure_materialized(self, boundaries);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bucketize(dispatchKeySet, self, boundaries, out_int32, right);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_BUCKETIZE_TENSOR, dispatchKeySet, self, boundaries, out_int32, right);
}

at::Tensor & wrap_bucketize_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & boundaries, bool out_int32, bool right, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_BUCKETIZE_TENSOR_OUT, dispatchKeySet, self, boundaries, out_int32, right, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, boundaries, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::bucketize_outf(dispatchKeySet, self, boundaries, out_int32, right, out);
}

at::Tensor wrap_bucketize_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Scalar & self, const at::Tensor & boundaries, bool out_int32, bool right) {
  if (trace.is_flushing()) {
    ensure_materialized(boundaries);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::bucketize(dispatchKeySet, self, boundaries, out_int32, right);
  }
  return at::detail::make_tensor<TorchyTensor>(boundaries.dtype(), boundaries.device(), H_BUCKETIZE_SCALAR, dispatchKeySet, self, boundaries, out_int32, right);
}

at::Tensor wrap_searchsorted_Tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & sorted_sequence, const at::Tensor & self, bool out_int32, bool right) {
  if (trace.is_flushing()) {
    ensure_materialized(sorted_sequence, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::searchsorted(dispatchKeySet, sorted_sequence, self, out_int32, right);
  }
  return at::detail::make_tensor<TorchyTensor>(sorted_sequence.dtype(), sorted_sequence.device(), H_SEARCHSORTED_TENSOR, dispatchKeySet, sorted_sequence, self, out_int32, right);
}

at::Tensor & wrap_searchsorted_Tensor_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & sorted_sequence, const at::Tensor & self, bool out_int32, bool right, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SEARCHSORTED_TENSOR_OUT, dispatchKeySet, sorted_sequence, self, out_int32, right, out);
    return out;
  }
  will_override(out);
  ensure_materialized(sorted_sequence, self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::searchsorted_outf(dispatchKeySet, sorted_sequence, self, out_int32, right, out);
}

at::Tensor wrap_searchsorted_Scalar(c10::DispatchKeySet dispatchKeySet, const at::Tensor & sorted_sequence, const at::Scalar & self, bool out_int32, bool right) {
  if (trace.is_flushing()) {
    ensure_materialized(sorted_sequence);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::searchsorted(dispatchKeySet, sorted_sequence, self, out_int32, right);
  }
  return at::detail::make_tensor<TorchyTensor>(sorted_sequence.dtype(), sorted_sequence.device(), H_SEARCHSORTED_SCALAR, dispatchKeySet, sorted_sequence, self, out_int32, right);
}

at::Tensor & wrap_mse_loss_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MSE_LOSS_OUT, dispatchKeySet, self, target, reduction, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, target, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mse_loss_outf(dispatchKeySet, self, target, reduction, out);
}

at::Tensor wrap_mse_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mse_loss(dispatchKeySet, self, target, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MSE_LOSS, dispatchKeySet, self, target, reduction);
}

at::Tensor & wrap_mse_loss_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MSE_LOSS_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, target, reduction, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, target, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::mse_loss_backward_outf(dispatchKeySet, grad_output, self, target, reduction, grad_input);
}

at::Tensor wrap_mse_loss_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mse_loss_backward(dispatchKeySet, grad_output, self, target, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MSE_LOSS_BACKWARD, dispatchKeySet, grad_output, self, target, reduction);
}

at::Tensor & wrap_l1_loss_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_L1_LOSS_OUT, dispatchKeySet, self, target, reduction, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, target, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::l1_loss_outf(dispatchKeySet, self, target, reduction, out);
}

at::Tensor wrap_l1_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::l1_loss(dispatchKeySet, self, target, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_L1_LOSS, dispatchKeySet, self, target, reduction);
}

at::Tensor & wrap_l1_loss_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_L1_LOSS_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, target, reduction, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, target, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::l1_loss_backward_outf(dispatchKeySet, grad_output, self, target, reduction, grad_input);
}

at::Tensor wrap_l1_loss_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::l1_loss_backward(dispatchKeySet, grad_output, self, target, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_L1_LOSS_BACKWARD, dispatchKeySet, grad_output, self, target, reduction);
}

at::Tensor & wrap_multi_margin_loss_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const at::Scalar & p, const at::Scalar & margin, const c10::optional<at::Tensor> & weight, int64_t reduction, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MULTI_MARGIN_LOSS_OUT, dispatchKeySet, self, target, p, margin, weight, reduction, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, target, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::multi_margin_loss_outf(dispatchKeySet, self, target, p, margin, weight, reduction, out);
}

at::Tensor wrap_multi_margin_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const at::Scalar & p, const at::Scalar & margin, const c10::optional<at::Tensor> & weight, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::multi_margin_loss(dispatchKeySet, self, target, p, margin, weight, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MULTI_MARGIN_LOSS, dispatchKeySet, self, target, p, margin, weight, reduction);
}

at::Tensor & wrap_multi_margin_loss_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const at::Scalar & p, const at::Scalar & margin, const c10::optional<at::Tensor> & weight, int64_t reduction, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MULTI_MARGIN_LOSS_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, target, p, margin, weight, reduction, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, target, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::multi_margin_loss_backward_outf(dispatchKeySet, grad_output, self, target, p, margin, weight, reduction, grad_input);
}

at::Tensor wrap_multi_margin_loss_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const at::Scalar & p, const at::Scalar & margin, const c10::optional<at::Tensor> & weight, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::multi_margin_loss_backward(dispatchKeySet, grad_output, self, target, p, margin, weight, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MULTI_MARGIN_LOSS_BACKWARD, dispatchKeySet, grad_output, self, target, p, margin, weight, reduction);
}

at::Tensor & wrap_multilabel_margin_loss_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MULTILABEL_MARGIN_LOSS_OUT, dispatchKeySet, self, target, reduction, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, target, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::multilabel_margin_loss_outf(dispatchKeySet, self, target, reduction, out);
}

at::Tensor wrap_multilabel_margin_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::multilabel_margin_loss(dispatchKeySet, self, target, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MULTILABEL_MARGIN_LOSS, dispatchKeySet, self, target, reduction);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_multilabel_margin_loss_forward_output(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction, at::Tensor & output, at::Tensor & is_target) {
  ensure_materialized(self, target, output, is_target);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::multilabel_margin_loss_forward_outf(dispatchKeySet, self, target, reduction, output, is_target);
}

std::tuple<at::Tensor,at::Tensor> wrap_multilabel_margin_loss_forward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction) {
  ensure_materialized(self, target);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::multilabel_margin_loss_forward(dispatchKeySet, self, target, reduction);
}

at::Tensor & wrap_multilabel_margin_loss_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction, const at::Tensor & is_target, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MULTILABEL_MARGIN_LOSS_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, target, reduction, is_target, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, target, is_target, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::multilabel_margin_loss_backward_outf(dispatchKeySet, grad_output, self, target, reduction, is_target, grad_input);
}

at::Tensor wrap_multilabel_margin_loss_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction, const at::Tensor & is_target) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target, is_target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::multilabel_margin_loss_backward(dispatchKeySet, grad_output, self, target, reduction, is_target);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MULTILABEL_MARGIN_LOSS_BACKWARD, dispatchKeySet, grad_output, self, target, reduction, is_target);
}

at::Tensor & wrap_nll_loss_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NLL_LOSS_OUT, dispatchKeySet, self, target, weight, reduction, ignore_index, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, target, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nll_loss_outf(dispatchKeySet, self, target, weight, reduction, ignore_index, out);
}

at::Tensor wrap_nll_loss_nd(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nll_loss_nd(dispatchKeySet, self, target, weight, reduction, ignore_index);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NLL_LOSS_ND, dispatchKeySet, self, target, weight, reduction, ignore_index);
}

at::Tensor wrap_nll_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nll_loss(dispatchKeySet, self, target, weight, reduction, ignore_index);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NLL_LOSS, dispatchKeySet, self, target, weight, reduction, ignore_index);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_nll_loss_forward_output(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, at::Tensor & output, at::Tensor & total_weight) {
  ensure_materialized(self, target, output, total_weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nll_loss_forward_outf(dispatchKeySet, self, target, weight, reduction, ignore_index, output, total_weight);
}

std::tuple<at::Tensor,at::Tensor> wrap_nll_loss_forward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index) {
  ensure_materialized(self, target);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nll_loss_forward(dispatchKeySet, self, target, weight, reduction, ignore_index);
}

at::Tensor & wrap_nll_loss_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, const at::Tensor & total_weight, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NLL_LOSS_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, target, weight, reduction, ignore_index, total_weight, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, target, total_weight, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nll_loss_backward_outf(dispatchKeySet, grad_output, self, target, weight, reduction, ignore_index, total_weight, grad_input);
}

at::Tensor wrap_nll_loss_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, const at::Tensor & total_weight) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target, total_weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nll_loss_backward(dispatchKeySet, grad_output, self, target, weight, reduction, ignore_index, total_weight);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_NLL_LOSS_BACKWARD, dispatchKeySet, grad_output, self, target, weight, reduction, ignore_index, total_weight);
}

at::Tensor & wrap_nll_loss2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NLL_LOSS2D_OUT, dispatchKeySet, self, target, weight, reduction, ignore_index, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, target, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nll_loss2d_outf(dispatchKeySet, self, target, weight, reduction, ignore_index, out);
}

at::Tensor wrap_nll_loss2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nll_loss2d(dispatchKeySet, self, target, weight, reduction, ignore_index);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_NLL_LOSS2D, dispatchKeySet, self, target, weight, reduction, ignore_index);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_nll_loss2d_forward_output(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, at::Tensor & output, at::Tensor & total_weight) {
  ensure_materialized(self, target, output, total_weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nll_loss2d_forward_outf(dispatchKeySet, self, target, weight, reduction, ignore_index, output, total_weight);
}

std::tuple<at::Tensor,at::Tensor> wrap_nll_loss2d_forward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index) {
  ensure_materialized(self, target);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nll_loss2d_forward(dispatchKeySet, self, target, weight, reduction, ignore_index);
}

at::Tensor & wrap_nll_loss2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, const at::Tensor & total_weight, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_NLL_LOSS2D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, target, weight, reduction, ignore_index, total_weight, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, target, total_weight, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::nll_loss2d_backward_outf(dispatchKeySet, grad_output, self, target, weight, reduction, ignore_index, total_weight, grad_input);
}

at::Tensor wrap_nll_loss2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, const at::Tensor & total_weight) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target, total_weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::nll_loss2d_backward(dispatchKeySet, grad_output, self, target, weight, reduction, ignore_index, total_weight);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_NLL_LOSS2D_BACKWARD, dispatchKeySet, grad_output, self, target, weight, reduction, ignore_index, total_weight);
}

at::Tensor & wrap_smooth_l1_loss_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction, double beta, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SMOOTH_L1_LOSS_OUT, dispatchKeySet, self, target, reduction, beta, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, target, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::smooth_l1_loss_outf(dispatchKeySet, self, target, reduction, beta, out);
}

at::Tensor wrap_smooth_l1_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction, double beta) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::smooth_l1_loss(dispatchKeySet, self, target, reduction, beta);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SMOOTH_L1_LOSS, dispatchKeySet, self, target, reduction, beta);
}

at::Tensor & wrap_smooth_l1_loss_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction, double beta, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SMOOTH_L1_LOSS_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, target, reduction, beta, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, target, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::smooth_l1_loss_backward_outf(dispatchKeySet, grad_output, self, target, reduction, beta, grad_input);
}

at::Tensor wrap_smooth_l1_loss_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction, double beta) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::smooth_l1_loss_backward(dispatchKeySet, grad_output, self, target, reduction, beta);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_SMOOTH_L1_LOSS_BACKWARD, dispatchKeySet, grad_output, self, target, reduction, beta);
}

at::Tensor & wrap_huber_loss_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction, double delta, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HUBER_LOSS_OUT, dispatchKeySet, self, target, reduction, delta, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, target, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::huber_loss_outf(dispatchKeySet, self, target, reduction, delta, out);
}

at::Tensor wrap_huber_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction, double delta) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::huber_loss(dispatchKeySet, self, target, reduction, delta);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_HUBER_LOSS, dispatchKeySet, self, target, reduction, delta);
}

at::Tensor & wrap_huber_loss_backward_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction, double delta, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HUBER_LOSS_BACKWARD_OUT, dispatchKeySet, grad_output, self, target, reduction, delta, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, target, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::huber_loss_backward_outf(dispatchKeySet, grad_output, self, target, reduction, delta, grad_input);
}

at::Tensor wrap_huber_loss_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction, double delta) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::huber_loss_backward(dispatchKeySet, grad_output, self, target, reduction, delta);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_HUBER_LOSS_BACKWARD, dispatchKeySet, grad_output, self, target, reduction, delta);
}

at::Tensor & wrap_soft_margin_loss_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SOFT_MARGIN_LOSS_OUT, dispatchKeySet, self, target, reduction, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, target, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::soft_margin_loss_outf(dispatchKeySet, self, target, reduction, out);
}

at::Tensor wrap_soft_margin_loss(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & target, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::soft_margin_loss(dispatchKeySet, self, target, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SOFT_MARGIN_LOSS, dispatchKeySet, self, target, reduction);
}

at::Tensor & wrap_soft_margin_loss_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SOFT_MARGIN_LOSS_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, target, reduction, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, target, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::soft_margin_loss_backward_outf(dispatchKeySet, grad_output, self, target, reduction, grad_input);
}

at::Tensor wrap_soft_margin_loss_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, int64_t reduction) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, target);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::soft_margin_loss_backward(dispatchKeySet, grad_output, self, target, reduction);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_SOFT_MARGIN_LOSS_BACKWARD, dispatchKeySet, grad_output, self, target, reduction);
}

at::Tensor & wrap_elu_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & alpha, const at::Scalar & scale, const at::Scalar & input_scale, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ELU_OUT, dispatchKeySet, self, alpha, scale, input_scale, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::elu_outf(dispatchKeySet, self, alpha, scale, input_scale, out);
}

at::Tensor wrap_elu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & alpha, const at::Scalar & scale, const at::Scalar & input_scale) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::elu(dispatchKeySet, self, alpha, scale, input_scale);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ELU, dispatchKeySet, self, alpha, scale, input_scale);
}

at::Tensor wrap_elu_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Scalar & alpha, const at::Scalar & scale, const at::Scalar & input_scale, bool is_result, const at::Tensor & self_or_result) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self_or_result);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::elu_backward(dispatchKeySet, grad_output, alpha, scale, input_scale, is_result, self_or_result);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_ELU_BACKWARD, dispatchKeySet, grad_output, alpha, scale, input_scale, is_result, self_or_result);
}

at::Tensor & wrap_elu_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & alpha, const at::Scalar & scale, const at::Scalar & input_scale) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ELU_, dispatchKeySet, self, alpha, scale, input_scale);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::elu_(dispatchKeySet, self, alpha, scale, input_scale);
}

at::Tensor & wrap_glu_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GLU_OUT, dispatchKeySet, self, dim, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::glu_outf(dispatchKeySet, self, dim, out);
}

at::Tensor wrap_glu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::glu(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GLU, dispatchKeySet, self, dim);
}

at::Tensor & wrap_glu_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, int64_t dim, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GLU_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, dim, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::glu_backward_outf(dispatchKeySet, grad_output, self, dim, grad_input);
}

at::Tensor wrap_glu_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, int64_t dim) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::glu_backward(dispatchKeySet, grad_output, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_GLU_BACKWARD, dispatchKeySet, grad_output, self, dim);
}

at::Tensor & wrap_hardsigmoid_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HARDSIGMOID_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hardsigmoid_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_hardsigmoid(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hardsigmoid(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_HARDSIGMOID, dispatchKeySet, self);
}

at::Tensor & wrap_hardsigmoid_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HARDSIGMOID_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hardsigmoid_(dispatchKeySet, self);
}

at::Tensor wrap_hardsigmoid_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hardsigmoid_backward(dispatchKeySet, grad_output, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_HARDSIGMOID_BACKWARD, dispatchKeySet, grad_output, self);
}

at::Tensor & wrap_hardtanh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & min_val, const at::Scalar & max_val, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HARDTANH_OUT, dispatchKeySet, self, min_val, max_val, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hardtanh_outf(dispatchKeySet, self, min_val, max_val, out);
}

at::Tensor wrap_hardtanh(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & min_val, const at::Scalar & max_val) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hardtanh(dispatchKeySet, self, min_val, max_val);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_HARDTANH, dispatchKeySet, self, min_val, max_val);
}

at::Tensor & wrap_hardtanh_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & min_val, const at::Scalar & max_val, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HARDTANH_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, min_val, max_val, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hardtanh_backward_outf(dispatchKeySet, grad_output, self, min_val, max_val, grad_input);
}

at::Tensor wrap_hardtanh_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & min_val, const at::Scalar & max_val) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hardtanh_backward(dispatchKeySet, grad_output, self, min_val, max_val);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_HARDTANH_BACKWARD, dispatchKeySet, grad_output, self, min_val, max_val);
}

at::Tensor & wrap_hardtanh_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & min_val, const at::Scalar & max_val) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HARDTANH_, dispatchKeySet, self, min_val, max_val);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hardtanh_(dispatchKeySet, self, min_val, max_val);
}

at::Tensor & wrap_hardswish_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HARDSWISH_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hardswish_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_hardswish(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hardswish(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_HARDSWISH, dispatchKeySet, self);
}

at::Tensor & wrap_hardswish_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_HARDSWISH_, dispatchKeySet, self);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::hardswish_(dispatchKeySet, self);
}

at::Tensor wrap_hardswish_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::hardswish_backward(dispatchKeySet, grad_output, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_HARDSWISH_BACKWARD, dispatchKeySet, grad_output, self);
}

at::Tensor & wrap_leaky_relu_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & negative_slope, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LEAKY_RELU_OUT, dispatchKeySet, self, negative_slope, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::leaky_relu_outf(dispatchKeySet, self, negative_slope, out);
}

at::Tensor wrap_leaky_relu(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & negative_slope) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::leaky_relu(dispatchKeySet, self, negative_slope);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LEAKY_RELU, dispatchKeySet, self, negative_slope);
}

at::Tensor wrap_leaky_relu_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & negative_slope, bool self_is_result) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::leaky_relu_backward(dispatchKeySet, grad_output, self, negative_slope, self_is_result);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_LEAKY_RELU_BACKWARD, dispatchKeySet, grad_output, self, negative_slope, self_is_result);
}

at::Tensor & wrap_leaky_relu_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & negative_slope) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LEAKY_RELU_, dispatchKeySet, self, negative_slope);
    return self;
  }
  will_override(self);
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::leaky_relu_(dispatchKeySet, self, negative_slope);
}

at::Tensor & wrap_log_sigmoid_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOG_SIGMOID_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::log_sigmoid_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_log_sigmoid(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::log_sigmoid(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LOG_SIGMOID, dispatchKeySet, self);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_log_sigmoid_forward_output(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & output, at::Tensor & buffer) {
  ensure_materialized(self, output, buffer);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::log_sigmoid_forward_outf(dispatchKeySet, self, output, buffer);
}

std::tuple<at::Tensor,at::Tensor> wrap_log_sigmoid_forward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::log_sigmoid_forward(dispatchKeySet, self);
}

at::Tensor & wrap_log_sigmoid_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & buffer, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOG_SIGMOID_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, buffer, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, buffer, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::log_sigmoid_backward_outf(dispatchKeySet, grad_output, self, buffer, grad_input);
}

at::Tensor wrap_log_sigmoid_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & buffer) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, buffer);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::log_sigmoid_backward(dispatchKeySet, grad_output, self, buffer);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_LOG_SIGMOID_BACKWARD, dispatchKeySet, grad_output, self, buffer);
}

at::Tensor & wrap_rrelu_with_noise_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & noise, const at::Scalar & lower, const at::Scalar & upper, bool training, c10::optional<at::Generator> generator, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RRELU_WITH_NOISE_OUT, dispatchKeySet, self, noise, lower, upper, training, generator, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, noise, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rrelu_with_noise_outf(dispatchKeySet, self, noise, lower, upper, training, generator, out);
}

at::Tensor wrap_rrelu_with_noise(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & noise, const at::Scalar & lower, const at::Scalar & upper, bool training, c10::optional<at::Generator> generator) {
  if (trace.is_flushing()) {
    ensure_materialized(self, noise);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rrelu_with_noise(dispatchKeySet, self, noise, lower, upper, training, generator);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_RRELU_WITH_NOISE, dispatchKeySet, self, noise, lower, upper, training, generator);
}

at::Tensor wrap_rrelu_with_noise_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & noise, const at::Scalar & lower, const at::Scalar & upper, bool training, bool self_is_result) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, noise);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::rrelu_with_noise_backward(dispatchKeySet, grad_output, self, noise, lower, upper, training, self_is_result);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_RRELU_WITH_NOISE_BACKWARD, dispatchKeySet, grad_output, self, noise, lower, upper, training, self_is_result);
}

at::Tensor & wrap_rrelu_with_noise_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & noise, const at::Scalar & lower, const at::Scalar & upper, bool training, c10::optional<at::Generator> generator) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_RRELU_WITH_NOISE_, dispatchKeySet, self, noise, lower, upper, training, generator);
    return self;
  }
  will_override(self);
  ensure_materialized(self, noise);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::rrelu_with_noise_(dispatchKeySet, self, noise, lower, upper, training, generator);
}

at::Tensor & wrap_softplus_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & beta, const at::Scalar & threshold, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SOFTPLUS_OUT, dispatchKeySet, self, beta, threshold, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::softplus_outf(dispatchKeySet, self, beta, threshold, out);
}

at::Tensor wrap_softplus(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & beta, const at::Scalar & threshold) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::softplus(dispatchKeySet, self, beta, threshold);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SOFTPLUS, dispatchKeySet, self, beta, threshold);
}

at::Tensor & wrap_softplus_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & beta, const at::Scalar & threshold, const at::Tensor & output, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SOFTPLUS_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, beta, threshold, output, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::softplus_backward_outf(dispatchKeySet, grad_output, self, beta, threshold, output, grad_input);
}

at::Tensor wrap_softplus_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & beta, const at::Scalar & threshold, const at::Tensor & output) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::softplus_backward(dispatchKeySet, grad_output, self, beta, threshold, output);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_SOFTPLUS_BACKWARD, dispatchKeySet, grad_output, self, beta, threshold, output);
}

at::Tensor & wrap_softshrink_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & lambd, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SOFTSHRINK_OUT, dispatchKeySet, self, lambd, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::softshrink_outf(dispatchKeySet, self, lambd, out);
}

at::Tensor wrap_softshrink(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & lambd) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::softshrink(dispatchKeySet, self, lambd);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SOFTSHRINK, dispatchKeySet, self, lambd);
}

at::Tensor & wrap_softshrink_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & lambd, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SOFTSHRINK_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, lambd, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::softshrink_backward_outf(dispatchKeySet, grad_output, self, lambd, grad_input);
}

at::Tensor wrap_softshrink_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & lambd) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::softshrink_backward(dispatchKeySet, grad_output, self, lambd);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_SOFTSHRINK_BACKWARD, dispatchKeySet, grad_output, self, lambd);
}

at::Tensor & wrap_adaptive_avg_pool2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADAPTIVE_AVG_POOL2D_OUT, dispatchKeySet, self, output_size, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::adaptive_avg_pool2d_outf(dispatchKeySet, self, output_size, out);
}

at::Tensor wrap_adaptive_avg_pool2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::adaptive_avg_pool2d(dispatchKeySet, self, output_size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ADAPTIVE_AVG_POOL2D, dispatchKeySet, self, output_size);
}

at::Tensor wrap_mkldnn_adaptive_avg_pool2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_adaptive_avg_pool2d(dispatchKeySet, self, output_size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MKLDNN_ADAPTIVE_AVG_POOL2D, dispatchKeySet, self, output_size);
}

at::Tensor wrap_mkldnn_adaptive_avg_pool2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::mkldnn_adaptive_avg_pool2d_backward(dispatchKeySet, grad_output, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MKLDNN_ADAPTIVE_AVG_POOL2D_BACKWARD, dispatchKeySet, grad_output, self);
}

at::Tensor wrap__adaptive_avg_pool2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_adaptive_avg_pool2d(dispatchKeySet, self, output_size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__ADAPTIVE_AVG_POOL2D, dispatchKeySet, self, output_size);
}

at::Tensor wrap__adaptive_avg_pool2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_adaptive_avg_pool2d_backward(dispatchKeySet, grad_output, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H__ADAPTIVE_AVG_POOL2D_BACKWARD, dispatchKeySet, grad_output, self);
}

at::Tensor & wrap_adaptive_avg_pool3d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADAPTIVE_AVG_POOL3D_OUT, dispatchKeySet, self, output_size, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::adaptive_avg_pool3d_outf(dispatchKeySet, self, output_size, out);
}

at::Tensor wrap_adaptive_avg_pool3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::adaptive_avg_pool3d(dispatchKeySet, self, output_size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ADAPTIVE_AVG_POOL3D, dispatchKeySet, self, output_size);
}

at::Tensor wrap__adaptive_avg_pool3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_adaptive_avg_pool3d(dispatchKeySet, self, output_size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__ADAPTIVE_AVG_POOL3D, dispatchKeySet, self, output_size);
}

at::Tensor & wrap_adaptive_avg_pool3d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADAPTIVE_AVG_POOL3D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::adaptive_avg_pool3d_backward_outf(dispatchKeySet, grad_output, self, grad_input);
}

at::Tensor wrap__adaptive_avg_pool3d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_adaptive_avg_pool3d_backward(dispatchKeySet, grad_output, self);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H__ADAPTIVE_AVG_POOL3D_BACKWARD, dispatchKeySet, grad_output, self);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_adaptive_max_pool2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, at::Tensor & out, at::Tensor & indices) {
  ensure_materialized(self, out, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::adaptive_max_pool2d_outf(dispatchKeySet, self, output_size, out, indices);
}

at::Tensor & wrap_adaptive_max_pool2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & indices, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADAPTIVE_MAX_POOL2D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, indices, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, indices, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::adaptive_max_pool2d_backward_outf(dispatchKeySet, grad_output, self, indices, grad_input);
}

at::Tensor wrap_adaptive_max_pool2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & indices) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::adaptive_max_pool2d_backward(dispatchKeySet, grad_output, self, indices);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_ADAPTIVE_MAX_POOL2D_BACKWARD, dispatchKeySet, grad_output, self, indices);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_adaptive_max_pool3d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, at::Tensor & out, at::Tensor & indices) {
  ensure_materialized(self, out, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::adaptive_max_pool3d_outf(dispatchKeySet, self, output_size, out, indices);
}

at::Tensor & wrap_adaptive_max_pool3d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & indices, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ADAPTIVE_MAX_POOL3D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, indices, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, indices, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::adaptive_max_pool3d_backward_outf(dispatchKeySet, grad_output, self, indices, grad_input);
}

at::Tensor wrap_adaptive_max_pool3d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & indices) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::adaptive_max_pool3d_backward(dispatchKeySet, grad_output, self, indices);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_ADAPTIVE_MAX_POOL3D_BACKWARD, dispatchKeySet, grad_output, self, indices);
}

at::Tensor & wrap_avg_pool2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_AVG_POOL2D_OUT, dispatchKeySet, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::avg_pool2d_outf(dispatchKeySet, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override, out);
}

at::Tensor wrap_avg_pool2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::avg_pool2d(dispatchKeySet, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_AVG_POOL2D, dispatchKeySet, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override);
}

at::Tensor & wrap_avg_pool2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_AVG_POOL2D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::avg_pool2d_backward_outf(dispatchKeySet, grad_output, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override, grad_input);
}

at::Tensor wrap_avg_pool2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::avg_pool2d_backward(dispatchKeySet, grad_output, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_AVG_POOL2D_BACKWARD, dispatchKeySet, grad_output, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override);
}

at::Tensor & wrap_avg_pool3d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_AVG_POOL3D_OUT, dispatchKeySet, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::avg_pool3d_outf(dispatchKeySet, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override, out);
}

at::Tensor wrap_avg_pool3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::avg_pool3d(dispatchKeySet, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_AVG_POOL3D, dispatchKeySet, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override);
}

at::Tensor & wrap_avg_pool3d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_AVG_POOL3D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::avg_pool3d_backward_outf(dispatchKeySet, grad_output, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override, grad_input);
}

at::Tensor wrap_avg_pool3d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::avg_pool3d_backward(dispatchKeySet, grad_output, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_AVG_POOL3D_BACKWARD, dispatchKeySet, grad_output, self, kernel_size, stride, padding, ceil_mode, count_include_pad, divisor_override);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_fractional_max_pool2d_output(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & random_samples, at::Tensor & output, at::Tensor & indices) {
  ensure_materialized(self, random_samples, output, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fractional_max_pool2d_outf(dispatchKeySet, self, kernel_size, output_size, random_samples, output, indices);
}

at::Tensor & wrap_fractional_max_pool2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & indices, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FRACTIONAL_MAX_POOL2D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, kernel_size, output_size, indices, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, indices, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fractional_max_pool2d_backward_outf(dispatchKeySet, grad_output, self, kernel_size, output_size, indices, grad_input);
}

at::Tensor wrap_fractional_max_pool2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & indices) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fractional_max_pool2d_backward(dispatchKeySet, grad_output, self, kernel_size, output_size, indices);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_FRACTIONAL_MAX_POOL2D_BACKWARD, dispatchKeySet, grad_output, self, kernel_size, output_size, indices);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_fractional_max_pool3d_output(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & random_samples, at::Tensor & output, at::Tensor & indices) {
  ensure_materialized(self, random_samples, output, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fractional_max_pool3d_outf(dispatchKeySet, self, kernel_size, output_size, random_samples, output, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_fractional_max_pool3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & random_samples) {
  ensure_materialized(self, random_samples);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fractional_max_pool3d(dispatchKeySet, self, kernel_size, output_size, random_samples);
}

at::Tensor & wrap_fractional_max_pool3d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & indices, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FRACTIONAL_MAX_POOL3D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, kernel_size, output_size, indices, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, indices, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fractional_max_pool3d_backward_outf(dispatchKeySet, grad_output, self, kernel_size, output_size, indices, grad_input);
}

at::Tensor wrap_fractional_max_pool3d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & indices) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fractional_max_pool3d_backward(dispatchKeySet, grad_output, self, kernel_size, output_size, indices);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_FRACTIONAL_MAX_POOL3D_BACKWARD, dispatchKeySet, grad_output, self, kernel_size, output_size, indices);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_max_pool2d_with_indices_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, at::Tensor & out, at::Tensor & indices) {
  ensure_materialized(self, out, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_pool2d_with_indices_outf(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode, out, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_max_pool2d_with_indices(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_pool2d_with_indices(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor & wrap_max_pool2d_with_indices_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, const at::Tensor & indices, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MAX_POOL2D_WITH_INDICES_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, kernel_size, stride, padding, dilation, ceil_mode, indices, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, indices, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_pool2d_with_indices_backward_outf(dispatchKeySet, grad_output, self, kernel_size, stride, padding, dilation, ceil_mode, indices, grad_input);
}

at::Tensor wrap_max_pool2d_with_indices_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, const at::Tensor & indices) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max_pool2d_with_indices_backward(dispatchKeySet, grad_output, self, kernel_size, stride, padding, dilation, ceil_mode, indices);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MAX_POOL2D_WITH_INDICES_BACKWARD, dispatchKeySet, grad_output, self, kernel_size, stride, padding, dilation, ceil_mode, indices);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_max_pool3d_with_indices_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, at::Tensor & out, at::Tensor & indices) {
  ensure_materialized(self, out, indices);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_pool3d_with_indices_outf(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode, out, indices);
}

std::tuple<at::Tensor,at::Tensor> wrap_max_pool3d_with_indices(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_pool3d_with_indices(dispatchKeySet, self, kernel_size, stride, padding, dilation, ceil_mode);
}

at::Tensor & wrap_max_pool3d_with_indices_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, const at::Tensor & indices, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MAX_POOL3D_WITH_INDICES_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, kernel_size, stride, padding, dilation, ceil_mode, indices, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, indices, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_pool3d_with_indices_backward_outf(dispatchKeySet, grad_output, self, kernel_size, stride, padding, dilation, ceil_mode, indices, grad_input);
}

at::Tensor wrap_max_pool3d_with_indices_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, const at::Tensor & indices) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max_pool3d_with_indices_backward(dispatchKeySet, grad_output, self, kernel_size, stride, padding, dilation, ceil_mode, indices);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MAX_POOL3D_WITH_INDICES_BACKWARD, dispatchKeySet, grad_output, self, kernel_size, stride, padding, dilation, ceil_mode, indices);
}

at::Tensor & wrap_max_unpool2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MAX_UNPOOL2D_OUT, dispatchKeySet, self, indices, output_size, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, indices, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_unpool2d_outf(dispatchKeySet, self, indices, output_size, out);
}

at::Tensor wrap_max_unpool2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size) {
  if (trace.is_flushing()) {
    ensure_materialized(self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max_unpool2d(dispatchKeySet, self, indices, output_size);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MAX_UNPOOL2D, dispatchKeySet, self, indices, output_size);
}

at::Tensor & wrap_max_unpool2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MAX_UNPOOL2D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, indices, output_size, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, indices, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_unpool2d_backward_outf(dispatchKeySet, grad_output, self, indices, output_size, grad_input);
}

at::Tensor wrap_max_unpool2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max_unpool2d_backward(dispatchKeySet, grad_output, self, indices, output_size);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MAX_UNPOOL2D_BACKWARD, dispatchKeySet, grad_output, self, indices, output_size);
}

at::Tensor & wrap_max_unpool3d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size, at::IntArrayRef stride, at::IntArrayRef padding, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MAX_UNPOOL3D_OUT, dispatchKeySet, self, indices, output_size, stride, padding, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, indices, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_unpool3d_outf(dispatchKeySet, self, indices, output_size, stride, padding, out);
}

at::Tensor wrap_max_unpool3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size, at::IntArrayRef stride, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max_unpool3d(dispatchKeySet, self, indices, output_size, stride, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_MAX_UNPOOL3D, dispatchKeySet, self, indices, output_size, stride, padding);
}

at::Tensor & wrap_max_unpool3d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size, at::IntArrayRef stride, at::IntArrayRef padding, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_MAX_UNPOOL3D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, indices, output_size, stride, padding, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, indices, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::max_unpool3d_backward_outf(dispatchKeySet, grad_output, self, indices, output_size, stride, padding, grad_input);
}

at::Tensor wrap_max_unpool3d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & indices, at::IntArrayRef output_size, at::IntArrayRef stride, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self, indices);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::max_unpool3d_backward(dispatchKeySet, grad_output, self, indices, output_size, stride, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_MAX_UNPOOL3D_BACKWARD, dispatchKeySet, grad_output, self, indices, output_size, stride, padding);
}

at::Tensor & wrap_reflection_pad1d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REFLECTION_PAD1D_OUT, dispatchKeySet, self, padding, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::reflection_pad1d_outf(dispatchKeySet, self, padding, out);
}

at::Tensor wrap_reflection_pad1d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::reflection_pad1d(dispatchKeySet, self, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_REFLECTION_PAD1D, dispatchKeySet, self, padding);
}

at::Tensor & wrap_reflection_pad1d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REFLECTION_PAD1D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, padding, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::reflection_pad1d_backward_outf(dispatchKeySet, grad_output, self, padding, grad_input);
}

at::Tensor wrap_reflection_pad1d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::reflection_pad1d_backward(dispatchKeySet, grad_output, self, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_REFLECTION_PAD1D_BACKWARD, dispatchKeySet, grad_output, self, padding);
}

at::Tensor & wrap_reflection_pad2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REFLECTION_PAD2D_OUT, dispatchKeySet, self, padding, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::reflection_pad2d_outf(dispatchKeySet, self, padding, out);
}

at::Tensor wrap_reflection_pad2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::reflection_pad2d(dispatchKeySet, self, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_REFLECTION_PAD2D, dispatchKeySet, self, padding);
}

at::Tensor & wrap_reflection_pad2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REFLECTION_PAD2D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, padding, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::reflection_pad2d_backward_outf(dispatchKeySet, grad_output, self, padding, grad_input);
}

at::Tensor wrap_reflection_pad2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::reflection_pad2d_backward(dispatchKeySet, grad_output, self, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_REFLECTION_PAD2D_BACKWARD, dispatchKeySet, grad_output, self, padding);
}

at::Tensor & wrap_replication_pad1d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REPLICATION_PAD1D_OUT, dispatchKeySet, self, padding, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::replication_pad1d_outf(dispatchKeySet, self, padding, out);
}

at::Tensor & wrap_replication_pad1d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REPLICATION_PAD1D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, padding, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::replication_pad1d_backward_outf(dispatchKeySet, grad_output, self, padding, grad_input);
}

at::Tensor & wrap_replication_pad2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REPLICATION_PAD2D_OUT, dispatchKeySet, self, padding, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::replication_pad2d_outf(dispatchKeySet, self, padding, out);
}

at::Tensor & wrap_replication_pad2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REPLICATION_PAD2D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, padding, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::replication_pad2d_backward_outf(dispatchKeySet, grad_output, self, padding, grad_input);
}

at::Tensor wrap_replication_pad2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::replication_pad2d_backward(dispatchKeySet, grad_output, self, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_REPLICATION_PAD2D_BACKWARD, dispatchKeySet, grad_output, self, padding);
}

at::Tensor & wrap_replication_pad3d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REPLICATION_PAD3D_OUT, dispatchKeySet, self, padding, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::replication_pad3d_outf(dispatchKeySet, self, padding, out);
}

at::Tensor & wrap_replication_pad3d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_REPLICATION_PAD3D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, padding, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::replication_pad3d_backward_outf(dispatchKeySet, grad_output, self, padding, grad_input);
}

at::Tensor wrap_replication_pad3d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::replication_pad3d_backward(dispatchKeySet, grad_output, self, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_REPLICATION_PAD3D_BACKWARD, dispatchKeySet, grad_output, self, padding);
}

at::Tensor wrap_upsample_linear1d_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, c10::optional<at::IntArrayRef> output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_linear1d(dispatchKeySet, input, output_size, align_corners, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_UPSAMPLE_LINEAR1D_VEC, dispatchKeySet, input, output_size, align_corners, scale_factors);
}

at::Tensor wrap_upsample_linear1d_backward_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, c10::optional<at::IntArrayRef> output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_linear1d_backward(dispatchKeySet, grad_output, output_size, input_size, align_corners, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_UPSAMPLE_LINEAR1D_BACKWARD_VEC, dispatchKeySet, grad_output, output_size, input_size, align_corners, scale_factors);
}

at::Tensor wrap_upsample_bilinear2d_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, c10::optional<at::IntArrayRef> output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_bilinear2d(dispatchKeySet, input, output_size, align_corners, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_UPSAMPLE_BILINEAR2D_VEC, dispatchKeySet, input, output_size, align_corners, scale_factors);
}

at::Tensor wrap_upsample_bilinear2d_backward_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, c10::optional<at::IntArrayRef> output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_bilinear2d_backward(dispatchKeySet, grad_output, output_size, input_size, align_corners, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_UPSAMPLE_BILINEAR2D_BACKWARD_VEC, dispatchKeySet, grad_output, output_size, input_size, align_corners, scale_factors);
}

at::Tensor wrap_upsample_trilinear3d_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, c10::optional<at::IntArrayRef> output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_trilinear3d(dispatchKeySet, input, output_size, align_corners, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_UPSAMPLE_TRILINEAR3D_VEC, dispatchKeySet, input, output_size, align_corners, scale_factors);
}

at::Tensor wrap_upsample_trilinear3d_backward_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, c10::optional<at::IntArrayRef> output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_trilinear3d_backward(dispatchKeySet, grad_output, output_size, input_size, align_corners, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_UPSAMPLE_TRILINEAR3D_BACKWARD_VEC, dispatchKeySet, grad_output, output_size, input_size, align_corners, scale_factors);
}

at::Tensor wrap_upsample_bicubic2d_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, c10::optional<at::IntArrayRef> output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_bicubic2d(dispatchKeySet, input, output_size, align_corners, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_UPSAMPLE_BICUBIC2D_VEC, dispatchKeySet, input, output_size, align_corners, scale_factors);
}

at::Tensor wrap_upsample_bicubic2d_backward_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, c10::optional<at::IntArrayRef> output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_bicubic2d_backward(dispatchKeySet, grad_output, output_size, input_size, align_corners, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_UPSAMPLE_BICUBIC2D_BACKWARD_VEC, dispatchKeySet, grad_output, output_size, input_size, align_corners, scale_factors);
}

at::Tensor wrap_upsample_nearest1d_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, c10::optional<at::IntArrayRef> output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_nearest1d(dispatchKeySet, input, output_size, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_UPSAMPLE_NEAREST1D_VEC, dispatchKeySet, input, output_size, scale_factors);
}

at::Tensor wrap_upsample_nearest1d_backward_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, c10::optional<at::IntArrayRef> output_size, at::IntArrayRef input_size, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_nearest1d_backward(dispatchKeySet, grad_output, output_size, input_size, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_UPSAMPLE_NEAREST1D_BACKWARD_VEC, dispatchKeySet, grad_output, output_size, input_size, scale_factors);
}

at::Tensor wrap_upsample_nearest2d_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, c10::optional<at::IntArrayRef> output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_nearest2d(dispatchKeySet, input, output_size, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_UPSAMPLE_NEAREST2D_VEC, dispatchKeySet, input, output_size, scale_factors);
}

at::Tensor wrap_upsample_nearest2d_backward_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, c10::optional<at::IntArrayRef> output_size, at::IntArrayRef input_size, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_nearest2d_backward(dispatchKeySet, grad_output, output_size, input_size, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_UPSAMPLE_NEAREST2D_BACKWARD_VEC, dispatchKeySet, grad_output, output_size, input_size, scale_factors);
}

at::Tensor wrap_upsample_nearest3d_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, c10::optional<at::IntArrayRef> output_size, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(input);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_nearest3d(dispatchKeySet, input, output_size, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_UPSAMPLE_NEAREST3D_VEC, dispatchKeySet, input, output_size, scale_factors);
}

at::Tensor wrap_upsample_nearest3d_backward_vec(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, c10::optional<at::IntArrayRef> output_size, at::IntArrayRef input_size, c10::optional<at::ArrayRef<double>> scale_factors) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_nearest3d_backward(dispatchKeySet, grad_output, output_size, input_size, scale_factors);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_UPSAMPLE_NEAREST3D_BACKWARD_VEC, dispatchKeySet, grad_output, output_size, input_size, scale_factors);
}

at::Tensor & wrap_upsample_linear1d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_LINEAR1D_OUT, dispatchKeySet, self, output_size, align_corners, scales, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_linear1d_outf(dispatchKeySet, self, output_size, align_corners, scales, out);
}

at::Tensor & wrap_upsample_linear1d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_LINEAR1D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, output_size, input_size, align_corners, scales, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_linear1d_backward_outf(dispatchKeySet, grad_output, output_size, input_size, align_corners, scales, grad_input);
}

at::Tensor & wrap_upsample_bilinear2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_BILINEAR2D_OUT, dispatchKeySet, self, output_size, align_corners, scales_h, scales_w, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_bilinear2d_outf(dispatchKeySet, self, output_size, align_corners, scales_h, scales_w, out);
}

at::Tensor wrap_upsample_bilinear2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_bilinear2d(dispatchKeySet, self, output_size, align_corners, scales_h, scales_w);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_UPSAMPLE_BILINEAR2D, dispatchKeySet, self, output_size, align_corners, scales_h, scales_w);
}

at::Tensor & wrap_upsample_bilinear2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_BILINEAR2D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, output_size, input_size, align_corners, scales_h, scales_w, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_bilinear2d_backward_outf(dispatchKeySet, grad_output, output_size, input_size, align_corners, scales_h, scales_w, grad_input);
}

at::Tensor & wrap_upsample_bicubic2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_BICUBIC2D_OUT, dispatchKeySet, self, output_size, align_corners, scales_h, scales_w, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_bicubic2d_outf(dispatchKeySet, self, output_size, align_corners, scales_h, scales_w, out);
}

at::Tensor & wrap_upsample_bicubic2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_BICUBIC2D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, output_size, input_size, align_corners, scales_h, scales_w, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_bicubic2d_backward_outf(dispatchKeySet, grad_output, output_size, input_size, align_corners, scales_h, scales_w, grad_input);
}

at::Tensor & wrap_upsample_trilinear3d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, bool align_corners, c10::optional<double> scales_d, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_TRILINEAR3D_OUT, dispatchKeySet, self, output_size, align_corners, scales_d, scales_h, scales_w, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_trilinear3d_outf(dispatchKeySet, self, output_size, align_corners, scales_d, scales_h, scales_w, out);
}

at::Tensor & wrap_upsample_trilinear3d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<double> scales_d, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_TRILINEAR3D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, output_size, input_size, align_corners, scales_d, scales_h, scales_w, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_trilinear3d_backward_outf(dispatchKeySet, grad_output, output_size, input_size, align_corners, scales_d, scales_h, scales_w, grad_input);
}

at::Tensor & wrap_upsample_nearest1d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_NEAREST1D_OUT, dispatchKeySet, self, output_size, scales, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_nearest1d_outf(dispatchKeySet, self, output_size, scales, out);
}

at::Tensor & wrap_upsample_nearest1d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, c10::optional<double> scales, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_NEAREST1D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, output_size, input_size, scales, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_nearest1d_backward_outf(dispatchKeySet, grad_output, output_size, input_size, scales, grad_input);
}

at::Tensor & wrap_upsample_nearest2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_NEAREST2D_OUT, dispatchKeySet, self, output_size, scales_h, scales_w, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_nearest2d_outf(dispatchKeySet, self, output_size, scales_h, scales_w, out);
}

at::Tensor wrap_upsample_nearest2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales_h, c10::optional<double> scales_w) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_nearest2d(dispatchKeySet, self, output_size, scales_h, scales_w);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_UPSAMPLE_NEAREST2D, dispatchKeySet, self, output_size, scales_h, scales_w);
}

at::Tensor & wrap_upsample_nearest2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_NEAREST2D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, output_size, input_size, scales_h, scales_w, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_nearest2d_backward_outf(dispatchKeySet, grad_output, output_size, input_size, scales_h, scales_w, grad_input);
}

at::Tensor & wrap_upsample_nearest3d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales_d, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_NEAREST3D_OUT, dispatchKeySet, self, output_size, scales_d, scales_h, scales_w, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_nearest3d_outf(dispatchKeySet, self, output_size, scales_d, scales_h, scales_w, out);
}

at::Tensor wrap_upsample_nearest3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, c10::optional<double> scales_d, c10::optional<double> scales_h, c10::optional<double> scales_w) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::upsample_nearest3d(dispatchKeySet, self, output_size, scales_d, scales_h, scales_w);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_UPSAMPLE_NEAREST3D, dispatchKeySet, self, output_size, scales_d, scales_h, scales_w);
}

at::Tensor & wrap_upsample_nearest3d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef output_size, at::IntArrayRef input_size, c10::optional<double> scales_d, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_UPSAMPLE_NEAREST3D_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, output_size, input_size, scales_d, scales_h, scales_w, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::upsample_nearest3d_backward_outf(dispatchKeySet, grad_output, output_size, input_size, scales_d, scales_h, scales_w, grad_input);
}

at::Tensor & wrap_sigmoid_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SIGMOID_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, output, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::sigmoid_backward_outf(dispatchKeySet, grad_output, output, grad_input);
}

at::Tensor wrap_sigmoid_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::sigmoid_backward(dispatchKeySet, grad_output, output);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_SIGMOID_BACKWARD, dispatchKeySet, grad_output, output);
}

at::Tensor & wrap_logit_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, c10::optional<double> eps, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LOGIT_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, self, eps, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, self, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::logit_backward_outf(dispatchKeySet, grad_output, self, eps, grad_input);
}

at::Tensor wrap_logit_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, c10::optional<double> eps) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::logit_backward(dispatchKeySet, grad_output, self, eps);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_LOGIT_BACKWARD, dispatchKeySet, grad_output, self, eps);
}

at::Tensor & wrap_tanh_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_TANH_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, output, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::tanh_backward_outf(dispatchKeySet, grad_output, output, grad_input);
}

at::Tensor wrap_tanh_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & output) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output, output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::tanh_backward(dispatchKeySet, grad_output, output);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_TANH_BACKWARD, dispatchKeySet, grad_output, output);
}

at::Tensor & wrap_slow_conv_transpose2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef dilation, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SLOW_CONV_TRANSPOSE2D_OUT, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, output_padding, dilation, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, weight, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv_transpose2d_outf(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, output_padding, dilation, out);
}

at::Tensor wrap_slow_conv_transpose2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef dilation) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::slow_conv_transpose2d(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, output_padding, dilation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SLOW_CONV_TRANSPOSE2D, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, output_padding, dilation);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> wrap_slow_conv_transpose2d_backward_grad_output(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef dilation, const at::Tensor & columns, const at::Tensor & ones, at::Tensor & grad_input, at::Tensor & grad_weight, at::Tensor & grad_bias) {
  ensure_materialized(grad_output, self, weight, columns, ones, grad_input, grad_weight, grad_bias);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv_transpose2d_backward_outf(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, output_padding, dilation, columns, ones, grad_input, grad_weight, grad_bias);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_slow_conv_transpose2d_backward_output_mask(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef dilation, const at::Tensor & columns, const at::Tensor & ones, std::array<bool,3> output_mask) {
  ensure_materialized(grad_output, self, weight, columns, ones);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv_transpose2d_backward(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, output_padding, dilation, columns, ones, output_mask);
}

at::Tensor & wrap_slow_conv_transpose3d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef dilation, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SLOW_CONV_TRANSPOSE3D_OUT, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, output_padding, dilation, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, weight, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv_transpose3d_outf(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, output_padding, dilation, out);
}

at::Tensor wrap_slow_conv_transpose3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef dilation) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::slow_conv_transpose3d(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, output_padding, dilation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SLOW_CONV_TRANSPOSE3D, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, output_padding, dilation);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> wrap_slow_conv_transpose3d_backward_grad_output(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef dilation, const at::Tensor & finput, const at::Tensor & fgrad_input, at::Tensor & grad_input, at::Tensor & grad_weight, at::Tensor & grad_bias) {
  ensure_materialized(grad_output, self, weight, finput, fgrad_input, grad_input, grad_weight, grad_bias);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv_transpose3d_backward_outf(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, output_padding, dilation, finput, fgrad_input, grad_input, grad_weight, grad_bias);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_slow_conv_transpose3d_backward_output_mask(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef dilation, const at::Tensor & finput, const at::Tensor & fgrad_input, std::array<bool,3> output_mask) {
  ensure_materialized(grad_output, self, weight, finput, fgrad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv_transpose3d_backward(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, output_padding, dilation, finput, fgrad_input, output_mask);
}

at::Tensor & wrap_thnn_conv2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_THNN_CONV2D_OUT, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, weight, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::thnn_conv2d_outf(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, out);
}

at::Tensor wrap_thnn_conv2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::thnn_conv2d(dispatchKeySet, self, weight, kernel_size, bias, stride, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_THNN_CONV2D, dispatchKeySet, self, weight, kernel_size, bias, stride, padding);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> wrap_thnn_conv2d_forward_output(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::Tensor & output, at::Tensor & finput, at::Tensor & fgrad_input) {
  ensure_materialized(self, weight, output, finput, fgrad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::thnn_conv2d_forward_outf(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, output, finput, fgrad_input);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_thnn_conv2d_forward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding) {
  ensure_materialized(self, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::thnn_conv2d_forward(dispatchKeySet, self, weight, kernel_size, bias, stride, padding);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> wrap_thnn_conv2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, const at::Tensor & finput, const at::Tensor & fgrad_input, at::Tensor & grad_input, at::Tensor & grad_weight, at::Tensor & grad_bias) {
  ensure_materialized(grad_output, self, weight, finput, fgrad_input, grad_input, grad_weight, grad_bias);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::thnn_conv2d_backward_outf(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, finput, fgrad_input, grad_input, grad_weight, grad_bias);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_thnn_conv2d_backward_output_mask(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, const at::Tensor & finput, const at::Tensor & fgrad_input, std::array<bool,3> output_mask) {
  ensure_materialized(grad_output, self, weight, finput, fgrad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::thnn_conv2d_backward(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, finput, fgrad_input, output_mask);
}

at::Tensor & wrap_thnn_conv_depthwise2d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_THNN_CONV_DEPTHWISE2D_OUT, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, weight, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::thnn_conv_depthwise2d_outf(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation, out);
}

at::Tensor wrap_thnn_conv_depthwise2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::thnn_conv_depthwise2d(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_THNN_CONV_DEPTHWISE2D, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation);
}

at::Tensor & wrap_thnn_conv_depthwise2d_forward_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_THNN_CONV_DEPTHWISE2D_FORWARD_OUT, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, weight, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::thnn_conv_depthwise2d_forward_outf(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation, out);
}

at::Tensor wrap_thnn_conv_depthwise2d_forward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::thnn_conv_depthwise2d_forward(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_THNN_CONV_DEPTHWISE2D_FORWARD, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_thnn_conv_depthwise2d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, at::Tensor & grad_input, at::Tensor & grad_weight) {
  ensure_materialized(grad_output, self, weight, grad_input, grad_weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::thnn_conv_depthwise2d_backward_outf(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, dilation, grad_input, grad_weight);
}

std::tuple<at::Tensor,at::Tensor> wrap_thnn_conv_depthwise2d_backward_output_mask(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, std::array<bool,2> output_mask) {
  ensure_materialized(grad_output, self, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::thnn_conv_depthwise2d_backward(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, dilation, output_mask);
}

at::Tensor wrap_conv_depthwise3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::conv_depthwise3d(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_CONV_DEPTHWISE3D, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> wrap_conv_depthwise3d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, at::Tensor & grad_input, at::Tensor & grad_weight, at::Tensor & grad_bias) {
  ensure_materialized(grad_output, self, weight, grad_input, grad_weight, grad_bias);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::conv_depthwise3d_backward_outf(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, dilation, grad_input, grad_weight, grad_bias);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_conv_depthwise3d_backward_output_mask(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, std::array<bool,3> output_mask) {
  ensure_materialized(grad_output, self, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::conv_depthwise3d_backward(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, dilation, output_mask);
}

at::Tensor & wrap_slow_conv3d_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SLOW_CONV3D_OUT, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, weight, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv3d_outf(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, out);
}

at::Tensor wrap_slow_conv3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::slow_conv3d(dispatchKeySet, self, weight, kernel_size, bias, stride, padding);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SLOW_CONV3D, dispatchKeySet, self, weight, kernel_size, bias, stride, padding);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> wrap_slow_conv3d_forward_output(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::Tensor & output, at::Tensor & finput, at::Tensor & fgrad_input) {
  ensure_materialized(self, weight, output, finput, fgrad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv3d_forward_outf(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, output, finput, fgrad_input);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_slow_conv3d_forward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding) {
  ensure_materialized(self, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv3d_forward(dispatchKeySet, self, weight, kernel_size, bias, stride, padding);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> wrap_slow_conv3d_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, const at::Tensor & finput, const at::Tensor & fgrad_input, at::Tensor & grad_input, at::Tensor & grad_weight, at::Tensor & grad_bias) {
  ensure_materialized(grad_output, self, weight, finput, fgrad_input, grad_input, grad_weight, grad_bias);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv3d_backward_outf(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, finput, fgrad_input, grad_input, grad_weight, grad_bias);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_slow_conv3d_backward_output_mask(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, const at::Tensor & finput, const at::Tensor & fgrad_input, std::array<bool,3> output_mask) {
  ensure_materialized(grad_output, self, weight, finput, fgrad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv3d_backward(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, finput, fgrad_input, output_mask);
}

at::Tensor wrap_slow_conv_dilated2d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::slow_conv_dilated2d(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SLOW_CONV_DILATED2D, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_slow_conv_dilated2d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, std::array<bool,3> output_mask) {
  ensure_materialized(grad_output, self, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv_dilated2d_backward(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, dilation, output_mask);
}

at::Tensor wrap_slow_conv_dilated3d(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
  if (trace.is_flushing()) {
    ensure_materialized(self, weight);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::slow_conv_dilated3d(dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SLOW_CONV_DILATED3D, dispatchKeySet, self, weight, kernel_size, bias, stride, padding, dilation);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_slow_conv_dilated3d_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, std::array<bool,3> output_mask) {
  ensure_materialized(grad_output, self, weight);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::slow_conv_dilated3d_backward(dispatchKeySet, grad_output, self, weight, kernel_size, stride, padding, dilation, output_mask);
}

at::Tensor & wrap_col2im_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, at::IntArrayRef kernel_size, at::IntArrayRef dilation, at::IntArrayRef padding, at::IntArrayRef stride, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COL2IM_OUT, dispatchKeySet, self, output_size, kernel_size, dilation, padding, stride, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::col2im_outf(dispatchKeySet, self, output_size, kernel_size, dilation, padding, stride, out);
}

at::Tensor wrap_col2im(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef output_size, at::IntArrayRef kernel_size, at::IntArrayRef dilation, at::IntArrayRef padding, at::IntArrayRef stride) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::col2im(dispatchKeySet, self, output_size, kernel_size, dilation, padding, stride);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_COL2IM, dispatchKeySet, self, output_size, kernel_size, dilation, padding, stride);
}

at::Tensor & wrap_col2im_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef kernel_size, at::IntArrayRef dilation, at::IntArrayRef padding, at::IntArrayRef stride, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COL2IM_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, kernel_size, dilation, padding, stride, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::col2im_backward_outf(dispatchKeySet, grad_output, kernel_size, dilation, padding, stride, grad_input);
}

at::Tensor wrap_col2im_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef kernel_size, at::IntArrayRef dilation, at::IntArrayRef padding, at::IntArrayRef stride) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::col2im_backward(dispatchKeySet, grad_output, kernel_size, dilation, padding, stride);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_COL2IM_BACKWARD, dispatchKeySet, grad_output, kernel_size, dilation, padding, stride);
}

at::Tensor wrap_column_stack(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::column_stack(dispatchKeySet, tensors));
}

at::Tensor & wrap_column_stack_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_COLUMN_STACK_OUT, dispatchKeySet, tensors, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::column_stack_outf(dispatchKeySet, tensors, out);
}

at::Tensor & wrap_im2col_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef dilation, at::IntArrayRef padding, at::IntArrayRef stride, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_IM2COL_OUT, dispatchKeySet, self, kernel_size, dilation, padding, stride, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::im2col_outf(dispatchKeySet, self, kernel_size, dilation, padding, stride, out);
}

at::Tensor wrap_im2col(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef dilation, at::IntArrayRef padding, at::IntArrayRef stride) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::im2col(dispatchKeySet, self, kernel_size, dilation, padding, stride);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_IM2COL, dispatchKeySet, self, kernel_size, dilation, padding, stride);
}

at::Tensor & wrap_im2col_backward_grad_input(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef input_size, at::IntArrayRef kernel_size, at::IntArrayRef dilation, at::IntArrayRef padding, at::IntArrayRef stride, at::Tensor & grad_input) {
  auto tt = is_torchy(grad_input);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_IM2COL_BACKWARD_GRAD_INPUT, dispatchKeySet, grad_output, input_size, kernel_size, dilation, padding, stride, grad_input);
    return grad_input;
  }
  will_override(grad_input);
  ensure_materialized(grad_output, grad_input);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::im2col_backward_outf(dispatchKeySet, grad_output, input_size, kernel_size, dilation, padding, stride, grad_input);
}

at::Tensor wrap_im2col_backward(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::IntArrayRef input_size, at::IntArrayRef kernel_size, at::IntArrayRef dilation, at::IntArrayRef padding, at::IntArrayRef stride) {
  if (trace.is_flushing()) {
    ensure_materialized(grad_output);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::im2col_backward(dispatchKeySet, grad_output, input_size, kernel_size, dilation, padding, stride);
  }
  return at::detail::make_tensor<TorchyTensor>(grad_output.dtype(), grad_output.device(), H_IM2COL_BACKWARD, dispatchKeySet, grad_output, input_size, kernel_size, dilation, padding, stride);
}

at::Tensor wrap_isfinite(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::isfinite(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ISFINITE, dispatchKeySet, self);
}

at::Tensor wrap_isinf(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::isinf(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ISINF, dispatchKeySet, self);
}

void wrap_record_stream(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Stream s) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::record_stream(dispatchKeySet, self, s);
}

at::Tensor wrap_isposinf(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::isposinf(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ISPOSINF, dispatchKeySet, self);
}

at::Tensor & wrap_isposinf_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ISPOSINF_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::isposinf_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_isneginf(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::isneginf(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_ISNEGINF, dispatchKeySet, self);
}

at::Tensor & wrap_isneginf_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_ISNEGINF_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::isneginf_outf(dispatchKeySet, self, out);
}

at::Tensor wrap__add_batch_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t batch_dim, int64_t level) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_add_batch_dim(dispatchKeySet, self, batch_dim, level);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__ADD_BATCH_DIM, dispatchKeySet, self, batch_dim, level);
}

at::Tensor wrap__remove_batch_dim(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t level, int64_t batch_size, int64_t out_dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_remove_batch_dim(dispatchKeySet, self, level, batch_size, out_dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__REMOVE_BATCH_DIM, dispatchKeySet, self, level, batch_size, out_dim);
}

at::Tensor & wrap_special_entr_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SPECIAL_ENTR_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::special_entr_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_special_expm1(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::special_expm1(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SPECIAL_EXPM1, dispatchKeySet, self);
}

at::Tensor & wrap_special_expm1_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SPECIAL_EXPM1_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::special_expm1_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_special_exp2(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::special_exp2(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SPECIAL_EXP2, dispatchKeySet, self);
}

at::Tensor & wrap_special_exp2_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SPECIAL_EXP2_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::special_exp2_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_special_gammaln(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::special_gammaln(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SPECIAL_GAMMALN, dispatchKeySet, self);
}

at::Tensor & wrap_special_gammaln_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SPECIAL_GAMMALN_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::special_gammaln_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_special_erf(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::special_erf(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SPECIAL_ERF, dispatchKeySet, self);
}

at::Tensor & wrap_special_erf_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SPECIAL_ERF_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::special_erf_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_special_erfc(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::special_erfc(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SPECIAL_ERFC, dispatchKeySet, self);
}

at::Tensor & wrap_special_erfc_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SPECIAL_ERFC_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::special_erfc_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_special_erfinv(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::special_erfinv(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SPECIAL_ERFINV, dispatchKeySet, self);
}

at::Tensor & wrap_special_erfinv_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SPECIAL_ERFINV_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::special_erfinv_outf(dispatchKeySet, self, out);
}

at::Tensor & wrap_special_i0e_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SPECIAL_I0E_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::special_i0e_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_special_logit(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<double> eps) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::special_logit(dispatchKeySet, self, eps);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SPECIAL_LOGIT, dispatchKeySet, self, eps);
}

at::Tensor & wrap_special_logit_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<double> eps, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SPECIAL_LOGIT_OUT, dispatchKeySet, self, eps, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::special_logit_outf(dispatchKeySet, self, eps, out);
}

at::Tensor wrap_special_expit(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::special_expit(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_SPECIAL_EXPIT, dispatchKeySet, self);
}

at::Tensor & wrap_special_expit_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_SPECIAL_EXPIT_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::special_expit_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_fft_fft(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_fft(dispatchKeySet, self, n, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_FFT, dispatchKeySet, self, n, dim, norm);
}

at::Tensor & wrap_fft_fft_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_FFT_OUT, dispatchKeySet, self, n, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_fft_outf(dispatchKeySet, self, n, dim, norm, out);
}

at::Tensor wrap_fft_ifft(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_ifft(dispatchKeySet, self, n, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_IFFT, dispatchKeySet, self, n, dim, norm);
}

at::Tensor & wrap_fft_ifft_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_IFFT_OUT, dispatchKeySet, self, n, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_ifft_outf(dispatchKeySet, self, n, dim, norm, out);
}

at::Tensor wrap_fft_rfft(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_rfft(dispatchKeySet, self, n, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_RFFT, dispatchKeySet, self, n, dim, norm);
}

at::Tensor & wrap_fft_rfft_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_RFFT_OUT, dispatchKeySet, self, n, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_rfft_outf(dispatchKeySet, self, n, dim, norm, out);
}

at::Tensor wrap_fft_irfft(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_irfft(dispatchKeySet, self, n, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_IRFFT, dispatchKeySet, self, n, dim, norm);
}

at::Tensor & wrap_fft_irfft_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_IRFFT_OUT, dispatchKeySet, self, n, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_irfft_outf(dispatchKeySet, self, n, dim, norm, out);
}

at::Tensor wrap_fft_hfft(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_hfft(dispatchKeySet, self, n, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_HFFT, dispatchKeySet, self, n, dim, norm);
}

at::Tensor & wrap_fft_hfft_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_HFFT_OUT, dispatchKeySet, self, n, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_hfft_outf(dispatchKeySet, self, n, dim, norm, out);
}

at::Tensor wrap_fft_ihfft(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_ihfft(dispatchKeySet, self, n, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_IHFFT, dispatchKeySet, self, n, dim, norm);
}

at::Tensor & wrap_fft_ihfft_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_IHFFT_OUT, dispatchKeySet, self, n, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_ihfft_outf(dispatchKeySet, self, n, dim, norm, out);
}

at::Tensor wrap_fft_fft2(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, at::IntArrayRef dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_fft2(dispatchKeySet, self, s, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_FFT2, dispatchKeySet, self, s, dim, norm);
}

at::Tensor & wrap_fft_fft2_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, at::IntArrayRef dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_FFT2_OUT, dispatchKeySet, self, s, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_fft2_outf(dispatchKeySet, self, s, dim, norm, out);
}

at::Tensor wrap_fft_ifft2(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, at::IntArrayRef dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_ifft2(dispatchKeySet, self, s, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_IFFT2, dispatchKeySet, self, s, dim, norm);
}

at::Tensor & wrap_fft_ifft2_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, at::IntArrayRef dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_IFFT2_OUT, dispatchKeySet, self, s, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_ifft2_outf(dispatchKeySet, self, s, dim, norm, out);
}

at::Tensor wrap_fft_rfft2(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, at::IntArrayRef dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_rfft2(dispatchKeySet, self, s, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_RFFT2, dispatchKeySet, self, s, dim, norm);
}

at::Tensor & wrap_fft_rfft2_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, at::IntArrayRef dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_RFFT2_OUT, dispatchKeySet, self, s, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_rfft2_outf(dispatchKeySet, self, s, dim, norm, out);
}

at::Tensor wrap_fft_irfft2(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, at::IntArrayRef dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_irfft2(dispatchKeySet, self, s, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_IRFFT2, dispatchKeySet, self, s, dim, norm);
}

at::Tensor & wrap_fft_irfft2_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, at::IntArrayRef dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_IRFFT2_OUT, dispatchKeySet, self, s, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_irfft2_outf(dispatchKeySet, self, s, dim, norm, out);
}

at::Tensor wrap_fft_fftn(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_fftn(dispatchKeySet, self, s, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_FFTN, dispatchKeySet, self, s, dim, norm);
}

at::Tensor & wrap_fft_fftn_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_FFTN_OUT, dispatchKeySet, self, s, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_fftn_outf(dispatchKeySet, self, s, dim, norm, out);
}

at::Tensor wrap_fft_ifftn(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_ifftn(dispatchKeySet, self, s, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_IFFTN, dispatchKeySet, self, s, dim, norm);
}

at::Tensor & wrap_fft_ifftn_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_IFFTN_OUT, dispatchKeySet, self, s, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_ifftn_outf(dispatchKeySet, self, s, dim, norm, out);
}

at::Tensor wrap_fft_rfftn(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_rfftn(dispatchKeySet, self, s, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_RFFTN, dispatchKeySet, self, s, dim, norm);
}

at::Tensor & wrap_fft_rfftn_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_RFFTN_OUT, dispatchKeySet, self, s, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_rfftn_outf(dispatchKeySet, self, s, dim, norm, out);
}

at::Tensor wrap_fft_irfftn(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<std::string> norm) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_irfftn(dispatchKeySet, self, s, dim, norm);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_IRFFTN, dispatchKeySet, self, s, dim, norm);
}

at::Tensor & wrap_fft_irfftn_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<std::string> norm, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_IRFFTN_OUT, dispatchKeySet, self, s, dim, norm, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_irfftn_outf(dispatchKeySet, self, s, dim, norm, out);
}

at::Tensor wrap_fft_fftfreq(c10::DispatchKeySet dispatchKeySet, int64_t n, double d, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::fft_fftfreq(dispatchKeySet, n, d, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_fft_fftfreq_out(c10::DispatchKeySet dispatchKeySet, int64_t n, double d, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_FFTFREQ_OUT, dispatchKeySet, n, d, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_fftfreq_outf(dispatchKeySet, n, d, out);
}

at::Tensor wrap_fft_rfftfreq(c10::DispatchKeySet dispatchKeySet, int64_t n, double d, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::fft_rfftfreq(dispatchKeySet, n, d, dtype, layout, device, pin_memory));
}

at::Tensor & wrap_fft_rfftfreq_out(c10::DispatchKeySet dispatchKeySet, int64_t n, double d, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_FFT_RFFTFREQ_OUT, dispatchKeySet, n, d, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::fft_rfftfreq_outf(dispatchKeySet, n, d, out);
}

at::Tensor wrap_fft_fftshift(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_fftshift(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_FFTSHIFT, dispatchKeySet, self, dim);
}

at::Tensor wrap_fft_ifftshift(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> dim) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::fft_ifftshift(dispatchKeySet, self, dim);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_FFT_IFFTSHIFT, dispatchKeySet, self, dim);
}

at::Tensor wrap_linalg_cholesky(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_cholesky(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_CHOLESKY, dispatchKeySet, self);
}

at::Tensor & wrap_linalg_cholesky_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_CHOLESKY_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_cholesky_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_linalg_det(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_det(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_DET, dispatchKeySet, self);
}

at::Tensor & wrap_linalg_det_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_DET_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_det_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_det(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::det(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_DET, dispatchKeySet, self);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> wrap_linalg_lstsq(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & b, c10::optional<double> cond, c10::optional<std::string> driver) {
  ensure_materialized(self, b);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_lstsq(dispatchKeySet, self, b, cond, driver);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> wrap_linalg_lstsq_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & b, c10::optional<double> cond, c10::optional<std::string> driver, at::Tensor & solution, at::Tensor & residuals, at::Tensor & rank, at::Tensor & singular_values) {
  ensure_materialized(self, b, solution, residuals, rank, singular_values);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_lstsq_outf(dispatchKeySet, self, b, cond, driver, solution, residuals, rank, singular_values);
}

at::Tensor & wrap__lstsq_helper_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Tensor & rank, at::Tensor & singular_values, at::Tensor & infos, const at::Tensor & a, double cond, std::string driver_name) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__LSTSQ_HELPER_, dispatchKeySet, self, rank, singular_values, infos, a, cond, driver_name);
    return self;
  }
  will_override(self);
  ensure_materialized(self, rank, singular_values, infos, a);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_lstsq_helper_(dispatchKeySet, self, rank, singular_values, infos, a, cond, driver_name);
}

std::tuple<at::Tensor,at::Tensor> wrap_linalg_slogdet(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_slogdet(dispatchKeySet, self);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_linalg_slogdet_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & sign, at::Tensor & logabsdet) {
  ensure_materialized(self, sign, logabsdet);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_slogdet_outf(dispatchKeySet, self, sign, logabsdet);
}

std::tuple<at::Tensor,at::Tensor> wrap_linalg_eig(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_eig(dispatchKeySet, self);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_linalg_eig_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & eigenvalues, at::Tensor & eigenvectors) {
  ensure_materialized(self, eigenvalues, eigenvectors);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_eig_outf(dispatchKeySet, self, eigenvalues, eigenvectors);
}

at::Tensor wrap_linalg_eigvals(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_eigvals(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_EIGVALS, dispatchKeySet, self);
}

at::Tensor & wrap_linalg_eigvals_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_EIGVALS_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_eigvals_outf(dispatchKeySet, self, out);
}

std::tuple<at::Tensor,at::Tensor> wrap_linalg_eigh(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string UPLO) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_eigh(dispatchKeySet, self, UPLO);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_linalg_eigh_eigvals(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string UPLO, at::Tensor & eigvals, at::Tensor & eigvecs) {
  ensure_materialized(self, eigvals, eigvecs);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_eigh_outf(dispatchKeySet, self, UPLO, eigvals, eigvecs);
}

at::Tensor wrap_linalg_eigvalsh(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string UPLO) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_eigvalsh(dispatchKeySet, self, UPLO);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_EIGVALSH, dispatchKeySet, self, UPLO);
}

at::Tensor & wrap_linalg_eigvalsh_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string UPLO, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_EIGVALSH_OUT, dispatchKeySet, self, UPLO, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_eigvalsh_outf(dispatchKeySet, self, UPLO, out);
}

at::Tensor wrap_linalg_householder_product(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & tau) {
  if (trace.is_flushing()) {
    ensure_materialized(input, tau);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_householder_product(dispatchKeySet, input, tau);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_LINALG_HOUSEHOLDER_PRODUCT, dispatchKeySet, input, tau);
}

at::Tensor & wrap_linalg_householder_product_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & tau, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_HOUSEHOLDER_PRODUCT_OUT, dispatchKeySet, input, tau, out);
    return out;
  }
  will_override(out);
  ensure_materialized(input, tau, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_householder_product_outf(dispatchKeySet, input, tau, out);
}

at::Tensor & wrap__linalg_inv_out_helper_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Tensor & infos_lu, at::Tensor & infos_getri) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__LINALG_INV_OUT_HELPER_, dispatchKeySet, self, infos_lu, infos_getri);
    return self;
  }
  will_override(self);
  ensure_materialized(self, infos_lu, infos_getri);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_linalg_inv_out_helper_(dispatchKeySet, self, infos_lu, infos_getri);
}

at::Tensor wrap_linalg_inv(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_inv(dispatchKeySet, self);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_INV, dispatchKeySet, self);
}

at::Tensor & wrap_linalg_inv_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_INV_OUT, dispatchKeySet, self, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_inv_outf(dispatchKeySet, self, out);
}

at::Tensor wrap_inner(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::inner(dispatchKeySet, self, other);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_INNER, dispatchKeySet, self, other);
}

at::Tensor & wrap_inner_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_INNER_OUT, dispatchKeySet, self, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::inner_outf(dispatchKeySet, self, other, out);
}

at::Tensor wrap_outer(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & vec2) {
  if (trace.is_flushing()) {
    ensure_materialized(self, vec2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::outer(dispatchKeySet, self, vec2);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_OUTER, dispatchKeySet, self, vec2);
}

at::Tensor & wrap_outer_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & vec2, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_OUTER_OUT, dispatchKeySet, self, vec2, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, vec2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::outer_outf(dispatchKeySet, self, vec2, out);
}

at::Tensor wrap_ger(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & vec2) {
  if (trace.is_flushing()) {
    ensure_materialized(self, vec2);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::ger(dispatchKeySet, self, vec2);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_GER, dispatchKeySet, self, vec2);
}

at::Tensor & wrap_ger_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & vec2, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_GER_OUT, dispatchKeySet, self, vec2, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, vec2, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::ger_outf(dispatchKeySet, self, vec2, out);
}

at::Tensor wrap_linalg_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & ord, c10::optional<at::IntArrayRef> dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_norm(dispatchKeySet, self, ord, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_NORM, dispatchKeySet, self, ord, dim, keepdim, dtype);
}

at::Tensor wrap_linalg_norm_ord_str(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string ord, c10::optional<at::IntArrayRef> dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_norm(dispatchKeySet, self, ord, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_NORM_ORD_STR, dispatchKeySet, self, ord, dim, keepdim, dtype);
}

at::Tensor & wrap_linalg_norm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & ord, c10::optional<at::IntArrayRef> dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_NORM_OUT, dispatchKeySet, self, ord, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_norm_outf(dispatchKeySet, self, ord, dim, keepdim, dtype, out);
}

at::Tensor & wrap_linalg_norm_ord_str_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string ord, c10::optional<at::IntArrayRef> dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_NORM_ORD_STR_OUT, dispatchKeySet, self, ord, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_norm_outf(dispatchKeySet, self, ord, dim, keepdim, dtype, out);
}

at::Tensor wrap_linalg_vector_norm(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & ord, c10::optional<at::IntArrayRef> dim, bool keepdim, c10::optional<at::ScalarType> dtype) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_vector_norm(dispatchKeySet, self, ord, dim, keepdim, dtype);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_VECTOR_NORM, dispatchKeySet, self, ord, dim, keepdim, dtype);
}

at::Tensor & wrap_linalg_vector_norm_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & ord, c10::optional<at::IntArrayRef> dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_VECTOR_NORM_OUT, dispatchKeySet, self, ord, dim, keepdim, dtype, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_vector_norm_outf(dispatchKeySet, self, ord, dim, keepdim, dtype, out);
}

std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> wrap_linalg_svd_U(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool full_matrices, bool compute_uv, at::Tensor & U, at::Tensor & S, at::Tensor & V) {
  ensure_materialized(self, U, S, V);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_svd_outf(dispatchKeySet, self, full_matrices, compute_uv, U, S, V);
}

std::tuple<at::Tensor,at::Tensor,at::Tensor> wrap_linalg_svd(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool full_matrices, bool compute_uv) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_svd(dispatchKeySet, self, full_matrices, compute_uv);
}

at::Tensor wrap_linalg_cond(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_cond(dispatchKeySet, self, p);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_COND, dispatchKeySet, self, p);
}

at::Tensor & wrap_linalg_cond_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_COND_OUT, dispatchKeySet, self, p, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_cond_outf(dispatchKeySet, self, p, out);
}

at::Tensor wrap_linalg_cond_p_str(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string p) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_cond(dispatchKeySet, self, p);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_COND_P_STR, dispatchKeySet, self, p);
}

at::Tensor & wrap_linalg_cond_p_str_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string p, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_COND_P_STR_OUT, dispatchKeySet, self, p, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_cond_outf(dispatchKeySet, self, p, out);
}

at::Tensor wrap_linalg_pinv(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double rcond, bool hermitian) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_pinv(dispatchKeySet, self, rcond, hermitian);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_PINV, dispatchKeySet, self, rcond, hermitian);
}

at::Tensor wrap_linalg_pinv_rcond_tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & rcond, bool hermitian) {
  if (trace.is_flushing()) {
    ensure_materialized(self, rcond);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_pinv(dispatchKeySet, self, rcond, hermitian);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_PINV_RCOND_TENSOR, dispatchKeySet, self, rcond, hermitian);
}

at::Tensor & wrap_linalg_pinv_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double rcond, bool hermitian, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_PINV_OUT, dispatchKeySet, self, rcond, hermitian, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_pinv_outf(dispatchKeySet, self, rcond, hermitian, out);
}

at::Tensor & wrap_linalg_pinv_out_rcond_tensor(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & rcond, bool hermitian, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_PINV_OUT_RCOND_TENSOR, dispatchKeySet, self, rcond, hermitian, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, rcond, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_pinv_outf(dispatchKeySet, self, rcond, hermitian, out);
}

at::Tensor & wrap__linalg_solve_out_helper_(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Tensor & other, at::Tensor & infos) {
  auto tt = is_torchy(self);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H__LINALG_SOLVE_OUT_HELPER_, dispatchKeySet, self, other, infos);
    return self;
  }
  will_override(self);
  ensure_materialized(self, other, infos);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_linalg_solve_out_helper_(dispatchKeySet, self, other, infos);
}

at::Tensor wrap_linalg_solve(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & other) {
  if (trace.is_flushing()) {
    ensure_materialized(input, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_solve(dispatchKeySet, input, other);
  }
  return at::detail::make_tensor<TorchyTensor>(input.dtype(), input.device(), H_LINALG_SOLVE, dispatchKeySet, input, other);
}

at::Tensor & wrap_linalg_solve_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, const at::Tensor & other, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_SOLVE_OUT, dispatchKeySet, input, other, out);
    return out;
  }
  will_override(out);
  ensure_materialized(input, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_solve_outf(dispatchKeySet, input, other, out);
}

at::Tensor wrap_linalg_tensorinv(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t ind) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_tensorinv(dispatchKeySet, self, ind);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_TENSORINV, dispatchKeySet, self, ind);
}

at::Tensor & wrap_linalg_tensorinv_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t ind, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_TENSORINV_OUT, dispatchKeySet, self, ind, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_tensorinv_outf(dispatchKeySet, self, ind, out);
}

at::Tensor wrap_linalg_tensorsolve(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, c10::optional<at::IntArrayRef> dims) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_tensorsolve(dispatchKeySet, self, other, dims);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_TENSORSOLVE, dispatchKeySet, self, other, dims);
}

at::Tensor & wrap_linalg_tensorsolve_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, c10::optional<at::IntArrayRef> dims, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_TENSORSOLVE_OUT, dispatchKeySet, self, other, dims, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, other, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_tensorsolve_outf(dispatchKeySet, self, other, dims, out);
}

std::tuple<at::Tensor,at::Tensor> wrap_linalg_qr(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string mode) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_qr(dispatchKeySet, self, mode);
}

std::tuple<at::Tensor &,at::Tensor &> wrap_linalg_qr_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string mode, at::Tensor & Q, at::Tensor & R) {
  ensure_materialized(self, Q, R);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_qr_outf(dispatchKeySet, self, mode, Q, R);
}

std::tuple<at::Tensor,at::Tensor> wrap__linalg_qr_helper(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, std::string mode) {
  ensure_materialized(self);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::_linalg_qr_helper(dispatchKeySet, self, mode);
}

at::Tensor wrap_linalg_matrix_power(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t n) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_matrix_power(dispatchKeySet, self, n);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_MATRIX_POWER, dispatchKeySet, self, n);
}

at::Tensor & wrap_linalg_matrix_power_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t n, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_MATRIX_POWER_OUT, dispatchKeySet, self, n, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_matrix_power_outf(dispatchKeySet, self, n, out);
}

at::Tensor wrap_linalg_matrix_rank(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<double> tol, bool hermitian) {
  if (trace.is_flushing()) {
    ensure_materialized(self);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::linalg_matrix_rank(dispatchKeySet, self, tol, hermitian);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H_LINALG_MATRIX_RANK, dispatchKeySet, self, tol, hermitian);
}

at::Tensor & wrap_linalg_matrix_rank_out(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<double> tol, bool hermitian, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_MATRIX_RANK_OUT, dispatchKeySet, self, tol, hermitian, out);
    return out;
  }
  will_override(out);
  ensure_materialized(self, out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_matrix_rank_outf(dispatchKeySet, self, tol, hermitian, out);
}

at::Tensor wrap_linalg_multi_dot(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors) {
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::detail::make_tensor<TorchyTensor>(at::redispatch::linalg_multi_dot(dispatchKeySet, tensors));
}

at::Tensor & wrap_linalg_multi_dot_out(c10::DispatchKeySet dispatchKeySet, at::TensorList tensors, at::Tensor & out) {
  auto tt = is_torchy(out);
  if (tt && !trace.is_flushing()) {
    tt->addInplace(H_LINALG_MULTI_DOT_OUT, dispatchKeySet, tensors, out);
    return out;
  }
  will_override(out);
  ensure_materialized(out);
  dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
  return at::redispatch::linalg_multi_dot_outf(dispatchKeySet, tensors, out);
}

at::Tensor wrap__test_serialization_subcmul(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & other, const at::Scalar & alpha) {
  if (trace.is_flushing()) {
    ensure_materialized(self, other);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_test_serialization_subcmul(dispatchKeySet, self, other, alpha);
  }
  return at::detail::make_tensor<TorchyTensor>(self.dtype(), self.device(), H__TEST_SERIALIZATION_SUBCMUL, dispatchKeySet, self, other, alpha);
}

at::Tensor wrap__test_optional_intlist(c10::DispatchKeySet dispatchKeySet, const at::Tensor & values, c10::optional<at::IntArrayRef> addends) {
  if (trace.is_flushing()) {
    ensure_materialized(values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_test_optional_intlist(dispatchKeySet, values, addends);
  }
  return at::detail::make_tensor<TorchyTensor>(values.dtype(), values.device(), H__TEST_OPTIONAL_INTLIST, dispatchKeySet, values, addends);
}

at::Tensor wrap__test_optional_filled_intlist(c10::DispatchKeySet dispatchKeySet, const at::Tensor & values, c10::optional<at::IntArrayRef> addends) {
  if (trace.is_flushing()) {
    ensure_materialized(values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_test_optional_filled_intlist(dispatchKeySet, values, addends);
  }
  return at::detail::make_tensor<TorchyTensor>(values.dtype(), values.device(), H__TEST_OPTIONAL_FILLED_INTLIST, dispatchKeySet, values, addends);
}

at::Tensor wrap__test_optional_floatlist(c10::DispatchKeySet dispatchKeySet, const at::Tensor & values, c10::optional<at::ArrayRef<double>> addends) {
  if (trace.is_flushing()) {
    ensure_materialized(values);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_test_optional_floatlist(dispatchKeySet, values, addends);
  }
  return at::detail::make_tensor<TorchyTensor>(values.dtype(), values.device(), H__TEST_OPTIONAL_FLOATLIST, dispatchKeySet, values, addends);
}

at::Tensor wrap__test_string_default(c10::DispatchKeySet dispatchKeySet, const at::Tensor & dummy, std::string a, std::string b) {
  if (trace.is_flushing()) {
    ensure_materialized(dummy);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_test_string_default(dispatchKeySet, dummy, a, b);
  }
  return at::detail::make_tensor<TorchyTensor>(dummy.dtype(), dummy.device(), H__TEST_STRING_DEFAULT, dispatchKeySet, dummy, a, b);
}

at::Tensor wrap__test_ambiguous_defaults_a(c10::DispatchKeySet dispatchKeySet, const at::Tensor & dummy, int64_t a, int64_t b) {
  if (trace.is_flushing()) {
    ensure_materialized(dummy);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_test_ambiguous_defaults(dispatchKeySet, dummy, a, b);
  }
  return at::detail::make_tensor<TorchyTensor>(dummy.dtype(), dummy.device(), H__TEST_AMBIGUOUS_DEFAULTS_A, dispatchKeySet, dummy, a, b);
}

at::Tensor wrap__test_ambiguous_defaults_b(c10::DispatchKeySet dispatchKeySet, const at::Tensor & dummy, int64_t a, std::string b) {
  if (trace.is_flushing()) {
    ensure_materialized(dummy);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::_test_ambiguous_defaults(dispatchKeySet, dummy, a, b);
  }
  return at::detail::make_tensor<TorchyTensor>(dummy.dtype(), dummy.device(), H__TEST_AMBIGUOUS_DEFAULTS_B, dispatchKeySet, dummy, a, b);
}

at::Tensor wrap_segment_reduce(c10::DispatchKeySet dispatchKeySet, const at::Tensor & data, std::string reduce, const c10::optional<at::Tensor> & lengths, const c10::optional<at::Tensor> & indices, int64_t axis, bool unsafe) {
  if (trace.is_flushing()) {
    ensure_materialized(data);
    dispatchKeySet = dispatchKeySet & DispatchKeySet(DispatchKeySet::FULL_AFTER, DISPATCHKEY);
    return at::redispatch::segment_reduce(dispatchKeySet, data, reduce, lengths, indices, axis, unsafe);
  }
  return at::detail::make_tensor<TorchyTensor>(data.dtype(), data.device(), H_SEGMENT_REDUCE, dispatchKeySet, data, reduce, lengths, indices, axis, unsafe);
}