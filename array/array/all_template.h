#pragma once
template<typename T ,class Function> 
T da_i_eby(T arr[],int size,int i,Function func) {
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result = func(arr[], size);
	}
	return result;
}