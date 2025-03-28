/*
Denis Johnson
G00403126
          _.-*'""'*-._
       .-"            "-.
     ,"                  ",
   .'      _.-.--.-._      ',
  /     .-'.-"    "-.'-.     \
 /     /  /"'-.  .-'"\  \     \
:     :  :     ;:     ;  ;     ;
;     :  ; *   !! *   :  ;     :
;      ; :   .'  '.   ; :      :
:       \ \-'      '-/ /       ;
 \       '.'-_    _-'.'       /
  \        '*-"-+"-*'        /
   '.          /|          .'
     *,       / |        ,*
     / '-_            _-'  \
    /     "*-.____.-*"      \
   /            |            \
  :    :        |        ;    ;
  |.--.;        |        :.--.|
  (   ()        |        ()   )
   '--^_        |        _^--'
      | "'*--.._I_..--*'" |
      | __..._  | _..._   |
     .'"      `"'"     ''"'.
     """""""""""""""""""""""
*/

#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include "Rain.h"

using namespace std;

// Function to move the cursor to a specific position
void Rain::GotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to set console text color to green
void Rain::SetGreenText() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}

// Function to get console dimensions
void Rain::GetConsoleDimensions(int& width, int& height) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}

// Function to generate a random character (numbers or letters)
char Rain::GetRandomChar() {
    const string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return chars[rand() % chars.length()];
}

// Function to simulate the digital rain effect
void Rain::RunTests() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    int width, height;
    GetConsoleDimensions(width, height); // Get console dimensions dynamically

    vector<int> columns(width, 0); // Track the position of each column
    SetGreenText(); // Set text color to green

    while (true) {
        for (int i = 0; i < width; ++i) {
            if (columns[i] == 0) {
                // Randomly start a new column
                if (rand() % 10 == 0) {
                    columns[i] = 1;
                }
            }

            if (columns[i] > 0) {
                // Draw a random character at the current position
                GotoXY(i, columns[i] - 1);
                cout << GetRandomChar();

                // Move the column down
                GotoXY(i, columns[i]);
                cout << GetRandomChar();

                // Clear the character at the top of the column
                if (columns[i] > 1) {
                    GotoXY(i, columns[i] - 2);
                    cout << " ";
                }

                // Move the column down
                columns[i]++;

                // Reset the column if it reaches the bottom
                if (columns[i] >= height) {
                    columns[i] = 0;
                }
            }
        }

        // Slow down the animation
        this_thread::sleep_for(chrono::milliseconds(50));
    }
}
