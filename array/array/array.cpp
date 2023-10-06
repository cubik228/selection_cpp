#include <iostream>
#include "help_func.h"
#include "array_task.h"
void task_number_20(void (*f)(int), int size) {
	(*f)(size);
}

int main()
{
	const int size = 10;
	double arr[size] = {231,34,3,4,5,6,7,8,9,10};
	//task_number_20(arr, size);
	//std::cout<< task_number_21(arr, size);
	task_number_22(arr, size);
}
