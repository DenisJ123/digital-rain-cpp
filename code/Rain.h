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

#ifndef RAIN_H
#define RAIN_H

#include <windows.h>
#include <string>

class Rain {
public:
    static void GotoXY(int x, int y);
    static void SetGreenText();
    static void GetConsoleDimensions(int& width, int& height);
    static char GetRandomChar();
    static void RunTests();
};

#endif
