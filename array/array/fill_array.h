#pragma once
#include<iostream>

template<typename T,class Function>
T fill(T arr[], T size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
	return 0;
}
void fill_array_int(int arr[],int size){
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}
void fill_array_double(int arr, int size) {
	
}