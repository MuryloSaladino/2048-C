cmake_minimum_required(VERSION 3.28)
project(2048_C C)

set(CMAKE_C_STANDARD 23)

add_executable(2048_C main.c
        src/app/app.c
        src/app/terminal.c
        src/app/app.c
        src/app/app.h
        src/app/terminal.c
        src/app/terminal.h
        src/events/events.c
        src/events/events.h
        src/events/events.c
        src/game/game.c
        src/game/game.h
        src/score/score.c
        src/score/score.h)
