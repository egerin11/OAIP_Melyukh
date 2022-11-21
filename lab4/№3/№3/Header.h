#ifndef HEADER
#define HEADER
#include<Windows.h>
#define N 100
#define M 100
enum Color
{
    black = 0,
    dark_blue,
    green,
    blue,
    red,
    magenta,
    yellow,
    white,
    grey,
    light_dark_blue,
    light_green,
    light_blue,
    light_red,
    light_magenta,
    light_yellow,
};
void setConsoleColor(Color background = black, Color foreground = white);
void fillArray(int mas[N][M], int& row);
bool proverka(int& col);
void printArray(int mas[N][M], int row);
void max_element(int mas[N][M], int row);
#endif
