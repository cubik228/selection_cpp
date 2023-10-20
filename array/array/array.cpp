#include <iostream>
#include "help_func.h"
#include "array_task.h"


int main()
{
	int col= 5, row = 5;
	const int size = 10;
	int size3 = 8;
	double arr[]{1,7,9,7,8,8,8,7};
	double arr_2[10][size];
	int** arr_v2 = new int* [col];
	for (int i = 0; i < col; i++) {
		arr_v2[i] = new int[row];
	}
	fill_array(arr_v2, col, row);
	delete_array(arr_v2,col);
	//std::cout << my_template::sum_template(arr, arr + size3, 0, [](int a, int b) {return a+b; });
	//my_template::print_array(arr, arr + size3, [](int a) {std::cout<< a; });
	//whole_parts_of_all_numbers(arr,size3);
	//sum_and_product(arr, size3);
	//std::cout<<average(arr, size3);
	//product(arr, size3);
	//std::cout<<sum(arr, size3);
	//product_of_all_fractional_parts(arr,size3,1);
	//sum_of_all_rounded_values(arr , size3);
	//output_even_numbers(arr , size3,0,2,0);
	//std::cout<<checking_for_positive_numbers(arr,size3,0,0);
	//amount_of_numbers(arr, size3,1);
	//sum_of_all_positive_even_numbers(arr,size3);
	//checking_for_positive_numbers(arr,size3,2);
	//std::cout<<checking_for_positive_numbers_v2(arr,size3,8);
	//std::cout<<number_of_the_first_number_in_the_set_of_larger_K(arr,size3,7);
	//std::cout<<is_increasing_sequence(arr,size3,5);
	//elements_of_the_set_together_with_number_B(arr ,size3,3);
	all_different_elements(arr,size3);
}
