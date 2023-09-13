project('Fragment','cpp')

sources = files('main.cpp')
inc_dir = []

subproject('ECS')

subdir('Engine/Systems/Update')
subdir('Engine/Core/Utility/Defines')
subdir('Engine/Core/Window')
subdir('Engine/Components')
subdir('Engine/Core/Entity')
subdir('Engine/Systems/Renderer')

ecs_dep = dependency('ECS')
fragLogger_dep = dependency('FragLogger')
sdl_dep = dependency('sdl2')

executable(
  'main',
  sources,
  dependencies : [
    dependency('ECS'),
    dependency('FragLogger'),
    dependency('sdl2'),
    dependency('glm'),
    ],
  include_directories : inc_dir,
  )
