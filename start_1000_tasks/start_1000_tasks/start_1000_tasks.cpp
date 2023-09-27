#include <iostream>
#include "template.h"
//template<typename T_int,typename T_double,class Function>
//T_double two_variables(T_double first, T_int second,  Function func ) {
//    return func(first, second);
//}
template<typename T_int, class Function>
T_int three_variables_and_more(T_int first, T_int second,T_int third, Function func) {
    return func(first, second, third);
}

//int area_square(int side)///2
//{
//    return pow(side, 2);
//}
//int area_of_rectangle(int width,int height)///3
//{
//    int square = width * height;
//    int perimeter = (width + height) * 2;
//    return square,perimeter;
//}
//int diameter_of_curcle(int diameter)///4
//{
//    return  diameter * 3.14;
//}
//int volume_and_surface(int side)///5
//{
//    int V = pow(side, 3);
//    int S = 6 * pow(side, 2);
//    return V,S;
//}
//int volume_of_parallelepiped(int width, int height ,int length)///6
//{
//    int V = (width * height * length);
//    int S = 2 * ((width * height) + (width * length) + (width * length));
//    return V,S;
//}
//int area_circumference_length(int radius)///7
//{
//    int S = 3.14 * pow(radius, 2);
//    int L = (2 * 3.14) * radius;
//    return S,L;
//}
//int average(int first, int second)///8
//{
//    return  (first + second) / 2;
//}
//int average_v2(int first, int second)///9
//{
//    return  sqrt(first * second);
//}
//int calculations_sum_dif_quo(int first, int second)///10
//{
//    int sum = first + second;
//    int difference = first - second;
//    int quotient = pow(first, 2) / pow(second, 2);
//    return sum, difference, quotient;
//}
//int calculations_cub_sum_dif_quo(int first, int second)///11
//{
//        int res1 = fabs(first) + fabs(second);
//        int difference = fabs(first) - fabs(second);
//        double res4 = fabs(first) / fabs(second);
//        return res1, difference, res4;
//}
//int area_calculations(double r1,double r2)///13
//{
//        double S_1 = (3.14 * pow(r1, 2));
//        double S_2 = (3.14l * pow(r2, 2));
//        double area_difference = S_1 - S_2;
//        return S_1,S_2, area_difference;
//}
//int distance_between(int first_cardinate , int second_caordinate) ///16
//{
//     return fabs(first_cardinate - second_caordinate);
//}
int segment_length(int first, int second,int third)///17
{
    double AC = fabs(first - third);
    double BC = fabs(second - third);
    double result = AC + BC;
    return AC, BC,result;
}
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
//int function_value_v1(int value)///25
//{
//   return (3 * pow(value, 6)) - (6 * pow(value, 2)) - 7;
//}
//int function_value_v2(int value)///26
//{
//    return  (4 * pow(value - 3, 6)) - (7 * pow(value - 3, 3)) + 2;
//}
//int degrees_v1(int degrees)///29
//{
//    return (degrees * 3.14) / 180;
//}
//int degrees_v2(int degrees)///30
//{
//    return degrees * 180 / 3.14;
//}
//int degrees_fahrenheit(int degrees_fahrenheit)///31
//{
//    return (degrees_fahrenheit - 32) * (5.0 / 9.0);
//}
//int degrees_celsius(int degrees_celsius)///32
//{
//    return degrees_celsius * 9.0 / 5.0+ 32;
//}
//int linear_equationmain(double first,double second)///38
//{
//        return  (-second) / first;
//}
int main() {
    square_perimeter(20);
    //std::cout << two_variables(2,0, [](int side,int variable_plug) {return side * 4; });///1
    //std::cout << two_variables(2,0, [](int side,int variable_plug) {return std::pow(side,2); });///2
    //std::cout << two_variables(2, 5, [](int width, int height) {std::cout << width * height<<std::endl;return  (width + height) * 2; });///3
    //std::cout << two_variables(2, 0, [](double diameter,int variable_plug) {return diameter * 3.14; });///4
    //std::cout << two_variables(2, 0, [](int side, int height) {std::cout << std::pow(side,3) <<std::endl;return  6*std::pow(side,3) ; });///5
    //std::cout << two_variables(2,0, [](int radius,int variable_plug) {std::cout << 3.14 * std::pow(radius,2) << std::endl;return (2 * 3.14) * radius; });///7
    //std::cout << two_variables(2, 4, [](int first, int second) {return (first + second) / 2 ; });///8
    //std::cout << two_variables(2, 4, [](int first, int second) {return (first * second) ; });///9
    //std::cout << two_variables(2, 4, [](int first_cardinate, int second_caordinate) {return std::fabs(first_cardinate - second_caordinate) ; });///16
    //std::cout << two_variables(2, 4, [](int degrees, int variable_plug) {return degrees * 180 / 3.14; });///30
    //std::cout << two_variables(2, 4, [](int first, int second) {return (-second) /first ; });///38
    //std::cout << two_variables(2, 0, [](int degrees_fahrenheit, int variable_plug) {return (degrees_fahrenheit -32) * (5/9); });///31
    //std::cout << two_variables(2, 0, [](int degrees_celsius, int variable_plug) {return ((degrees_celsius * 9) / 5) + 32; });///32
    //std::cout << two_variables(2, 0, [](int degrees, int variable_plug) {return (degrees * 3.14) / 180; });///29
    //std::cout << two_variables(2, 0, [](int value, int variable_plug) {return  (3 * std::pow(value,6)) - (6 * std::pow(value - 3, 3)) +2  ; });///25
    /* std::cout << two_variables(4, 2, [](int first, int second) {
        std::cout << first + second << "\n" << first - second<<std::endl;
        return std::pow(first,2)/ std::pow(second,2); 
    });///10*/
    /*std::cout << two_variables(4, 2, [](int r_1, int r_2) {
        std::cout << (3.14 * std::pow(r_1, 2))<<"\n"<< (3.14 * std::pow(r_2, 2))<<std::endl;
        return (3.14 * std::pow(r_1, 2)) - (3.14 * std::pow(r_2, 2));
    });///13*/
    /*std::cout << two_variables(4, 2, [](int first, int second) {
        std::cout << std::fabs(first) + std::fabs(second) << "\n" << std::fabs(first) - std::fabs(second) << "\n";
        return std::fabs(first) / std::fabs(second);
    });///11*/





   /* std::cout << three_variables_and_more(4, 3, 2, [](int width, int height, int length) {
        std::cout << 2 * ((width * height) + (width * length) + (width * length)) << std::endl;
        return width * height * length;
    });///6*/
    
}