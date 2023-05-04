project('my-shared-lib', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

lib = shared_library('my-shared-lib',
                     'my-shared-lib.c',
                     vs_module_defs: 'my-shared-lib.def')

executable('my-executable',
           'my-executable.c',
           link_with: [lib])
