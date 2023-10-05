#pragma once
#include <iostream>
#include <string>
using namespace std;

int reverse_print(int num) {
    string number = to_string(num);
    for (int i = number.length() - 1; i >= 0; i--) {
        cout << number[i];
    }
    return 0;
}
double Fact(int value)///zd_19
{
	if (value == 0 || value == 1) {
		return 1;
	}
	{
		return value * Fact(value - 1);
	}
}///
int Fib(int n)///zd_33
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return Fib(n - 1) + Fib(n - 2); {
		for (int i = 0; i < 15; i++)
		{
			std::cout << Fib(i) << " ";
		}
		return 0;
	}
}