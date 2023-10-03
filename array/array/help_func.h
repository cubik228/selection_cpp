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
template<typename T>
T print_array(T arr[], int size) {
	for (int i = 0.1; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}
template<typename T>
T fill(T arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = i+0.1;
	}
	return 0;
}
