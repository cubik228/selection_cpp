#include<iostream>
int wh1() {
	int a, int b;

	int a, b;
	std::cout << "введите число а которые меньше b" << std::endl;
	std::cin >> a;
	std::cout << "введите число b которые больше а" << std::endl;
	std::cin >> b;
	while (a > b) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> a;
		std::cin >> b;

	}
	while (a > b)
	{
		a -= b;
	}
	return a;
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
int wh5() {
	int n;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> n;
	while (n < 0) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> n;

	}
	int k = 1;
	for (int i = 2; i < n; ++k) {
		i *= 2;
	}
	return k;
}

int wh7() {
	int n;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> n;
	while (n < 0) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> n;

	}
	int k = 1;
	for (; k * k <= n; ++k)
	{

	}
	return k;
}
int wh9() {
	int n;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> n;
	while (n < 1) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> n;

	}
	int k = 1;
	while (pow(3, k) < n)
	{
		++k;
	}
	return k;
}
int wh11() {
	int n;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> n;
	while (n < 1) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> n;

	}
	int res = 0, ik;
	for (int k = 1; res < n; ++k)
	{
		res += k;
		ik = k;
	}
	std::cout << res << " ";
	return ik;
}
int wh13(int a) {
	int n;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> n;
	while (n < 1) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> n;

	}
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
int wh17() {
	int n;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> n;
	while (n < 0) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> n;

	}
	while (n > 0)
	{
		std::cout << n % 10 << " ";
		n /= 10;
	}
	return n;
}
int wh19() {
	int n;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> n;
	while (n < 0) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> n;

	}
	int k = 0;
	while (n > 0)
	{
		int a = n % 10;
		k = k * 10 + a;
		n /= 10;
	}
	return k;
}
int wh21() {
	int n;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> n;
	while (n < 0) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> n;

	}
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
///wh23
int gcd(int a, int b) {
	if (b == 0)
		return a;
	if (a > b)
		return gcd(b, a % b);
	else
		return gcd(a, b % a);
}
int wh25() {
	int n;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> n;
	while (n < 1) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> n;

	}
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
int wh27() {
	int n;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> n;
	while (n < 1) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> n;

	}
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
int wh29() {
	int e;

	std::cout << "введите число n которые больше 0" << std::endl;
	std::cin >> e;
	while (e < 0) {
		std::cout << "Неверный ввод. Введите число ,больше нуля" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> e;

	}
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
