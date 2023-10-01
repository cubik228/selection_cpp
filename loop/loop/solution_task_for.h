#pragma once
#include <iostream>
#include "template_all.h"
#include "help_func.h"
int N_times_number_K(int start, int end,int value) ///1
{
	 return task_for(start, end, value,0, [](int start, int end, int value) { return value; });///1
}
int in_ascending_order(int start, int end) ///2
{
	return task_for(start, end, 0, end - 1, [](int start, int end, int times) {std::cout << start<<std::endl;return times; });///2
}
int in_descending_order(int start, int end) ///3
{
	return task_for(start, end, 0, end - 1, [](int start, int end, int times) { return reverse_print(start); });///3
}
int calculating_cost(int start, int end,int price) ///4
{
	return task_for(start, end, price, 0, [](int start, int end, int price) {start++; return price * start; });///4
}
double calculating_cost_double(double start, double end, double price) ///5
{
	return task_for(start, end, price, 0.0, [](double start, double end, double price) {start+=0.1; return price * start; });///5
}
int sum_between(int start, int end) ///7
{
	return task_for(start, end, 0, 0, [](int start, int end, int sum) { return sum+=1;});///7
}
int product_between(int start, int end) ///8
{
	return task_for(start, end, 1, 0, [](int start, int end, int sum) { return sum *= start;});///8
}
int sum_of_squares_between(int start, int end) ///9
{
	return task_for(start, end, 1, 0, [](int start, int end, int sum) { return sum += std::pow(start,2);});///9
}
double sum_of_division_between(double start, double end) ///10
{
	return task_for(start, end, 1.0, 0.0, [](double start, double end, double sum) { return sum += 1/start;});///10
}
int calculation_sum_v1(int start, int end) ///11
{
	return task_for(start, end, 1, 0, [](int start, int end, int sum) { return sum += std::pow(end + start, 2);});///11
}
double calculation_sum_v2(double start, double end) ///12
{
	return task_for(start, end, 1.0, 0.0, [](double start, double end, double sum) { return sum = sum * (1 + 0.1 * start);});///12
}
double calculation_sum_v3(double start, double end) ///13
{
	return task_for(start, end, 1.0, 0.0, [](double start, double end, double sum) { return sum += std::pow(-1, start + 1) * (1 + start / 10);});///13
}
double calculation_sum_v4(double start, double end) ///14
{
	return task_for(start, end, 1.0, 0.0, [](double start, double end, double sum) { return sum += 2 * start - 1;});///14
}
int calculation_sum_v5(int start, int end,int value) ///15
{
	return task_for(start, end, value, 1, [](int start,int value, int sum) { return sum *= value;});///15
}
int calculation_squares_V1(int start, int end, int value) ///16
{
	return task_for(start, end, value, 1, [](int start, int value, int sum) { return sum = std::pow(value,start);});///16
}
int calculation_squares_v2(int start, int end, int value) ///17
{
	return task_for(start, end, value, 1, [](int start, int value, int sum) { return sum += std::pow(value, start);});///17
}
int calculation_squares_v3(int start, int end, int value) ///18
{
	return task_for(start, end, value, 1, [](int start, int value, int sum) { return start % 2 == 0 ? sum -= std::pow(value, start) : sum += std::pow(value, start);});///18
}
int sum_factorials_v1(int start, int end) ///20
{
	return task_for(start, end, 0, 1, [](int start, int value, int sum) { return  sum += Fact(start);});///20
}
double sum_factorials_v2(double start, double end) ///21
{
	return task_for(start, end, 0.0, 1.0, [](double start, double value, double sum) { return sum += 1/Fact(start);});///21
}
double sum_factorials_v3(double start, double end, double value) ///22
{
	return task_for(start, end, value, 1.0, [](double start, double value, double sum) { return sum += std::pow(value ,start)/Fact(start);});///22
}
double sum_factorials_v4(double start, double end, double value) ///23
{
	return task_for(start, end, value, 1.0, [](int start, double value, double sum) { return start % 2 == 0 ? sum -= std::pow(value, start) / Fact(start) : sum += std::pow(value, start) / Fact(start);});///23
}
double sum_factorials_v5(double start, double end, double value) ///24
{
	return task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += pow(-1, start) * pow(value, 2 * start) / Fact(2 * start);});///24
}
double sum_factorials_v6(double start, double end, double value) ///25
{
	return task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += pow(-1, start - 1) * pow(value, start) / start;});///25
}
double sum_factorials_v7(double start, double end, double value) ///26
{
	return task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += pow(-1, start) * pow(value, 2 * start + 1) / (2 * start + 1);});///26
}
double math_calculation_v1(double start, double end, double value) ///27
{
	return task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += (2 * start - 1) * pow(value, 2 * start + 1) / (2 * start) * (2 * start + 1);});///27
}
double math_calculation_v2(double start, double end, double value) ///28
{
	return task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += pow(-1, start - 1) * (2 * start - 3) * pow(value, start) / (2 * start);});///28
}
double math_calculation_v3(double start, double end, double value) ///36
{
	return task_for(start, end, value, 1.0, [](int start, double value, double sum) { return sum += std::pow(start,value);});///36
}
double task_number_32(double start, double end, double value) ///32
{
	return task_for(start, end, value, 1.0, [](int start, double value, double sum) {std::cout << start << " " << (value + 1) / start << " ";return value = (value + 1) / start;});///32
}
int  task_number_38(int start, int end) ///38
{
	return task_for(start, end, 0, 0, [](int start, int end, int sum) {end--;return sum += pow(start, end);});///38
}
double  task_number_37(double start, double end) ///37
{
	return task_for(start, end, 0.0, 0.0, [](double start, double end, double sum) {return sum += std::pow(start, start);});///37
}
double task_number_31(double start, double end, double value) ///31
{
	return task_for(start, end, value, 1.0, [](int start, double value, double sum) {return value = 2 + 1 / value;});///31
}
double task_number_29(double start, double end, double value) ///29
{
	return task_for(start, end, value, (end - start) / value, [](int start, double value, double sum,double h) {std::cout << h << std::endl;return sum = value + start * h;});///29
}
double task_number_30(double start, double end, double value, double a) ///30
{
	return task_for(start, end, value, (end - start) / value, [](int start, double value, double sum, double h) {std::cout << h << std::endl;return sum = 1 - std::sin(value + start * h);});///30
}
void task_number_39(int start, int end) ///39
{
	for (int start = 0; start <= end; ++start)
	{
		for (int item = 1; item <= start; ++item)
		{
			std::cout << start << std::endl;
		}
	}
}
void task_number_40(int start, int end) ///40
{
	for (int i = 1; i <= end - start + 1; i++)
	{
		for (int k = 1; k <= i; k++)
		{
			std::cout << start + i - 1 << std::endl;
		}
	}
}