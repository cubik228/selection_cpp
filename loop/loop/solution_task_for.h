#pragma once
#include <iostream>
#include "template_all.h"
#include "help_func.h"
void N_times_number_K(int start, int end,int value) ///1
{
	 std::cout<< task_for(start, end, value,0, [](int start, int end, int value) { return value; });
}
void in_ascending_order(int start, int end) ///2
{
	std::cout << task_for(start, end, 0, end - 1, [](int start, int end, int times) {std::cout << start<<std::endl;return times; });
}
void in_descending_order(int start, int end) ///3
{
	std::cout << task_for(start, end, 0, end - 1, [](int start, int end, int times) { return reverse_print(start); });
}
void calculating_cost(int start, int end,int price) ///4
{
	std::cout << task_for(start, end, price, 0, [](int start, int end, int price) {start++; return price * start; });
}
void calculating_cost_double(double start, double end, double price) ///5
{
	std::cout << task_for(start, end, price, 0.0, [](double start, double end, double price) {start+=0.1; return price * start; });
}
void task_number_6(double price, double kg) ///6
{
	for (; kg <= 2; kg += 0.2)
	{
		std::cout << price * kg << std::endl;
	}
}
void sum_between(int start, int end) ///7
{
	std::cout << task_for(start, end, 0, 0, [](int start, int end, int sum) { return sum+=1;});
}
void product_between(int start, int end) ///8
{
	std::cout << task_for(start, end, 1, 0, [](int start, int end, int sum) { return sum *= start;});
}
void sum_of_squares_between(int start, int end) ///9
{
	std::cout << task_for(start, end, 1, 0, [](int start, int end, int sum) { return sum += std::pow(start,2);});
}
void sum_of_division_between(double start, double end) ///10
{
	std::cout << task_for(start, end, 1.0, 0.0, [](double start, double end, double sum) { return sum += 1/start;});
}
void calculation_sum_v1(int start, int end) ///11
{
	std::cout << task_for(start, end, 1, 0, [](int start, int end, int sum) { return sum += std::pow(end + start, 2);});
}
void calculation_sum_v2(double start, double end) ///12
{
	std::cout << task_for(start, end, 1.0, 0.0, [](double start, double end, double sum) { return sum = sum * (1 + 0.1 * start);});
}
void calculation_sum_v3(double start, double end) ///13
{
	std::cout << task_for(start, end, 1.0, 0.0, [](double start, double end, double sum) { return sum += std::pow(-1, start + 1) * (1 + start / 10);});
}
void calculation_sum_v4(double start, double end) ///14
{
	std::cout << task_for(start, end, 1.0, 0.0, [](double start, double end, double sum) { return sum += 2 * start - 1;});
}
void calculation_sum_v5(int start, int end,int value) ///15
{
	std::cout << task_for(start, end, value, 1, [](int start,int value, int sum) { return sum *= value;});
}
void calculation_squares_V1(int start, int end, int value) ///16
{
	std::cout << task_for(start, end, value, 1, [](int start, int value, int sum) { return sum = std::pow(value,start);});
}
void calculation_squares_v2(int start, int end, int value) ///17
{
	std::cout << task_for(start, end, value, 1, [](int start, int value, int sum) { return sum += std::pow(value, start);});
}
void calculation_squares_v3(int start, int end, int value) ///18
{
	std::cout << task_for(start, end, value, 1, [](int start, int value, int sum) { return start % 2 == 0 ? sum -= std::pow(value, start) : sum += std::pow(value, start);});
}
void sum_factorials_v1(int start, int end) ///20
{
	std::cout << task_for(start, end, 0, 1, [](int start, int end, int sum) { return  sum += Fact(start);});
}
void sum_factorials_v2(double start, double end) ///21
{
	std::cout << task_for(start, end, 0.0, 1.0, [](double start, double value, double sum) { return sum += 1/Fact(start);});
}
void sum_factorials_v3(double start, double end, double value) ///22
{
	std::cout << task_for(start, end, value, 1.0, [](double start, double value, double sum) { return sum += std::pow(value ,start)/Fact(start);});
}
void sum_factorials_v4(double start, double end, double value) ///23
{
	std::cout << task_for(start, end, value, 1.0, [](int start, double value, double sum) { return start % 2 == 0 ? sum -= std::pow(value, start) / Fact(start) : sum += std::pow(value, start) / Fact(start);});
}
void sum_factorials_v5(double start, double end, double value) ///24
{
	std::cout << task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += pow(-1, start) * pow(value, 2 * start) / Fact(2 * start);});
}
void sum_factorials_v6(double start, double end, double value) ///25
{
	std::cout << task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += pow(-1, start - 1) * pow(value, start) / start;});
}
void sum_factorials_v7(double start, double end, double value) ///26
{
	std::cout << task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += pow(-1, start) * pow(value, 2 * start + 1) / (2 * start + 1);});
}
void math_calculation_v1(double start, double end, double value) ///27
{
	std::cout << task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += (2 * start - 1) * pow(value, 2 * start + 1) / (2 * start) * (2 * start + 1);});
}
void math_calculation_v2(double start, double end, double value) ///28
{
	std::cout << task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += pow(-1, start - 1) * (2 * start - 3) * pow(value, start) / (2 * start);});
}
void task_number_29(double start, double end, double value, double h) ///29
{
	std::cout << task_for(start, end, value, (end - start) / value, [&h](int start, double value, double sum) {std::cout << h << std::endl;return sum = value + start * h;});
}
void task_number_30(double start, double end, double value, double a, double h) ///30
{
	std::cout << task_for(start, end, value, (end - start) / value, [&h](int start, double value, double sum) {std::cout << h << std::endl;return sum = 1 - std::sin(value + start * h);});
}
void task_number_31(double start, double end, double value) ///31
{
	std::cout << task_for(start, end, value, 1.0, [](int start, double value, double sum) {return value = 2 + 1 / value;});
}
void task_number_32(double start, double end, double value) ///32
{
	std::cout << task_for(start, end, value, 1.0, [](int start, double value, double sum) {std::cout << start << " " << (value + 1) / start << " ";return value = (value + 1) / start;});
}
void math_calculation_v3(double start, double end, double value) ///36
{
	std::cout << task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += std::pow(start, value);});
}
void  task_number_37(double start, double end) ///37
{
	std::cout << task_for(start, end, 0.0, 0.0, [](double start, double end, double sum) {return sum += std::pow(start, start);});
}
void  task_number_38(int start, int end) ///38
{
	std::cout << task_for(start, end, 0, 0, [](int start, int end, int sum) {end--;return sum += pow(start, end);});
}
void  task_number_39(double start, double end) ///39
{
	std::cout << task_for(start, end, 0.0, 0.0, [](double start, double end, double sum) {for (int start = 0; start <= end; ++start) { return start; }});
}
void  task_number_40(double start, double end) ///40
{
	std::cout << task_for(start, end, 0.0, 0.0, [](double start, double end, double sum) {for (int start = 0; start <= end; ++start) { for (int i = 1; i <= end - start + 1; i++) { return start + i - 1; } }});
}
