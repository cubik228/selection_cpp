#pragma once
#include <iostream>
#include "template_all.h"
int square_perimeter(int side)///1
{
    return  two_variables(side, 0, [](int side, int variable_plug) {return side * 4; });
}
int area_square(int side)///2
{
    return two_variables(side,0, [](int side,int variable_plug) {return std::pow(side,2); });
}
int area_of_rectangle(int width,int height)///3
{
    return  two_variables(width, height, [](int width, int height) {std::cout << width * height<<std::endl;return  (width + height) * 2; });
}
int diameter_of_curcle(int diameter)///4
{
    return   two_variables(diameter, 0, [](double diameter,int variable_plug) {return diameter * 3.14; });///4   
}
int volume_and_surface(int side)///5
{
    return two_variables(side, 0, [](int side, int height) {std::cout << std::pow(side, 3) << std::endl;return  6 * std::pow(side, 3); });///5
}
int area_circumference_length(int radius)///7
{
    return   two_variables(radius,0, [](int radius,int variable_plug) {std::cout << 3.14 * std::pow(radius,2) << std::endl;return (2 * 3.14) * radius; });///7
}
int average(int first, int second)///8
{
    return  two_variables(first, second, [](int first, int second) {return (first + second) / 2; });///8
}
int average_v2(int first, int second)///9
{
    return  two_variables(first, second, [](int first, int second) {return (first * second) ; });///9
}
int calculations_sum_dif_quo(int first, int second)///10
{
    return  two_variables(first, second, [](int first, int second) {
        std::cout << first + second << "\n" << first - second<<std::endl;
        return std::pow(first,2)/ std::pow(second,2); 
    });///10
}
int calculations_cub_sum_dif_quo(int first, int second)///11
{
    return two_variables(first, second, [](int first, int second) {
    std::cout << std::fabs(first) + std::fabs(second) << "\n" << std::fabs(first) - std::fabs(second) << "\n";
    return std::fabs(first) / std::fabs(second);
    });///11
}
int distance_between(int first_cardinate, int second_caordinate) ///16
{
    return  two_variables(first_cardinate, second_caordinate, [](int first_cardinate, int second_caordinate) {return std::fabs(first_cardinate - second_caordinate); });///16
}
int area_calculations(double r1,double r2)///13
{
    return  two_variables(r1, r2, [](int r_1, int r_2) {
    std::cout << (3.14 * std::pow(r_1, 2))<<"\n"<< (3.14 * std::pow(r_2, 2))<<std::endl;
    return (3.14 * std::pow(r_1, 2)) - (3.14 * std::pow(r_2, 2));
    });///13
}
int degrees_v2(int degrees)///30
{
    return  two_variables(degrees, 0, [](int degrees, int variable_plug) {return degrees * 180 / 3.14; });///30
}
int linear_equationmain(double first,double second)///38
{
    return  two_variables(first, second, [](int first, int second) {return (-second) / first; });///38
}
int degrees_fahrenheit(int degrees_fahrenheit)///31
{
    return  two_variables(degrees_fahrenheit, 0, [](int degrees_fahrenheit, int variable_plug) {return (degrees_fahrenheit -32) * (5/9); });///31
}
int degrees_celsius(int degrees_celsius)///32
{
    return  two_variables(degrees_celsius, 0, [](int degrees_celsius, int variable_plug) {return ((degrees_celsius * 9) / 5) + 32; });///32
}
int degrees_v1(int degrees)///29
{
    return two_variables(degrees, 0, [](int degrees, int variable_plug) {return (degrees * 3.14) / 180; });///29
}
int function_value_v1(int value)///25
{
   return two_variables(value, 0, [](int value, int variable_plug) {return  (3 * std::pow(value, 6)) - (6 * std::pow(value - 3, 3)) + 2; });///25
}


 