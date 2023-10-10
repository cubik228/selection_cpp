#pragma once
#include "help_func.h"
#include <algorithm>
template<typename T>
T sum_array( T arr,int size) ///1
{
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
T average(T arr, int size) ///2
{
	double average = 0;
	for (int i = 0; i < size; i++)
	{
		average += *(arr + i);
	}
	return average / size;
}
template<typename T>
T arithmetic_mean(T arr, int size)///3
{
	double srznach = 1;
	for (int i = 0; i < size; i++)
	{
		srznach += *(arr +i) / 2;
	}
	return srznach;
}
template<typename T>
void sum_and_product(T arr, int size) ///4
{
	double sum = 0;
	int proizv = 1;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
		proizv *= *(arr + i);
	}
	std::cout << "sum= " << sum << std::endl << "proizv= " << proizv<<std::endl;
}
template<typename T>
T whole_parts_of_all_numbers(T arr, int size) ///5
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		double fraction = *(arr + i) - floor(*(arr + i));
		*(arr + i) = *(arr + i) - fraction;
		std::cout << *(arr + i) << " ";
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
T product_of_all_fractional_parts(T arr,int size)///6
{
	double tas = 1;
	for (int i = 0; i < size; i++)
	{
		double dec = *(arr + i) - static_cast<int>(*(arr + i));
		double integ = *(arr + i) - dec;
		std::cout << *(arr + i) - integ << " ";
		tas *= dec;
	}
	return tas;
}
template<typename T>
T sum_of_all_rounded_values(T arr, int size) ///7
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		double fraction = *(arr + i) - int(*(arr + i));
		*(arr + i) = *(arr + i) - fraction;
		std::cout << *(arr + i) << " ";
		sum += std::round(*(arr + i));
	}
	return sum;
}
template<typename T>
T output_even_numbers(T arr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (static_cast<int>(*(arr + i)) % 2 == 0) {
			*(arr + i) *= 2;
			std::cout << *(arr + i) << " ";
			count++;
		}
	}
	return count;
}
template<typename T>
T output_odd_numbers(T arr, int size) ///9
{
	double sum = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";

		if (int(*(arr + i)) % 2 == 0) {
			std::cout << i;
			count++;
		}
	}
	return count;
}
template<typename T>
bool checking_for_positive_numbers(T arr, int size)///10
{
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > 0)
		{
			return true;
		}
	}
	return false;
}
template<typename T>
T checking_for_numbers_less_than_k(T arr, int size, int value) ///11
{
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < value) {
			return true;
		}
	}
	return false;
}
template<typename T>
T amount_of_numbers(T arr, int size)///12
{
	int count = 0;
	for (int i = 1; i < size; i++)
	{
		if (*(arr + i) == 0) {
			break;
			count++;
		}
	}
	return count;
}
template<typename T>
bool sum_of_all_positive_even_numbers(T arr, int size) ///13
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (int(*(arr + i)) > 0 && int(*(arr + i)) % 2 == 0) {
			sum += *(arr + i);
		}
	}
	std::cout << sum;
	return false;
}
template<typename T>
T number_of_numbers_in_set_smaller_K(T arr, int size, int value) ///14
{
	int mensh = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == 0) {
			break;
			if (*(arr + i) < value)
				mensh++;
		}
	}
	return mensh;
}
template<typename T>
void number_of_the_first_number_in_the_set_of_larger_K(T arr, int size, int value) ///15
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > value) {
			std::cout << i;
			break;
		}
	}
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
T sum_between_zeros( T arr,int size)///24
{
	double sum = 0, last_zero = -1, second_last_zero = -1;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) == 0) {
			second_last_zero = last_zero;
			last_zero = i;
		}
	}
	if (second_last_zero == -1) {
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
		if (i == size - 1) {
			double result = pow(*(arr + i), size);
			std::cout << "A" << i + 1 << "^" << size << " = " << result << std::endl;
		}
		else {
			double result = pow(*(arr + i), i + 1);
			std::cout << "A" << i + 1 << "^" << i + 1 << " = " << result << std::endl;
		}
	}
}
template<typename T>
void calculatePowers(T arr,int size) {///28
	for (int i = 0; i < size; i++) {
		double result = pow(*(arr + i), size - i);
		std::cout << "A" << i + 1 << "^" << size - i << " = " << result << std::endl;
	}
}

double calculateTotalSum(int value, int N, double **arr) {///29
	double total_sum = 0;
	for (int i = 0; i < value; i++) {
		total_sum += sum_dv(*(arr +i), N);
	}
	return total_sum;
}
void sum_of_elements(int value, int N, int **arr) {///30
	for (int i = 0; i < value; i++) {
		int sum = 0;
		for (int j = 0; j < N; j++) {
			sum += *(*(arr + i) + j);
		}
		std::cout << "Сумма элементов набора " << i + 1 << ": " << sum << std::endl;
	}
}
int sum_of_elements_v2(int value, int N, int** arr) {///31
	int coutn = 0;
	for (int i = 0; i < value; i++)
	{
		for (int j = 0; j < N;j++) {
			if (*(*(arr + i) + j) == 2) {
				coutn++;
			}
		}
	}
	return coutn;
}
void check_for_number_2(int value, int N, int** arr) {///32
	int coutn = 0;
	for (int i = 0; i < value; i++) {
		for (int j = 0; j < N; j++) {
			if (*(*(arr + i) + j) == 2 || *(*(arr + i) + j) == 0) {
				std::cout << *(*(arr + i) + j);
				break;
			}
		}
	}
}
void print_last_index(int value, int N, int** arr) {///33
	for (int i = 0; i < value; i++) {
		int last_index = 0;
		for (int j = 0; j < N; j++) {
			if (*(*(arr + i) + j) == 2) {
				last_index = j + 1;
			}
		}
		std::cout << "Номер последнего элемента равного 2 в наборе " << i + 1 << ": " << last_index << std::endl;
	}
}
void print_last_index_v2(int value, int N, int** arr) {///34
	for (int i = 0; i < value; i++) {
		int last_index = 0;
		for (int j = 0; j < N; j++) {
			if (*(*(arr + i) + j) == 2) {
				std::cout<<sum_2d_array(arr, value, N);
			}
		}
	}
	std::cout << "0";
}
int count_elements_v1(int value, int N) {///35
	int count = 0, sum = 0;
	for (int i = 0; i < value; i++) {
		while (N != 0) {
			count++;
		}
		std::cout << count << std::endl;
		sum += count;
	}
	return sum;
}
void count_elements_v2(int size_row, int** arr) {///36
	int  sum = 0;
	for (int i = 0; i < size_row; i++) {
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
	std::cout << "Total number of sets: " << sum << std::endl;
}
void count_elements_v3(int size_row, int** arr) {///37
		int  sum = 0, curr;
		for (int i = 0; i < size_row; i++) {
			int count = 0, prev = -1, j = 1;
			curr = *(*(arr + i) + 0);
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
int count_elements_v4(int k, int** arr) {///38
	int  sum = 0;
	for (int i = 0; i < k; i++) {
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
int count_sawtooths_v2(int arr[], int size) {///40
	int count = 0;
	for (int i = 0; i < size; i++) {
		int  cur = *(arr + i), prev = cur;
		if (i > 1 && ((prev < cur && cur > *(arr + (i - 2))) || (prev > cur && cur < *(arr + (i - 2))))) {
			count++;
		}
	}
	return count;
}