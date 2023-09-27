#pragma once
#include <iostream>
template<typename T_int, typename T_double, class Function>
T_double two_variables(T_double first, T_int second, Function func) {
    return func(first, second);
}
int square_perimeter(int side)///1
{
    std::cout << two_variables(side, 0, [](int side, int variable_plug) {return side * 4; });///1
    return 0;
}