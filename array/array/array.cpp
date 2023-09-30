#include <iostream>
#include <vector>
#include "fill_array.h"
#include "print_array.h"
#include "array_task.h"
int main()
{
	const int size = 11;
	int arr_i[size];
	double arr_d[size];
	 fill_d(arr_d, size);
	print_array(arr_d, size);
}
