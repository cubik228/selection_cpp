#include <iostream>
#include "help_func.h"
#include "array_task.h"


int main()
{
	int col= 10, row = 10;
	const int size = 10;
	double arr[size] = {231,34,3,4,5,6,7,8,9,10};
	double arr_2[10][size];
	int** arr_v2 = new int* [col];
	for (int i = 0; i < col; i++) {
		arr_v2[i] = new int[row];
	}
	fill_array(arr_v2, col, row);
	//std::cout<<print_last_index_v2(arr_v2,row,col);///34
	//count_elements_v1(arr_v2,row,col);///35
	delete_array(arr_v2,col);
}
