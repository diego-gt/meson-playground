project(
  'subproject_example',
  'cpp',
  version : '0.1',
  default_options : [
    'warning_level=3',
    'cpp_std=c++20'
    ])

includes = include_directories('include')

sources = files([
  'src/LocalLib.cpp',
  'src/main.cpp'
  ])

external_lib_proj = subproject('ExternalLib')
external_lib_dep = external_lib_proj.get_variable('external_lib_dep')

subproject_example = executable(
  'subprj',
  sources,
  include_directories : includes,
  dependencies : external_lib_dep
  )

