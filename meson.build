project('Fragment','cpp')

sources = files('main.cpp')
subproject('ECS')

ecs_dep = dependency('ECS')
fragLogger_dep = dependency('FragLogger')


executable('main',sources,dependencies : [ecs_dep,fragLogger_dep])
