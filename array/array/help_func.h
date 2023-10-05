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
int* createë_int_array(int size)
{
	srand(time(NULL));
	int* array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 20 + 5;
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}


