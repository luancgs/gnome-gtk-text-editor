texteditor_sources = [
  'main.c',
  'texteditor-application.c',
  'texteditor-window.c',
]

texteditor_deps = [
  dependency('gtk4'),
  dependency('libadwaita-1'),
]

texteditor_sources += gnome.compile_resources('texteditor-resources',
  'texteditor.gresource.xml',
  c_name: 'texteditor'
)

executable('texteditor', texteditor_sources,
  dependencies: texteditor_deps,
       install: true,
)
