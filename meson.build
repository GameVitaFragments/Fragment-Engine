project('Fragment','cpp')

sources = files('main.cpp')
inc_dir = []

subproject('ECS')

subdir('Engine/Core/Utility/Defines')
subdir('Engine/Core/Window')

ecs_dep = dependency('ECS')
fragLogger_dep = dependency('FragLogger')
sdl_dep = dependency('sdl2')

executable(
  'main',
  sources,
  dependencies : [
    ecs_dep, 
    fragLogger_dep,
    sdl_dep
    ],
  include_directories : inc_dir,
  )
