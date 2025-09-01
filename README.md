# CSC481-581 Module 3: Gameplay Foundation

## Overview
This assignment introduces you to gameplay foundations in C++ using SDL3 and SDL_image.
You will build a simple game demo with basic rendering, input handling, and textures, giving you hands-on experience with:
- Loading and displaying textures
- Handling keyboard input
- Managing game loops
- Using SDL for cross-platform graphics

## 1. Prerequisites
Install the necessary libraries for your operating system.
Install SDL3 & SDL_image

| OS | One-line install |
|----|------------------|
| **macOS** | `brew install sdl3 sdl3-image` |
| **Linux (Debian/Ubuntu)** | `sudo apt update && sudo apt install libsdl3-dev libsdl3-image-dev` |
| **Arch Linux** | `sudo pacman -S sdl3 sdl3-image` |
| **Windows** | • **MSYS2**: `pacman -S mingw-w64-ucrt-x86_64-SDL3 mingw-w64-ucrt-x86_64-SDL3_image`<br>• **vcpkg**: `vcpkg install sdl3 sdl3-image`<br>• Download the *SDL3-devel* and *SDL3_image-devel* ZIPs from the SDL website, then unzip and add the `include`, `lib`, and `bin` folders to your IDE/toolchain. |

## 2. Clone the Repository
```
git clone https://github.com/your-username/your-repo-name.git
cd your-repo-name
```

## 3. Project Structure
```
.
├── CMakeLists.txt
├── media/
│   └── brick.png
└── src/
    └── main.cpp
    └── entity.h
    └── physics.h
    └── structs.h
    └── input.h
```

## 4. Tasks
In this exercise you will need to combine this exercise with the previous exercise to perform the following tasks:
- Create a stationary platform
  - Texture the stationary platform using an asset file (currently brick.png)
  - Enable collisions for the stationary platform
- Create a moving entity
  - This entity can be an object of your choice
  - This entity should spawn on a button press
    - The button press should be read through your input manager
  - This entity should be affected by gravity
    - Gravity should be applied through your physics system
    - You should demonstrate gravity (by falling or jumping)
  - This entity should collide with the stationary platform


## 5. Building the Project
### 5.1 Using CMake
```
mkdir build
cd build
cmake ..
make
```
After compilation, the executable will be created inside the `build/` directory.

## 6. Running the Game
### Option 1 – Run from project root
```
./build/your_game_executable
```

### Option 2 – Run from build directory (if assets copied)
If your `CMakeLists.txt` includes an asset copy command:
```
# Example: Copy media directory to the build directory
file(COPY media DESTINATION ${CMAKE_BINARY_DIR})
```

Then you can:
```
cd build
./your_game_executable
```
