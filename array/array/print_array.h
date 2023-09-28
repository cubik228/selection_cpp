#pragma once
#include<iostream>
void print_array(int arr[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}