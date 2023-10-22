#pragma once
#include<iostream>
namespace my_template {
	template<class Iterator, class UnaryOperation>
	void print_array(Iterator first, Iterator last, UnaryOperation up) {
		for (; first != last; ++first)
		{
			up(*first);
		}
	}
	template<class Iterator, class UnaryOperation, typename T>
	T sum_template(Iterator first, Iterator last, T result, UnaryOperation up) {
		for (; first != last; ++first)
		{
			result = up(*first, result);
		}
		return result;
	}
	template<class Iterator, class UnaryOperation, typename T>
	T sum_template_break(Iterator first, Iterator last, T result, UnaryOperation up) {
		for (; first != last; ++first)
		{
			result = up(*first, result);
			break;
		}
		return result;
	}
	template<class Iterator, class T>
	T acumulate(Iterator first, Iterator last, T result) {
		for (; first != last; ++first)
		{
			result += *first;
		}
		return result;
	}
}