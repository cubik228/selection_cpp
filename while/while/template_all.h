#pragma once
#include<iostream>
template < class Operation>
int find_using_iterating(int start, int end, Operation predecate, int step = 1) {
	for (; start != end; start += step)
	{
		if (predecate(start))
		{
			return start;
		}
	}
	return -1;
}
template <class T, class BinaryOperation >
T while2(T start, T end, T result, BinaryOperation func) {
	int count = 0;
	while (start > end)
	{
		result = func(start, end);
		start -= end;
		count++;
	}
	std::cout << count << std::endl;;
	return result;
}
template< typename T, class Function>
T task_for(T start, T end, T result, T help_value, Function func) {
	for (; start < end; start++)
	{
		result = func(start, end, result);
		std::cout << result << " ";
	}
	std::cout << std::endl;
	return help_value;
}

template < class Operation, class Step>
int find_using_iterating_with_step(int start, int end, Operation predecate, Step step) {
	for (; start < end; start = step(start))
	{
		if (predecate(start))
		{
			return start;
		}
	}
	return -1;
}

template<class Operation>
void  for_each(int start, int end, Operation operation) {
	for (; start < end; ++start)
	{
		operation(start);
	}
}
template <class Operation>
int compound_interest_hard_percent(int start, int end, int percent, int result, Operation operation) {

	for (; start < end; )
	{
		result = operation(start, end, percent);
	}
	return result;
}
