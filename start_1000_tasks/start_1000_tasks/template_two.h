#pragma once
#include <iostream>
#include "template_all.h"
int volume_of_parallelepiped(int width, int height, int length)///6
{
    return  three_variables_and_more(width, height, length, [](int width, int height, int length) {
        std::cout << 2 * ((width * height) + (width * length) + (width * length)) << std::endl;
        return width * height * length;
    });///6
}
int segment_length(int first, int second,int third)///17
{
    return  three_variables_and_more(3, 3, 3, [](int first, int second, int third) {
        std::cout << std::fabs(first - third) << "\n" << std::fabs(second - third) << std::endl;
        return std::fabs(first - third) + std::fabs(second - third);
    });///17
}