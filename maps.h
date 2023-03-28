#include <iostream>
#include <cmath> 
#include <raylib.h>

// 0 = black, 1 = gray, 2 = red, 3 = orange, 4 = yellow, 5 = green, 6 = blue, 7 = violet, 8 = purple, 9 = pink, 10 = brown
const int map[HEIGHTGAME][WIDTHGAME] = {
    // 20 x 20 grid
    {1,3,1,2,1,2,1,3,1,1,1,3,1,2,1,2,1,3,1,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {1,0,0,0,0,0,1,5,5,4,4,4,4,4,4,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,4,5,0,0,4,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,3,6,0,0,4,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,2,7,4,4,4,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {1,7,6,5,4,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
};

// const int map[WIDTHGAME][HEIGHTGAME] = { 
//     {1,3,1,2,1,2,1,3,1,1},
//     {1,0,0,0,0,0,0,0,0,2},
//     {3,0,0,0,0,0,0,0,0,1},
//     {1,0,0,0,0,0,0,0,0,2},
//     {3,0,0,0,0,2,0,0,0,1},
//     {1,0,0,0,0,0,0,0,0,2},
//     {3,0,0,0,0,0,0,0,0,1},
//     {1,0,0,0,0,0,0,0,0,2},
//     {3,0,0,0,0,0,0,0,0,1},
//     {1,1,1,1,5,5,1,4,1,2}
// }; 