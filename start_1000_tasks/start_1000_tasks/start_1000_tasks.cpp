#include <iostream>
#include "template_one.h"
#include "template_two.h"

int p_and_area(int x1,int y1, int x2,int  y2)///19
{
    double p = (abs(x1 - x2) + abs(y1 - y2)) * 2;
    double s = abs(x1 - x2) * abs(y1 - y2);
    return p, s;
}
int distance_coordinates(int x1, int y1, int x2, int  y2)///20
{
   return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}   
int relocation(int x1,int x2,int y1, int y2,int x3,int y3)///21
{
    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double P = a + b + c;
    double S = sqrt(P * (P - a) * (P - b) * (P - c));
    return P,S;
}
int main() {
    /*std::cout<<square_perimeter(20);
    std::cout<<area_square(2);
    std::cout << area_of_rectangle(3,4);
    std::cout << diameter_of_curcle(4);
    std::cout << volume_and_surface(3);
    std::cout << area_circumference_length(12);
    std::cout << average(4,2);
    std::cout << average_v2(6,4);
    std::cout << calculations_sum_dif_quo(3,6);
    std::cout << calculations_cub_sum_dif_quo(6,7);
    std::cout << distance_between(5,2);
    std::cout << area_calculations(3,2);
    std::cout << degrees_v2(6);
    std::cout << linear_equationmain(5,6);
    std::cout << degrees_fahrenheit(3);
    std::cout << degrees_celsius(8);
    std::cout << degrees_v1(4);
    std::cout << function_value_v1(3);*/


   

}