#pragma once
#include "help_func.h"
#include <algorithm>
#include <cmath>
#include "mytemplate.h"
template<typename T,class Iterator>///1
T sum(Iterator first, T last)
{
	return my_template::sum_template(first, first +last, 0, [](double a, double b) {return a + b; });
}
template<typename T, class Iterator>///2
T product(Iterator first, T last)
{
	return my_template::sum_template(first, first+ last, 1, [](double a, double b) {return a * b; });
}
template<typename T, class Iterator>///3
T average(Iterator first, T last) 
{
	return sum(first,last) / last;
}
template<class Iterator>///4
void sum_and_product(Iterator first, int last) 
{
	std::cout << sum(first, last)<<std::endl;
	std::cout << product(first,last);
}
template< typename T, class Iterator>///5
void whole_parts_of_all_numbers(Iterator first, T last) {
	return my_template::print_array(first, first + last, [](int value) {std::cout << value; });
}
template<typename T, class Iterator>///6
void product_of_all_fractional_parts(Iterator first, T last,int result)
{
	return my_template::print_array(first, first + last, [&result](double value) {
		std::cout << value - int(value) << std::endl;
		result *= value - int(value);
		return result;
	});
}
template<typename T, class Iterator>///7
void sum_of_all_rounded_values(Iterator first, T last)
{
	return my_template::print_array(first, first + last, [](int value) {std::cout << std::round(value); });
}
template<typename T, class Iterator>///8 9 
T output_even_numbers(Iterator first, T last, int number,int on_off){
	return my_template::sum_template(first, first + last, 0, [ &number, &on_off](int value, double count) {
		if (value % number == on_off) {
			std::cout << value << " ";
			count++;
		}
		return count;
	});
	
}
template<typename T, class Iterator>///10 11 
bool checking_for_positive_numbers(Iterator first, T last,T value)
{
	return my_template::sum_template(first, first + last, 1, [&value](double a, double b) {
		if (a > value) {
			return true;
		}
		return false; 
	});
}
template<typename T, class Iterator>///12
void amount_of_numbers(Iterator first, T last,T count)
{
	return my_template::print_array(first, first + last, [&count](int value) {std::cout << count++; });
}
template<typename T, class Iterator>///13
void sum_of_all_positive_even_numbers(Iterator first, T last) 
{
	return my_template::print_array(first, first + last, [](int value) {
		if (value > 0 && value % 2 == 0) {
			std::cout << value;
		}
	});
}
template<typename T, class Iterator>///14
T checking_for_positive_numbers_v2(Iterator first, T last, T value)
{
	return my_template::sum_template(first, first + last, 0, [&value](double a, double count) {
		if (a < value) {
			count++;
		}
		return count;
	});
}

