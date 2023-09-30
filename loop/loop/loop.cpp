#include <iostream>
#include <math.h>
#include<memory>
#include "solution_task_for.h"
#include "help_func.h"

void f4(double price) {
	for (int i = 1; i <= 11; i++)
	{
		std::cout << price * i << std::endl;
	}
}
void f5(double price) {
	double kg = 0;
	for (; kg <= 1; kg += 0.1)
	{
		std::cout << price * kg << std::endl;
	}
}
void f6(double price) {
	double kg = 1.2;
	for (; kg <= 2; kg += 0.2)
	{
		std::cout << price * kg << std::endl;
	}
}
void f7(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; ++i)
	{
		sum = sum + i;
	}
	std::cout << sum << std::endl;
}
void f8(int a, int b) {
	int sum = 1;
	for (int i = a; i <= b; ++i)
	{
		sum = sum * i;
	}
	std::cout << sum << std::endl;
}
void f9(int a, int b) {
	int res = 0;
	for (int i = a; i <= b; ++i)
	{
		res += pow(i, 2);
	}
	std::cout << res << std::endl;
}
double f10(int n) {
	double res = 0;
	for (double i = 1; i <= n; ++i)
	{
		res += 1 / i;
	}
	return res;
}
double f11(double n) {
	double res = 0;
	for (int i = 0; i <= n; ++i)
	{
		res += pow(n + i, 2);
	}return res;
}
double f12(double n) {
	double res = 1;
	for (double i = 1; i <= n; ++i)
	{
		res = res * (1 + 0.1 * i);
	}
	return res;
}
double f13(double n) {
	double res = 0;
	for (double i = 1; i <= n; ++i)
	{
		res += pow(-1, i + 1) * (1 + i / 10);
	}
	return res;
}
double f14(int n) {
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += 2 * i - 1;
	}
	return res;
}
void f15(double a, int n) {
	int res = 1;
	for (int i = 1; i <= n;++i)
	{
		res *= a;
	}
	std::cout << res << std::endl;
}
int  f16(double a, int n) {
	int res = 0;
	for (int i = 0; i <= n;++i)
	{
		std::cout << pow(a, i) << std::endl;
	}
	return 0;
}
int f17(double a, int n) {
	int res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(a, i);
	}
	return res;
}
double f18(int a, int n) {
	int res = 1;
	for (int i = 0; i <= n; i++)
	{
		i % 2 == 0 ? res -= std::pow(a, i) : res += std::pow(a, i);
	}
	return 1 - res;
}
/*f19*/double Fact(int value) {
	if (value == 0 || value == 1) {
		return 1;
	}
	{
		return value * Fact(value - 1);
	}
}
int f20(int n) {
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += Fact(i);
	}
	return res;
}
double f21(int n) {
	double res = 1;
	for (int i = 1; i <= n; i++)
	{
		res += 1 / Fact(i);
	}
	return res;
}
double f22(int x, int n) {
	double res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(x, i) / Fact(i);
	}
	return res;
}
double f23(double x, int n) {
	int res = 0;
	for (int i = 0; i <= n; i += 2)
	{
		i % 2 == 0 ? res -= std::pow(x, i) / Fact(i) : res += std::pow(x, i) / Fact(i);
	}
	return res;
}
double f24(int x, int n) {
	double res = 0;
	for (int i = 0;i <= n;++i)
	{
		res += pow(-1, i) * pow(x, 2 * i) / Fact(2 * i);
	}
	return  res;
}
double f25(double x, int n) {
	double res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += pow(-1, i - 1) * pow(x, i) / i;
	}
	return res;
}
double f26(double x, int n) {
	double res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);
	}
	return res;
}
double f27(int n, int x) {
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += (2 * i - 1) * pow(x, 2 * i + 1) / (2 * i) * (2 * i + 1);
	}
	return res;
}
double f28(double x, int n) {
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += pow(-1, i - 1) * (2 * i - 3) * pow(x, i) / (2 * i);
	}return res;
}
double f29(int a, int b, int line) {
	int h = (b - a) / line;
	int res = 0;
	std::cout << h << std::endl;
	for (int i = 0; i < line; i++)
	{
		res = a + i * h;
	}
	return res;
}
void f30(int a, int b, int line) {
	int h = (b - a) / line;
	double res = 0;
	std::cout << h << std::endl;
	for (int i = 0; i < line; i++)
	{
		res = 1 - sin(a + i * h);
	}
	std::cout << res << std::endl;
}
double f31() {
	double a = 2;
	double n = 2;
	for (int i = 1; i <= n; ++i)
	{
		a = 2 + 1 / a;
	}
	return a;
}
double for32(int n) {
	float ai = 1;
	int i;
	for (i = 1; i <= n; ++i) {
		std::cout << i << " " << (ai + 1) / i << " ";
		ai = (ai + 1) / i;
	}
	return 0;
}
/*f33*/int Fib(int n) {
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

double f36(int n, int k) {
	int res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(i, k);
	}
	return res;
}
double f37(int n) {
	int res = 0;
	for (int i = 0; i <= n; i++)
	{
		res += pow(i, i);
	}
	return res;
}
int f38(int n) {
	int res = 0;
	for (int i = 0; i <= n; i++, n--)
	{
		res += pow(i, n);
	}
	return res;
}
void f39(int a, int b) {
	for (int a = 0; a <= b; a++)
	{
		for (int i = 1; i <= a; i++)
		{
			std::cout << a << std::endl;
		}
	}

}
void f40(int a, int b) {
	for (int i = 1; i <= b - a + 1; i++)
	{
		for (int i2 = 1; i2 <= i; i2++)
		{
			std::cout << a + i - 1 << std::endl;
		}
	}
}
int main() {
	//std::cout<< N_times_number_K(1,10,5);///1
	//std::cout << in_ascending_order(7,9);///2
	std::cout << in_descending_order(3,9);///3
}