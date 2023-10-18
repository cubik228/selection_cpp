#include <iostream>
#include "help_func.h"
#include "array_task.h"


int main()
{
	int col= 5, row = 5;
	const int size = 10;
	int size3 = 8;
	double arr[]{8,8,8,8,8,8,8,1};
	double arr_2[10][size];
	int** arr_v2 = new int* [col];
	for (int i = 0; i < col; i++) {
		arr_v2[i] = new int[row];
	}
	fill_array(arr_v2, col, row);
	delete_array(arr_v2,col);
	auto sum = 1;
	auto dla_zd_3_4 =  my_template::sum_template(arr, arr + size3, 0, [&sum](double acamulate, int v) {sum += acamulate;return sum; });///1
	auto dla_zd_4 =  my_template::sum_template(arr , arr + size3, 1, [&sum](double acamulate , int res) {sum *= acamulate;return sum; });///2
	//std::cout << my_template::sum_template(arr, arr + size3, size, [&dla_zd_3](double acamulate, int size) {return   dla_zd_3/size; });///3
	//std::cout << my_template::sum_template(arr, arr + size3, size, [&dla_zd_3_4,&sum,&dla_zd_4](double acamulate, int size) {std::cout<<dla_zd_3_4<<std::endl;return  dla_zd_4; });///4
}
