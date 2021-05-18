from setuptools import setup, find_packages
from torch.utils.cpp_extension import BuildExtension, CppExtension
from glob import glob
import os

sanitizers = [
  #'-fsanitize=undefined', '-fsanitize-undefined-trap-on-error'
  #'-fsanitize=address,undefined'
]

extra_compile_args = [
  '-I' + os.path.realpath('.'),
  '-O2',
  '-march=native',
  '-mtune=native',
  '-fvisibility=hidden',
  '-fvisibility-inlines-hidden',
] + sanitizers

extra_link_args = [] + sanitizers

sources = glob('**/*.cpp', recursive=True)

setup(
  name='torchy',
  version='0.1',
  description='Tracing JIT for PyTorch',
  packages=['torchy'], #find_packages(exclude=['build']),
  requires=['ninja', 'torch'],
  ext_modules=[
    CppExtension(
      '_TORCHY',
      sources,
      extra_compile_args=extra_compile_args,
      extra_link_args=extra_link_args
    ),
  ],
  cmdclass={
    'build_ext': BuildExtension
  }
)
