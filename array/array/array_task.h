#pragma once
#include "help_func.h"
#include <algorithm>
#include <cmath>
#include "mytemplate.h"
template<class Iterator>///1
double sum(Iterator first, Iterator last)
{
	return my_template::sum_template(first,  last, 0, [](double a, double b) {return a + b; });
}
template< class Iterator>///2
double product(Iterator first, Iterator last)
{
	return my_template::sum_template(first, last, 1, [](double a, double b) {return a * b; });
}
//template< class Iterator>///3
//double average(Iterator first, double last)
//{
//	return sum(first,last) / last;
//}
template<class Iterator>///4
void sum_and_product(Iterator first, Iterator last)
{
	std::cout << sum(first, last)<<std::endl;
	std::cout << product(first,last);
}
template<  class Iterator>///5
void whole_parts_of_all_numbers(Iterator first, Iterator last) {
	return my_template::print_array(first,  last, [](int value) {std::cout << value; });
}
template< class Iterator>///6
void product_of_all_fractional_parts(Iterator first, Iterator last,int result)
{
	return my_template::print_array(first,  last, [&result](double value) {
		std::cout << value - int(value) << std::endl;
		result *= value - int(value);
		return result;
	});
}
template< class Iterator>///7
void sum_of_all_rounded_values(Iterator first, Iterator last)
{
	return my_template::print_array(first,  last, [](int value) {std::cout << std::round(value); });
}
template< class Iterator>///8 9 
double output_even_numbers(Iterator first, Iterator last, int number,int on_off){
	return my_template::sum_template(first,  last, 0, [ &number, &on_off](int value, double count) {
		if (value % number == on_off) {
			std::cout << value << " ";
			count++;
		}
		return count;
	});
	
}
template<typename T, class Iterator>///10 11 
bool checking_for_positive_numbers(Iterator first, Iterator last,T value)
{
	return my_template::sum_template(first,  last, 1, [&value](double a, double b) {
		if (a > value) {
			return true;
		}
		return false; 
	});
}
template<typename T, class Iterator>///12
void amount_of_numbers(Iterator first, Iterator last,T count)
{
	return my_template::print_array(first,  last, [&count](int value) {std::cout << count++; });
}
template< class Iterator>///13
void sum_of_all_positive_even_numbers(Iterator first, Iterator last) 
{
	return my_template::print_array(first,  last, [](int value) {
		if (value > 0 && value % 2 == 0) {
			std::cout << value;
		}
	});
}
template<typename T, class Iterator>///14
T checking_for_positive_numbers_v2(Iterator first, Iterator last, T value)
{
	return my_template::sum_template(first,  last, 0, [&value](double a, double count) {
		if (a < value) {
			count++;
		}
		return count;
	});
}
template<typename T, class Iterator>///15
T number_of_the_first_number_in_the_set_of_larger_K(Iterator first, Iterator last,T number)
{
	return my_template::sum_template_break(first,  last, 0, [&number](int a, double b) {
		if (a > number) {
			std::cout<< a;
			b++;
		}
		return b;
	});
}
template< class Iterator>///16
double is_increasing_sequence(Iterator first, Iterator last, int number) {
	return my_template::sum_template(first,  last, 0, [&number](double a, double b) {
		if (a>number) {
			b ++;
		}
		return b;
	});
}
template< class Iterator>///17
void elements_of_the_set_together_with_number_B(Iterator first, Iterator last, int number)
{
	bubble_sort(first, last - first);
	return my_template::print_array(first,  last, [&number](int value) {std::cout << value <<number<<" "; });
}
template< class Iterator>///18
void all_different_elements(Iterator first, Iterator last) {
	bubble_sort(first, last - first);
}
template< class Iterator>//19
int less_than_its_left_neighbor(Iterator first, Iterator last,  int count ) {
	for (; first != last; ++first)
	{
		if (*first < *(first - 1))
		{
			std::cout << *first << std::endl;
			count++;
		}
	}
	return count;
}
template<typename Iterator>//20
int less_than_its_rigth_neighbor(Iterator first, Iterator last, int count ) {
	
	for (; first != last; ++first)
	{
		if (*first < *(first + 1))
		{
			std::cout << *first << std::endl;
			count++;
		}
	}
	return count;
}
template <class Iterator>//21
bool checking_and_violating_descending_sequence(Iterator first, Iterator last,int count,int size) {
		for (;first != last; ++first)
		{
			if (*first < *(first+1))
			{
				count++;
			}
		}
		is_count_not_equal_to_size(count, size);
		return false;
}
template <class Iterator>///22
int check_for_sequence_type(Iterator first, Iterator last,int count,int size) 
{
	for (;first != last; ++first) {
		if (*first > *(first + 1)) {
			count++;
		}
		if (!(*first > *(first + 1))) {
			break;
		}
	}
	is_count_equal_to_size(count, size);
	return count + 1;
}
template <class Iterator>//23
int sawtooth_check(Iterator first, Iterator last, int count,int size) {
	for (;first != last; ++first)
	{
		if (*(first + 1) < *first && *first > *(first - 1) || *first < *(first + 1) && *first < *(first - 1))
		{
			count++;
		}
		if (!(*(first + 1) < *first && *first > *(first - 1) || *first < *(first + 1) && *first < *(first - 1))) {
			break;
		}
	}
	is_count_equal_to_size(count, size);
	return count + 1;
}
template <class Iterator> ///24
double sum_between_zeros(Iterator first, Iterator last, double sum ,int count) {
	for (; first != last; ++first) {
		if (*first == 0) {
			if (++count == 2) {
				break;
			}
		}
		else if (count == 1) {
			sum += *first;
		}
	}
	return count == 2 ? sum : -1;
}
template <class Iterator>///25
double sum_between_zeros_v2(Iterator first, Iterator last, double sum , int count) {
	for (; first != last; ++first) {
		if (*first == 0) {
			if (++count == 2) {
				break;
			}
		}
		else if (count == 1) {
			sum += *first;
		}
	}
	return count == 2 ? sum : 0;
}
template <class Iterator>///26
void calculate_powers_v1(Iterator first,Iterator last ,int value) { 
	return my_template::print_array(first, last, [&value](int value_arr) {std::cout<<std::pow(value_arr, value);});
}
template <class Iterator>///27
void calculate_powers_v2(Iterator first, Iterator last,int count){
	return my_template::print_array(first, last, [&count](int value_arr) {count++;std::cout<<std::pow(value_arr, count); });
}
template <class Iterator>///28
void calculate_powers_v3(Iterator first, Iterator last,int count) {
	return my_template::print_array(first, last, [&count, &first, &last](int value_arr) {count++;std::cout << std::pow(value_arr, ((last - first) - count));});
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