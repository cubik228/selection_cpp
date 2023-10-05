#pragma once
#include <iostream>

int Sn(int a1, int an) {
	return  (a1 + an) * an / 2;
}
int doublefact(int n) {
	if (n < 3) {
		return n;
	}
	{
		return  n * doublefact(n - 2);
	}
}