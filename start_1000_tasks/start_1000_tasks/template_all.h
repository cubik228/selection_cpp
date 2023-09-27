#pragma once
template<typename T_int, class Function>
T_int three_variables_and_more(T_int first, T_int second, T_int third, Function func) {
    return func(first, second, third);
}
template<typename T_int, typename T_double, class Function>
T_double two_variables(T_double first, T_int second, Function func) {
    return func(first, second);
}
template<typename T, class Function>
T tasks_with_coordinates(T x1, T x2, T y1, T y2, T x3, T y3) {
    return func(x1, x2, y1, y2, x3, y3);
}