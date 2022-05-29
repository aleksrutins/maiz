project('maiz', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++14'])

subdir('src')

# These arguments are only used to build the shared library
# not the executables that use the library.
lib_args = ['-DBUILDING_MAIZ']

incdirs = include_directories('src', 'src/include')

boost = dependency('boost')

shlib = shared_library('maiz', 
  maiz_srcs,
  dependencies : [boost],
  install : true,
  cpp_args : lib_args,
  gnu_symbol_visibility : 'hidden',
  include_directories : incdirs
)

maiz_dep = declare_dependency(
  include_directories: include_directories('src/include'),
  link_with : shlib)

test_exe = executable('maiz_test', 'maiz_test.cpp',
  dependencies: [maiz_dep])
test('maiz', test_exe)

# Make this library usable from the system's
# package manager.
install_subdir('src/include/maiz', install_dir: 'include')

pkg_mod = import('pkgconfig')
pkg_mod.generate(
  name : 'maiz',
  filebase : 'maiz',
  description : 'Meson sample project.',
  subdirs : 'maiz',
  libraries : shlib,
  version : '0.1',
)
