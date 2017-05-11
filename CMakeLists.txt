cmake_minimum_required(VERSION 3.7)
project(project_3_try_two)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp inputCheck.hpp inputCheck.cpp menuMaker.hpp menuMaker.cpp Creature.cpp Creature.hpp Vampire.cpp Vampire.hpp Barbarian.cpp Barbarian.hpp BlueMen.cpp BlueMen.hpp Medusa.cpp Medusa.hpp HarryPotter.cpp HarryPotter.hpp Dice.cpp Dice.hpp Game.cpp Game.hpp)
add_executable(project_3_try_2 ${SOURCE_FILES})