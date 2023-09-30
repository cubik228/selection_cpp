#pragma once
#include<iostream>

template<typename T>
T fill(T arr[], T size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
	return 0;
}

double fill_d(double arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
	return 0.0;
}
