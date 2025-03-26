---
layout: page
title: About Project
---

This project replicates the iconic "falling code" effect from The Matrix using Windows Console API and modern C++. Designed as both a technical showcase and nostalgic tribute, it demonstrates low-level console manipulation, real-time animation techniques, and efficient memory management in a constrained environment.

## Project Architecture

### Console Control System

To create smooth animations in the Windows console, I implemented precise control over three key aspects: 
- **Cursor Positioning** - For targeted character placement
- *Text Colouring* - To achieve the signature Matrix green
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

## Why I chose certain librarys
<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/Librarys.png" width="400" height="250">

Windows.h - Windows-specific console functions

Iostream - Input/Output

Vector - Vector container

String - String operations

Cstdlib - For rand() and srand()

Ctime - For time()

Thread - For multithreading

Chrono - For time-related functions

## References
