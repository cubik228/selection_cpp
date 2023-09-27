#pragma once
#include <iostream>
#include "template_all.h"

int p_and_area(int x1, int y1, int x2, int  y2)///19
{
    return tasks_with_coordinates(x1, y1, x2, y2, 0 , 0,[](int x1, int y1, int x2, int y2,int variable_plug,int variable_plug_2) {std::cout<< (abs(x1 - x2) + abs(y1 - y2)) * 2<<"\n";return abs(x1 - x2) * abs(y1 - y2);});
}
int distance_coordinates(int x1, int y1, int x2, int  y2)///20
{
    return tasks_with_coordinates(x1, y1, x2, y2, 0 , 0,[](int x1, int y1, int x2, int y2,int variable_plug,int variable_plug_2) {return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));});
}
int relocation(int x1, int x2, int y1, int y2, int x3, int y3)///21
{
    return tasks_with_coordinates(x1, y1, x2, y2, x3, y3, [](int x1, int y1, int x2, int y2, int x3, int y3) {
        double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
        int square = a + b + c;
        return sqrt(square * (square - a) *(square - b)*(square -  c));
    });
}

