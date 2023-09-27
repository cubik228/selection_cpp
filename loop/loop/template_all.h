#pragma once
template<typename T, class Function>
T three_variables(T first, T second, T third, Function func) {
	for (int i = 0; i < length; i++)
	{
		int result = func(first, second, third);
	}
	return result;
}