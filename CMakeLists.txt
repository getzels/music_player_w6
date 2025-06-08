cmake_minimum_required(VERSION 3.25)
project(music_player_w6)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.5 COMPONENTS audio REQUIRED)

add_executable(music_player_w6
    main.cpp
    player.cpp
    track.cpp
)

target_link_libraries(music_player_w6 sfml-audio)