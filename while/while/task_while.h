#include <iostream>
#include "template_all.h"
#include "help_func.h"
void length_of_unoccupied_part(int start, int end)///1
{
	std::cout << while2(start, end, 0, [](int start, int end) {return start - end; });///1
}
void number_of_segments(int start, int end)///2
{
	std::cout << while2(start, end, 0, [](int start, int end) {return 0; });///2
}
void zd_1_and_2_together(int start, int end) ///3
{
	std::cout << while2(start, end, 0, [](int start, int end) {return start - end; });///3
}
bool now_numbers3(int value, int power) ///4
{
	while (value > 0)
	{
		if (value % power != 0)
			return false;
		value /= power;
		if (value == 1)
		{
			return true;
		}
	}
	return false;
}
int now_numbers2(int  end) ///5
{
	int count = 1;
	for (int i = 2; i < end; ++count) {
		i *= 2;
	}
	return count;
}
int doublefact_zd(int start, int end, int n) ///6
{
	return find_using_iterating(start, end, [n](int value) { return  doublefact(value); });
}
int smallest_integer(int start, int end, int n) ///7
{
	return find_using_iterating(start, end, [n](int value) { return  value * value > n; });
}
int largest_integer(int start, int end, int n) ///8
{
	return find_using_iterating(start, end, [n](int value) {return value * value < n; }, -1);
}
int task_number_9(int start, int end, int n) ///9
{
	return find_using_iterating(start, end, [n](int value) { return std::pow(3, value) > n; });
}
int inequality_fulfilled(int end)///10
{
	int count = 0;
	while (pow(3, count) < end)
	{
		++count;
	}
	return count;
}
int smallest_of_integers(int start, int end, int value)///11
{
	int result = 0;
	return find_using_iterating(start, end, [&result, value](int value) {
		result += value;
		return result >= value;
		});
}
int greatest_of_integers(int start, int end, int value) ///12
{
	return find_using_iterating(start, end, [value](int value) {

		return Sn(1, value) <= value;
	}, -1);
}
int task_number_13(int start, int end, int value) ///13
{
	double result = 1;
	return find_using_iterating(start, end, [&result, value](int value) {
		int bimbimbambam = 1 / result;
		bimbimbambam += value;
		return result > value;
	});
}
int task_number_14(double a) {
	double res = 0;
	int k = 1;
	int ik = 0;
	while (k <= a)
	{
		res += (1.0 / k);
		++k;
		ik = k;
	}
	std::cout << res << std::endl;
	return ik;
}
int treasure_in_bank(double percent)///15
{
	int contribution = 1000;
	int month = 0;
	while (contribution < 1100)
	{
		month++;
		contribution += contribution * percent / 100;

	}
	std::cout << contribution << std::endl;
	return month;
}
int treasure_in_bank_v2(int percent) ///16
{
	int start_distance = 10;
	int days = 0;
	while (start_distance < 200)
	{
		days++;
		start_distance += start_distance * percent / 100;
	}
	std::cout << start_distance << std::endl;
	return days;
}
int task_number_17(int n)///17
{
	while (n > 0)
	{
		std::cout << n % 10 << " ";
		n /= 10;
	}
	return n;
}
int sum_of_its_digits(int n)///18
{
	int res = 0;
	int chislo = 0;
	while (n > 0)
	{
		++chislo;
		res += n % 10;
		n /= 10;
	}
	std::cout << chislo << " ";
	return res;
}
int task_number_19(int n)///19
{
	int k = 0;
	while (n > 0)
	{
		int a = n % 10;
		k = k * 10 + a;
		n /= 10;
	}
	return k;
}
int check_for_number_2(int n)///20
{
	while ((n > 0) && ((n % 10) != 2))
	{
		n /= 10;
		if ((n > 0) && (n % 10 == 2))
			std::cout << "true";
		else
			std::cout << "false";
	}
	return 0;
}
int parity_check(int n) ///21
{
	while ((n > 0) && ((n % 10) % 2 == 0))
		n /= 10;
	{
		if ((n % 10) % 2 == 1)
			std::cout << "true";
		else
			std::cout << "false";
	}
	return 0;
}
int check_for_prime_number(int n)///22
{
	int k = 2;
	while ((k < n - 1) && (n % k) != 0)
	{
		++k;
	}
	if ((n % k) != 0)
		std::cout << "true";
	else
		std::cout << "false";
	return 0;
}
 int node(int a, int b)///23
{
	if (b == 0)
		return a;
	if (a > b)
		return node(b, a % b);
	else
		return node(a, b % a);
}
int Fibonacci(int n)///24
{
	int i, y, z, b;
	y = z = b = 1;
	bool q;
	q = 0;
	for (int i = 0; i < n; i++)
	{
		z = y;
		y = b;
		b = z + y;
		if (b == n) { q = 1; }
	}
	if (q)
		std::cout << "true";
	else
		std::cout << "false";
	return 0;
}
int first_Fibonacci_number(int n) ///25
{
	int a = 1, b = 1, c = 0;
	while (c < n + 1)
	{
		c = a + b;
		b = a;
		a = c;
	}
	std::cout << c << std::endl;
	return 0;
}
int task_number_26(int n) ///26
{
	int a = 1, b = 1, c = 0;
	while (c < n)
	{
		c = a + b;
		b = a;
		a = c;
	}
	std::cout << b << " " << a + b << std::endl;
	return 0;
}int task_number_27(int n) ///27
{
	int a = 1, b = 1, c = 0, k = 2;
	while (c < n)
	{
		++k;
		c = a + b;
		b + a;
		a = c;
	}
	std::cout << k << " ";
	return 0;
}
void first_of_numbers_K(double e)///28
{
	double a1 = 0, ak = 1, k = 2;

	while (abs(ak - a1) >= e)
	{
		a1 = ak;
		ak = 2 + 1 / a1;
		k++;
	}
	std::cout << "K= " << k << ", A(k-1)=" << a1 << ", A(k)=" << ak;
}

int first_of_numbers_K_v2(double e)///29
{
	double ak1 = 1, ak = 2, ak2;
	int k = 2;
	while (fabs(ak - ak1) >= e) {
		ak2 = ak1;
		ak1 = ak;
		ak = (ak2 + 2 * ak1) / 3;
		++k;
	}
	std::cout << "k:" << k << std::endl << "A(k-1):" << ak1 << std::endl << "Ak:" << ak;
	return 0;
}
double number_of_squares(double a, double b, double c)///30
{
	int k = 0;
	float temp;
	while ((a - c) >= 0) {
		a -= c;
		temp = b;
		while (temp - c >= 0) {
			temp -= c;
			++k;
		}
		std::cout << k;
		return 0;
	}
}