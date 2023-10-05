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
int task_number_17(int value)///17
{
	while (value > 0)
	{
		std::cout << value % 10 << " ";
		value /= 10;
	}
	return value;
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
int task_number_19(int value)///19
{
	int number = 0;
	while (value > 0)
	{
		int a = value % 10;
		number = number * 10 + a;
		value /= 10;
	}
	return number;
}
bool check_for_number_2(int value)///20
{
	while ((value > 0) && ((value % 10) != 2))
	{
		value /= 10;
		if ((value > 0) && (value % 10 == 2))
			return true;
		
	}
	return false;
}
bool parity_check(int value) ///21
{
	while ((value > 0) && ((value % 10) % 2 == 0))
		value /= 10;
	{
		if ((value % 10) % 2 == 1)
			return true;
	}
	return false;
}
bool check_for_prime_number(int value)///22
{
	int number = 2;
	while ((number < value - 1) && (value % number) != 0)
	{
		++number;
	}
	if ((value % number) != 0)
		return true;

	return false;
}
 int node(int first, int second)///23
{
	if (second == 0)
		return first;
	else if (first > second)
		return node(second, first % second);
	else
		return node(first, second % first);
}
bool Fibonacci(int end)///24
{
	int  y, z, b;
	y = z = b = 1;
	bool q = 0;
	for (int i = 0; i < end; i++)
	{
		int z = y;
		int	y = b;
		int b = z + y;
		if (b == end) { q = 1; }
	}
	if (q)
		return true;

	return false;
}
int first_Fibonacci_number(int value) ///25
{
	int a = 1, b = 1, c = 0;
	while (c < value + 1)
	{
		c = a + b;
		b = a;
		a = c;
	}
	return c;
}
void task_number_26(int value) ///26
{
	int a = 1, b = 1, c = 0;
	while (c < value)
	{
		c = a + b;
		b = a;
		a = c;
	}
	std::cout << b << " " << a + b << std::endl;
}
int task_number_27(int end) ///27
{
	int a = 1, b = 1, c = 0, count = 2;
	while (c < end)
	{
		++count;
		c = a + b;
		b + a;
		a = c;
	}
	return count;
}
void first_of_numbers_K(double number_to_check)///28
{
	double a1 = 0, ak = 1, count = 2;

	while (abs(ak - a1) >= number_to_check)
	{
		a1 = ak;
		ak = 2 + 1 / a1;
		count++;
	}
	std::cout << "K= " << count << ", A(k-1)=" << a1 << ", A(k)=" << ak;
}
void first_of_numbers_K_v2(double number_to_check)///29
{
	double ak1 = 1, ak = 2, ak2;
	int count = 2;
	while (fabs(ak - ak1) >= number_to_check) {
		ak2 = ak1;
		ak1 = ak;
		ak = (ak2 + 2 * ak1) / 3;
		++count;
	}
	std::cout << "k:" << count << std::endl << "A(k-1):" << ak1 << std::endl << "Ak:" << ak;
}
double number_of_squares(double fisrt, double second, double third)///30
{
	int count = 0;
	float temp;
	while ((fisrt - third) >= 0) {
		fisrt  -= third;
		temp = second;
		while (temp - third >= 0) {
			temp -= third;
			++count;
		}
		return count;
	}
}