#include <iostream>
#include "help_func.h"
#include "array_task.h"
#include "mytemplate.h"

int main()
{
	int col= 5, row = 5;
	const int size = 10;
	double size3 = 8;
	double arr[]{4,4,7,1,2,1,2,1};
	double arr_2[10][size];
	int** arr_v2 = new int* [col];
	for (int i = 0; i < col; i++) {
		arr_v2[i] = new int[row];
	}
	fill_array(arr_v2, col, row);
	delete_array(arr_v2,col);
	//whole_parts_of_all_numbers(arr,arr + 8);
	//sum_and_product(arr, arr + 8);
	//std::cout<<average(arr, size3);
	//product(arr, arr + 8);
	//std::cout<<sum(arr, arr + 8);
	//product_of_all_fractional_parts(arr,arr  + 8,1);
	//sum_of_all_rounded_values(arr , arr + 8);
	//output_even_numbers(arr , arr+8,0,2);
	//std::cout<<checking_for_positive_numbers(arr,arr + 8,0);
	//amount_of_numbers(arr, arr + 8,1);
	//sum_of_all_positive_even_numbers(arr,arr + 8);
	//checking_for_positive_numbers(arr,arr + 8,2);
	//std::cout<<checking_for_positive_numbers_v2(arr,arr+8,8);
	//std::cout<<number_of_the_first_number_in_the_set_of_larger_K(arr,arr + 8,7);
	//std::cout<<is_increasing_sequence(arr, arr + 8,5);
	//elements_of_the_set_together_with_number_B(arr , arr + 8,3);
	//all_different_elements(arr, arr + 8 + 8);
	//less_than_its_left_neighbor(arr,arr + 8,0);
	//less_than_its_rigth_neighbor(arr,arr + 8,0);
	//std::cout<<checking_and_violating_descending_sequence(arr,arr +8,0);
	//std::cout<<check_for_sequence_type(arr,arr + 8,0);
	//std::cout<<sawtooth_check(arr,arr + 8,0);
	//std::cout<<sum_between_zeros(arr,arr + 8,0,0);
	//calculate_powers_v1(arr,arr + 8 ,2);
	//calculate_powers_v2(arr,arr+8,0);
	//calculate_powers_v3(arr,arr+8,0);
}