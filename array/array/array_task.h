#pragma once
#include "help_func.h"
#include <algorithm>

int sum_array( int arr[],int size) ///1
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(arr + i);
	}
	return sum;
}
double average(double arr[], int size) ///2
{
	double average = 0;
	for (int i = 0; i < size; i++)
	{
		average += *(arr + i);
	}
	return average / size;
}
double task_number_3(double arr[], int size)///3
{
	
	int srznach = 1;
	for (int i = 0; i < size; i++)
	{
		srznach += *(arr +i) / 2;
	}
	return srznach;
}
void task_number_4(double arr[], int size) ///4
{
	
	int sum = 0;
	int proizv = 1;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
		proizv *= *(arr + i);
	}
	std::cout << "sum= " << sum << std::endl << "proizv= " << proizv<<std::endl;
}
double task_number_5(double arr[], int size) ///5
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		double fraction = *(arr + i) - floor(*(arr + i));
		*(arr + i) = *(arr + i) - fraction;
		std::cout << *(arr + i) << " ";
		sum += *(arr + i);
	}
	return sum;
}
double task_number_6(double arr[],int size)///6
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
double task_number_7(double arr[], int size) ///7
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		double fraction = *(arr + i) - int(*(arr + i));
		*(arr + i) = *(arr + i) - fraction;
		std::cout << *(arr + i) << " ";
		sum += std::round(*(arr + i));
	}
	return sum;
}
double task_number_8(double arr[], int size) {
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
double task_number_9(double arr[], int size) ///9
{
	int sum = 0, count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";

		if (int(*(arr + i)) % 2 == 0) {
			std::cout << i;
			count++;
		}
		std::cout << "|";

	}
	std::cout << std::endl;
	return count;
}
bool task_number_10(double arr[], int size)///10
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
double task_number_11(double arr[], int size, int value) ///11
{
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < value) {
			return true;
		}
	}
	return false;
}
double task_number_12(double arr[], int size)///12
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
bool task_number_13(double arr[], int size) ///13
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
double task_number_14(double arr[], int size, int value) ///14
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
void task_number_15(double arr[], int size, int value) ///15
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
double task_number_16(double arr[], int size, int value)///16
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
void task_number_17(double arr[], int size, int value) ///17
{
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < value) {
			std::cout << value;
		}
	}
}
void task_number_18(double arr[], int size, int value) {
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
void task_number_19(double arr[], int size, int value) ///19
{
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < value) {
			std::cout << value;
		}
	}
}
void task_number_20(double arr[], int size) ///20
{
	int count = 0;
	for (int i = 0; i < size - 1; i++) {
		if (*(arr + i) < *(arr + i+ 1)) {
			std::cout << *(arr + i) << " ";
			count++;
		}
	}
	std::cout << count;
}
bool task_number_21(double arr[], int size) ///21
{
	for (int i = 0; i < size - 1; i++) {
		if ((*(arr + i) < *(arr + i + 1))) {
			return true;
		}
	}
	return false;
}
void task_number_22(double arr[], int size) ///22
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
void task_number_23(double arr[], int size) ///23
{
	for (int i = 0; i < size - 1; i++) {
		if ((*(arr + i) > *(arr + i + 1) && *(arr + i) > *(arr + i - 1)) || (*(arr + i) < *(arr + i + 1) && *(arr + i) < *(arr + i - 1)) ){
			std::cout << "0" << std::endl;
			break;
		}
		else
		{
			std::cout << *(arr + i);
			break;
		}
	}
}
int sum_between_zeros(int size, int arr[])///24
{
	int sum = 0, last_zero = -1, second_last_zero = -1;
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
int sum_between_zeros_v2(int size, int arr[]) ///25
{
	int sum = 0, first_zero = -1, last_zero = -1;
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
void calculatePowers_v1(int arr[],int size ,int value) { ///26
	for (int i = 0; i < size; i++) {
		double result = pow(*(arr +i), value);
		std::cout << "A" << i + 1 << "^" << value << " = " << result << std::endl;
	}
}
void calculatePowers_v2(double arr[],int size ){///27
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
void calculatePowers(double arr[],int size) {///28
	for (int i = 0; i < size; i++) {
		double result = pow(*(arr + i), size - i);
		std::cout << "A" << i + 1 << "^" << size - i << " = " << result << std::endl;
	}
}
int calculateTotalSum(int K, int N, int arr[]) {///29s
	int total_sum = 0;
	for (int i = 0; i < K; i++) {
		total_sum += sum(&*(arr +i), N);
	}
	return total_sum;
}
