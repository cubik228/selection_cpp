#include <iostream>
#include "help_func.h"
#include "array_task.h"
int main()
{
	const int size = 11;
	double arr_d[size];
	fill(arr_d, size);
	print_array(arr_d, size);
}
