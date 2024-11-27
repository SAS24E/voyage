cmake_minimum_required(VERSION 3.29)
project(Voyage)

set(CMAKE_CXX_STANDARD 20)

add_executable(Voyage main.cpp
        voyage.cpp
        voyage.h
        loot.h
        armor.h
        potion.h
        player.h
        weapon.h)
