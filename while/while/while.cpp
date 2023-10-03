#include <iostream>
int wh1(int a, int  b) {
	while (a > b)
	{
		a -= b;
	}
	return a;
}
double wh2(double a, double b) {
	int i = 0;
	while (a >= b) {
		a -= b;
		i++;
	}
	return i;
}
void wh3(int n, int k) {
	int i = 0;
	while (n >= k)
	{
		n -= k;
		++i;
	}
	std::cout << i << "\n" << n;
}
int wh4(int a) {
	while (a > 0)
	{
		a -= 3;
	}
	if (a == 0)
		std::cout << "true";

	else
		std::cout << "false";

	return 0;
}
int wh5(int  n) {
	int k = 1;
	for (int i = 2; i < n; ++k) {
		i *= 2;
	}
	return k;
}
/*dvoynoy factorial*/int doublefact(int n) {
	if (n < 3) {
		return n;
	}
	{
		return  n * doublefact(n - 2);
	}
}
int wh7(int n) {
	int k = 1;
	for (; k * k <= n; ++k)
	{

	}
	return k;
}
int wh8(int n) {
	int k = 1;
	while (k * k <= n)
	{
		k++;
	}
	return k;
}

int wh9(int n) {
	int k = 1;
	while (pow(3, k) < n)
	{
		++k;
	}
	return k;
}int wh10(int n) {
	int k = 0;
	while (pow(3, k) < n)
	{
		++k;
	}
	return k;
}
int wh11(int n) {
	int res = 0, ik;
	for (int k = 1; res < n; ++k)
	{
		res += k;
		ik = k;
	}
	std::cout << res << " ";
	return ik;
}
int wh12(int n) {
	int res = 0, ik;
	for (int k = 0; res <= n; k++)
	{
		res += k;
		ik = k;
	}
	std::cout << res << " ";
	return ik;
}

int wh13(int a) {
	int res = 0;
	int ik = 0;
	for (int k = 1; res < a; k++)
	{
		res += 1 / k;
		ik = k;
	}
	std::cout << res << " ";
	return ik;
}
int wh14(double a) {
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
double wh15(double p) {
	double k = 0;
	double s = 1000;
	while (s <= 1100)
	{
		k++;
		s += s * p / 100;
	}
	std::cout << s;
	return k;
}
double wh16(double p) {
	double res = 10;
	int k = 1;
	while (res < 201)
	{
		k++;
		res += res * (p / 100);
	}
	std::cout << res << std::endl;
	return k;
}
int wh17(int n) {
	while (n > 0)
	{
		std::cout << n % 10 << " ";
		n /= 10;
	}
	return n;
}
int wh18(int n) {
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
int wh19(int n) {
	int k = 0;
	while (n > 0)
	{
		int a = n % 10;
		k = k * 10 + a;
		n /= 10;
	}
	return k;
}
int wh20(int n) {
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
int wh21(int n) {
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
int wh22(int n) {
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
/*wh23*/ int gcd(int a, int b) {
	if (b == 0)
		return a;
	if (a > b)
		return gcd(b, a % b);
	else
		return gcd(a, b % a);
}
int wh24(int n) {
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
int wh25(int n) {
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
int wh26(int n) {
	int a = 1, b = 1, c = 0;
	while (c < n)
	{
		c = a + b;
		b = a;
		a = c;
	}
	std::cout << b << " " << a + b << std::endl;
	return 0;
}int wh27(int n) {
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
void while28(double e)
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
int wh29(double e) {
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
double wh30(double a, double b, double c) {
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







template <class T, class Function >
T while_v2(T start, T end, T result, Function func) {
    for (; start > end; start--)
    {
        result = func(start, end);
    }
    return result;
}
void w_v2(int start, int end)
{
    std::cout << while_v2(10, 3, 0, [](int start, int end) {return start - end;});
}
int main()
{
    w_v2(14,3);
}