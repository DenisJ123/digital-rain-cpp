---
layout: page
title: About Project
---

This project replicates the iconic "falling code" effect from The Matrix using Windows Console API and modern C++. Designed as a technical showcase, it demonstrates low-level console manipulation, real-time animation, and efficient memory management.

## How I created my project

### Console Control System

To create animation in the console i had to control the, 
- Cursor positioning
- Text color
- Screen buffer dimensions

I done this by using this piece of code
  
<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/ConsoleControlSystem.png" width="600" height="300">

### Dynamic Column Management

To simulate independent falling columns i had to track,
- Each column's vertical position
- Randomized reset logic for continuous flow

<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/DynamicColumnManagement.png" width="500" height="300">

### Character Rendering

To create the illusion of motion while minimizing flicker i had to,
- Draw new characters
- Erase old characters
- Maintain consistent frame pacing

<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/CharacterRenderingPipeline1.png" width="500" height="400">
<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/CharacterRenderingPipeline2.png" width="550" height="200">

## Why I chose certain headers
<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/Librarys.png" width="500" height="300">

Windows.h - Windows-specific console functions
Iostream - Input/Output
Vector - Vector container
String - String operations
Cstdlib - For rand() and srand()
Ctime - For time()
Thread - For multithreading
Chrono - For time-related functions

## References
