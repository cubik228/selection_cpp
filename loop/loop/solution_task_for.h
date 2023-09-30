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
