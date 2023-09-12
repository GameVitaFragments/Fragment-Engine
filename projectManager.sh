#!/bin/bash
set -xe
command=$1

if [ ! -z $command ]; then
    if [ $command == "build" ]; then
        ./scripts/build.sh
    elif [ $command == "class" ]; then
        if [ -z $2 ] || [ -z $3 ]; then
            echo "Parameters : Path ClassName"
        else
            python3 ./scripts/project.py $2 $3
        fi
    elif [ $command == "reconfigure" ]; then
        ./scripts/reconfigure.sh
    fi
fi
        
