project(
  'external_lib',
  'cpp',
  version : '1.0',
  default_options : [
    'warning_level=3',
    'cpp_std=c++20'
    ]
)

external_lib_includes = include_directories('include')

external_lib_sources = files([
  'src/API.cpp'
  ])

external_lib = library(
  'external_lib',
  external_lib_sources,
  include_directories : external_lib_includes,
  install : false
  )

external_lib_dep = declare_dependency(
  include_directories : external_lib_includes,
  link_with : external_lib
  )
  
