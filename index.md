---
layout: page
title: Project
---
## Introduction

This project brings the iconic Matrix digital rain effect to life using Windows Console API and modern C++. Designed as both a technical challenge and nostalgic tribute, it demonstrates:
- Real-time console animation
- Low-level system programming
- Efficient memory management
- Modern C++ best practices

<img src="https://raw.githubusercontent.com/DenisJ123/digital-rain-cpp/main/docs/assets/images/Rainvid.gif" width="400" height="300">

## Design & Implementation
### System Components:

**Column Controller**

- Uses vector<int> to track each rain column's vertical position

- Uses object oriented design of code, through use of my class "Rain"

- Implements variable speeds (1-5 rows per frame)

- Random reset logic creates organic patterns


**Render Pipeline**

- Optimized character-by-character updates

- Double buffering technique minimizes flicker

- Smart erasure of trailing characters


**Console Interface**

- Direct Windows API calls for maximum performance

- Dynamic resize detection

- Precision color control

**Frame Rate Controller**

- Utilizes <chrono> for frame pacing independent of CPU speed

- Dynamic sleep adjustment maintains consistent 20 FPS

- Adaptive to system load (slows down rather than dropping frames)

**Character Generator**

- Uniform alphanumeric distribution

- No special characters or Unicode support

- Uses legacy rand() (no <random> header)

## Problem solving

The creation of the digital rain effect came with a number of technological difficulties that needed to be resolved in order to generate fluid, appealing results. Eliminating screen flickering during animation updates was a major challenge. The animation was able to maintain fluid motion without the distracting flickering by using std::cout.flush() to force quick output and implementing targeted character redrawing, which updates only the particular positions where changes happened. The smooth appearance of falling characters was further improved by hiding the console pointer.

Making realistic-looking raindrop patterns without turning to mechanical repetition was another challenge. Weighted randomisation ensured an array of characters, while a probabilistic technique determined when additional columns activated. As a result, the rain impact became more natural and predictable sequences were avoided. Because constant animation could put a load on system resources, performance reduction was also important. The introduction of sleep delays and regulated frame pacing balanced CPU usage while preserving fluid graphics, and the use of effective data structures like std::vector reduced memory overhead.

Finally, the simulation had to change to different terminal sizes. The effect scaled smoothly from small command windows to full-screen displays by obtaining console size in real-time and modifying column spacing appropriately. Each of these methods created a refined digital rain simulation that maintains the Matrix appearance while operating effectively in a console environment by combining technical accuracy with creative problem-solving techniques.

## Modern C++ Insight
## Reflection
