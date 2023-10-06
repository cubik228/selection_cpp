#pragma once
#include <iostream>
template <typename T>
T bubbleSort(T arrForSort[], int SIZE)
{
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = SIZE - 1; j > i; j--)
		{
			if (arrForSort[j] < arrForSort[j - 1])
			{
				int buff = arrForSort[j - 1];
				arrForSort[j - 1] = arrForSort[j];
				arrForSort[j] = buff;
			}
		}

	}
	for (int i = 0; i < SIZE; i++) {
		std::cout << arrForSort[i] << " ";
	}
	return 0;
}
///********************************
template <size_t N>
void print_array(double(&arr)[N]) {
	for (auto i : arr) {
		std::cout << i << " ";
	}
}
///********************************
void print_array(double* arr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << *(arr + i) << " ";
	}
}
void createë_int_array(int size)
{
	int const size_r = 10;
	srand(time(NULL));
	int array[size_r];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 20 + 5;
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}
void createë_double_array(int size)
{
	int const size_r = 10;
	srand(time(NULL));
	double array[size_r];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 20 + 5;
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}



