cmake_minimum_required(VERSION 3.26)
project(331_Skeet)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(331_Skeet
        bird.cpp
        bird.h
        bullet.cpp
        bullet.h
        effect.cpp
        effect.h
        game.cpp
        gun.cpp
        gun.h
        points.cpp
        points.h
        position.cpp
        position.h
        score.cpp
        score.h
        skeet.cpp
        skeet.h
        time.cpp
        time.h
        uiInteract.cpp
        uiInteract.h)
