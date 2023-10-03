#pragma once
#include "help_func.h"
#include "all_template.h"
int sum_array(int arr[], int size,int i) {
	return da_i_eby(arr, size, i, []() {return 0;});
}
int sum_array(int arr[],int size)///1
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int  proizvedenie_array(int arr[], int size)///2
{
	int sum = 1;
	for (int i = 1; i < size; i++)
	{
		sum *= arr[i];
	}
	return sum;
}
void ser3(double arr[], int size)///3
{
	
	int srznach = 1;
	for (int i = 0; i < size; i++)
	{
		srznach += arr[i] / 2;
	}
	std::cout << srznach;
}
void ser4(double arr[], int size) ///4
{
	
	int sum = 1;
	int proizv = 1;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
		proizv *= arr[i];
	}
	std::cout << "sum= " << sum << std::endl << "proizv= " << proizv;
}
double f_5(double arr[], int size) ///5
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{

		double fraction = arr[i] - int(arr[i]);
		arr[i] = arr[i] - fraction;
		std::cout << arr[i] << " ";
		sum += arr[i];
	}
	return sum;
}
void ser6(double arr[],int size)///6
{
	double tas = 1;
	for (int i = 0; i < size; i++)
	{
		double dec = arr[i] - static_cast<int>(arr[i]);
		double integ = arr[i] - dec;
		std::cout << arr[i] - integ << " ";
		tas *= dec;
	}
	std::cout << std::endl << tas;
}
double f_7(double arr[], int size) ///7
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{

		double fraction = arr[i] - int(arr[i]);
		arr[i] = arr[i] - fraction;
		std::cout << arr[i] << " ";
		sum += std::round(arr[i]);
	}
	return sum;
}
double ser8(double arr[], int size) ///8
{
	int s = 0;
	for (int i = 0; i < size; i++) {
		if (int(arr[i]) % 2 == 0) {
			arr[i] *= 2;
			std::cout << arr[i] << " ";
			s++;
		}
	}
	std::cout << std::endl << s << std::endl;
	return 0.0;
}
double f_9(double arr[], int size) ///9
{
	int sum = 0, count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";

		if (int(arr[i]) % 2 == 0) {
			std::cout << i;
			count++;
		}
		std::cout << "|";

	}
	std::cout << std::endl;
	return count;
}
bool ser10(double* arr, int size)///10
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			delete[] arr;
			return true;
		}
	}
	return false;
}
double f_11(double arr[], int size, int value) ///11
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < value) {
			return true;
		}
	}
	return false;
}
void ser12(double* arr,int size)///12
{
	int s = 0;
	
	for (int i = 1; i < size; i++)
	{
		if (arr[i] == 0) {
			break;
			s++;
		}
	}
	std::cout << s;
}
double f_13(double arr[], int size) ///13
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (int(arr[i]) > 0 && int(arr[i]) % 2 == 0) {
			sum += arr[i];
		}
	}
	std::cout << sum;
	return false;
}
void ser14(double* arr,int size, int value) ///14
{
	int mensh = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0) {
			break;
			if (arr[i] < value)
				mensh++;
		}
	}
	std::cout << mensh;
}
double f_15(double arr[], int size, int value) ///15
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > value) {
			std::cout << i;
			break;
		}
	}
	return 0;
}
void ser16(double* arr,int size, int value)///16
{
    int mensh = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0) {
            break;
            if (arr[i] < value)
                mensh++;
        }
    }
    std::cout << mensh;
}
double f_17(double arr[], int size, int value) ///17
{
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < value) {
			std::cout << value;
		}


	}
	return 0;
}
double f_19(double arr[], int size, int value) ///19
{
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < value) {
			std::cout << value;
		}


	}
	return 0;
}
double f_19(double arr[], int size) {
	int  count = 0;
	for (int i = 0; i < size; i++)
	{

		if (i > 0 && arr[i] < arr[i - 1]) {
			std::cout << arr[i] << " ";
			count++;
		}
	}
	
	return count;
}
