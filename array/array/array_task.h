#pragma once
#include "help_func.h"


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
	
	int sum = 1;
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
		double fraction = *(arr + i) - int(*(arr + i));
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
double task_number_8(double arr[], int size) ///8
{
	int s = 0;
	for (int i = 0; i < size; i++) {
		if (int(*(arr + i)) % 2 == 0) {
			*(arr + i) *= 2;
			std::cout << *(arr + i) << " ";
			s++;
		}
	}
	std::cout << std::endl;
	return s;
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

