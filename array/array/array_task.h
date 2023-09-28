#pragma once
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