template<typename T, class Iterator>///15
T number_of_the_first_number_in_the_set_of_larger_K(Iterator first, T last,int number)
{
	return my_template::sum_template(first, first + last, 0, [&number](int a, double b) {
		if (a > number) {
			std::cout<< a;
			return 0;
		}
		return 1; ///todo
	});
}
template<typename T>
bool isIncreasingSequence(T arr, int size) {//16
	for (int i = 0; i < size; i++) {
		if (*(arr +i) >= *(arr + i + 1)) {
			return false;
		}
	}
	return true;
}
template<typename T>
void elements_of_the_set_together_with_number_B(T arr, int size, int value) ///17
{
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < value) {
			std::cout << value;
		}
	}
}
template<typename T>
void all_different_elements(T arr, int size, int value) {///18
	bubbleSort(arr, size);
	int j = 0;
	for (int i = 0; i < size; ++i) {
		if (i == 0 || *(arr + i) != *(arr + i- 1)) {
			*(arr + j++) = *(arr + i);
		}
	}
	size = j;
	for (int i = 0; i < size; ++i) {
		std::cout << *(arr + i) << " ";
	}
}
template<typename T>
int less_than_its_left_neighbor(T arr,int size) {//19
	int count = 0;
	for (int i = 1; i < size; i += 2)
	{
		if (*(arr + i) < *(arr + i - 1))
		{
			std::cout << *(arr + i) << std::endl;
			count++;
		}
	}
	return count;
}
template<typename T>
T less_than_its_rigth_neighbor(T arr, int size) {//20
	int count = 0;
	for (int i = 0; i < size; i += 2)
	{
		if (*(arr + i) > *(arr + i + 1))
		{
			std::cout << *(arr + i) << std::endl;
			count++;
		}
	}
	return count;
}
template<typename T>
int checking_and_violating_descending_sequence(T arr, int size) {//21
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < *(arr + i + 1))
		{
			count++;
			std::cout << count << std::endl;
			return 0;
		}
	}
	return count;
}
template<typename T>
void check_for_sequence_type(T arr, int size) ///22
{
	for (int i = 0; i < size - 1; i++) {
		if ((*(arr + i) > *(arr + i + 1))) {
			std::cout << "0";
			break;
		}
		std::cout << *(arr + i);
		break;
	}
}
template<typename T>
T sawtooth_check(T arr, int size) {//23
	int count = 0;
	for (int i = 1; i < size; i++)
	{
		if (*(arr + 1) < *(arr + i) && *(arr + i) > *(arr + i - 1) || *(arr + i) < *(arr + i + 1) && *(arr + i) < *(arr + i - 1))
		{
			count++;
			std::cout << count << std::endl;
		}
	}
	return 0;
}
template<typename T>
 double sum_between_zeros( T arr,int size)///24
{
	double sum = 0, last_zero = -1, second_last_zero = -1;
	for (int i = size - 1; i >= 0; i--) {
		if (*(arr + i) == 0) {
			if (last_zero == -1)
			{
				last_zero = i;
			}
			else
			{
				second_last_zero = i;
				break;
			}
		}
	}
	if (second_last_zero == -1 || last_zero == -1) {
		return -1;
	}
	if (last_zero == second_last_zero +1) {
		return 0;
	}
	for (int i = second_last_zero + 1; i < last_zero; i++) {
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
int sum_between_zeros_v2(T arr, int size) ///25
{
	double sum = 0, first_zero = -1, last_zero = -1;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) == 0) {
			if (first_zero == -1) {
				first_zero = i;
			}
			else {
				last_zero = i;
			}
		}
	}
	if (first_zero == -1 || last_zero == -1) {
		return 0;
	}
	for (int i = first_zero + 1; i < last_zero; i++) {
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
void calculatePowers_v1(T arr,int size ,int value) { ///26
	for (int i = 0; i < size; i++) {
		double result = pow(*(arr +i), value);
		std::cout << "A" << i + 1 << "^" << value << " = " << result << std::endl;
	}
}
template<typename T>
void calculatePowers_v2(T arr,int size ){///27
	for (int i = 0; i < size; i++) {
			*(arr + i ) = pow(*(arr + i), i);
			std::cout  << *(arr + i) << std::endl;
	}
}
template<typename T>
void calculatePowers(T arr,int size) {///28
	for (int i = 0; i < size; i++) {
		 *(arr + i) = pow(*(arr + i), size - i);
		std::cout << *(arr + i) << std::endl;
	}
}
template<typename T>
double calculateTotalSum(T** arr,int value, int N) {///29
	double total_sum = 0;
	for (int i = 0; i < value; i++) {
		total_sum += sum_dv(*(arr +i), N);
	}
	return total_sum;
}
template<typename T>
void sum_of_elements(T** arr, int row, int col) {///30
	for (int i = 0; i < row; i++) {
		int sum = 0;
		for (int j = 0; j < col; j++) {
			sum += *(*(arr + i) + j);
		}
		std::cout  << i + 1 << ": " << sum << std::endl;
	}
}
template<typename T>
int sum_of_elements_v2(T** arr,int row, int col) {///31
	int coutn = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col;j++) {
			if (*(*(arr + i) + j) == 2) {
				coutn++;
			}
		}
	}
	return coutn;
}
template<typename T>
void check_for_number_2(T** arr,int row, int col) {///32
	int coutn = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (*(*(arr + i) + j) == 2 || *(*(arr + i) + j) == 0) {
				std::cout << *(*(arr + i) + j);
				break;
			}
		}
	}
}
template<typename T>
void print_last_index(T** arr,int row, int col) {///33
	for (int i = 0; i < row; i++) {
		int last_index = 0;
		for (int j = 0; j < col; j++) {
			if (*(*(arr + i) + j) == 2) {
				last_index = j + 1;
			}
		}
		std::cout <<  i + 1 << ": " << last_index << std::endl;
	}
}
template<typename T>
int print_last_index_v2(T** arr,int row, int col) {///34
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (*(*(arr + i) + j) == 2) {
				std::cout<<sum_2d_array(arr, row, col);
			}
		}
	}
	return 0;
}
template<typename T>
void count_elements_v1(T** arr,int row, int col) {///35
	for (int i = 0; i < row; i++) {
		int count = 0;
		for (int j = 0; j < col; j++) {
			if (*(*(arr + i) + j) != 0) {
				count++;
			}
		}
		std::cout << i + 1 <<": " << count << std::endl;
	}
	std::cout << "Total number : " << row * col << std::endl;
}
template<typename T>
void count_elements_v2(int row, T** arr) {///36
	int  sum = 0;
	for (int i = 0; i < row; i++) {
		int count = 0;
		int prev = -1;
		int curr = *(*(arr + i) + 0);
		int j = 1;
		while (curr != 0) {//проверка на нулевой элемент массива
			if (prev < curr) {
				count++;
			}
			prev = curr;
			curr = *(*(arr + i) + j);
			j++;
		}
		if (count == 0) {
			continue;
		}
		std::cout << count << std::endl;
		sum += 1;
	}
	std::cout  << sum << std::endl;
}
template<typename T>
void count_elements_v3(int row, T** arr) {///37
		int  sum ;
		for (int i = 0; i < row; i++) {
			int count = 0;
			int prev = -1;
			int j = 1;
			int curr = *(*(arr + i) + 0);
			while (curr != 0) {
				if (prev < curr) {
					count++;
				}
				else if (prev > curr) {
					count--;
				}
				prev = curr;
				curr = *(*(arr + i) + j);
				j++;
			}
			if (count == 0) {
				continue;
			}
			std::cout << count << std::endl;
			sum += 1;
		}
		std::cout<< sum << std::endl;
}
template<typename T>
int count_elements_v4(int row, T** arr) {///38
	int  sum = 0;
	for (int i = 0; i < row; i++) {
		int count = 0, prev = -1, j = 1;
		int curr = *(*(arr + i) + 0);
		while (curr != 0) {
			if (prev < curr) {
				count++;
			}
			else if (prev > curr) {
				count--;
			}
			prev = curr;
			curr = *(*(arr + i) + j);
			j++;
		}
		return count;
	}
}
int count_sawtooths_v1(int value) {///39
	int   count =0 ;
	for (int i = 0; i < value; i++) {
		int  cur = 0;
		while (value != 0) {
			int prev = cur, cur = value;
			if ((prev < cur && cur > value) || (prev > cur && cur < value)) {
				count++;
			}
		}
	}
	return count;
}
template<typename T>
T count_sawtooths_v2(T arr, int size) {///40
	int count = 0;
	for (int i = 0; i < size; i++) {
		int  cur = *(arr + i), prev = cur;
		if (i > 1 && ((prev < cur && cur > *(arr + (i - 2))) || (prev > cur && cur < *(arr + (i - 2))))) {
			count++;
		}
	}
	return count;
}