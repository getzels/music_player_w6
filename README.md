# Overview

I built a simple music player using C++ to improve my understanding of real-world programming with audio, user input, and file handling. As a software engineer, I wanted to practice using external libraries, object-oriented programming, and working with actual sound files in a terminal-based program.

This software lets a user load a music file and then play, pause, stop, or load a new track. It uses the SFML audio library to handle `.wav` or `.ogg` playback. I learned how to set up a CMake project, link libraries, and use classes to organize my code. I also had to solve some runtime and path errors, which taught me how to debug better in C++.

[Software Demo Video](https://www.loom.com/share/5f260e4df875416e87eecdf1b4d538a9?sid=755beae6-aae0-46b1-beed-d021af7a3db0)

# Development Environment

- **CLion** (JetBrains IDE)
- **CMake** (build system)
- **MinGW** (Windows GCC toolchain)
- **C++ 20**
- **SFML 2.5.1** audio module

# Useful Websites

- [cppreference.com](https://en.cppreference.com)
- [SFML Documentation](https://www.sfml-dev.org/documentation/2.5.1/)
- [Stack Overflow](https://stackoverflow.com)
- [JetBrains CLion Docs](https://www.jetbrains.com/help/clion/)
- [YouTube – SFML Tutorials](https://www.youtube.com/results?search_query=sfml+audio+c%2B%2B)

# Future Work

- Add volume control and track duration display
- Allow multiple tracks in a playlist
- Add error logging to a file
- Add support for `.mp3` files using an extra library