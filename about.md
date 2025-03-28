---
layout: page
title: About Project
---

This project replicates the iconic "falling code" effect from The Matrix using Windows Console API and modern C++. Designed as both a technical showcase and nostalgic tribute, it demonstrates low-level console manipulation, real-time animation techniques, and efficient memory management in a constrained environment.

## Project Architecture

### Console Control System

To create smooth animations in the Windows console, I implemented precise control over three key aspects: 
- **Cursor Positioning** - For targeted character placement
- **Text Colouring** - To achieve Matrix green
- **Screen Buffer Management** - For dynamic resizing support
- Heres a piece of code that I have used chat gpt to help assist me create
  
<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/ConsoleControlSystem.png" width="600" height="300">

### Dynamic Column Management

The simulation maintains independent "rain streams" through:
- A vector tracking each column's vertical position
- Randomized activation logic for organic appearance
- Boundary detection for seamless looping

<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/DynamicColumnManagement.png" width="500" height="300">

### Character Rendering

The animation maintains smooth motion through a three-phase render cycle:
- Draw new characters at current positions
- Erase previous characters to prevent smearing
- Throttle frames for consistent speed

<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/CharacterRenderingPipeline1.png" width="500" height="400">
<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/CharacterRenderingPipeline2.png" width="550" height="200">

### Random Charactor Generation

This code provides the "falling code" visual effect:
- Returns a random alphanumeric character from a predefined set.
- rand() % chars.length() ensures uniform distribution.
The letters can be changed at will.

<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/RandomCharactorGeneration.png" width="550" height="300">

### Frame Timing
The frame timing feature is used to control the rate of speed of the characters falling:
- Pauses execution for 50ms between frames.
- Controls animation speed (20 FPS).

<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/FrameTiming.png" width="550" height="200">

### Why I chose certain librarys
<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/Librarys.png" width="400" height="250">

Windows.h - Windows-specific console functions

Iostream - Input/Output

Vector - Vector container

String - String operations

Cstdlib - For rand() and srand()

Ctime - For time()

Thread - For multithreading

Chrono - For time-related functions

### Links to full code

[Full Code](https://github.com/DenisJ123/digital-rain-cpp/tree/main/code)

### References/ Websited I used to assist me

[Random Number Generate](https://www.w3schools.com/cpp/cpp_howto_random_number.asp)

[Colour Selector](https://cplusplus.com/forum/beginner/139897/)

[Screen Dimentions](https://www.deepseek.com/)

[Rain Speed](https://stackoverflow.com/questions/79113273/how-to-control-the-speed-of-objects-in-my-simple-game)

[Vectors](https://vlegalwaymayo.atu.ie/pluginfile.php/1480067/mod_resource/content/6/Vector.pdf)
