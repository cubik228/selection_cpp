#include <iostream>
#include <vector>
#include "fill_array.h"
#include "print_array.h"
#include "array_task.h"
int main()
{
	const int size = 11;
	int arr[size];
	std::vector<double>vector(size);
	//fill_array_int(arr, size);
	fill_array_double(vector, size);
	//print_array(arr,size);
	//std::cout<<sum_array(arr,size);
	std::cout << proizvedenie_array(arr, size);
}
