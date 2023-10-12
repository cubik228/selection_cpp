#include <iostream>
#include "help_func.h"
#include "array_task.h"


int main()
{
	int col= 5, row = 5;
	const int size = 10;
	double arr[size] = {1,6,0,5,7,8,0,10};
	double arr_2[10][size];
	int** arr_v2 = new int* [col];
	for (int i = 0; i < col; i++) {
		arr_v2[i] = new int[row];
	}
	fill_array(arr_v2, col, row);
	//std::cout<<print_last_index_v2(arr_v2,row,col);///34
	//count_elements_v1(arr_v2,row,col);///35
	//std::cout<<sum_between_zeros(arr,size);///23
	//print_last_index(arr_v2,row,col);///33
	sum_of_elements(arr_v2,row ,col);
	delete_array(arr_v2,col);
}
