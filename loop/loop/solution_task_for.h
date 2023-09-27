#pragma once
#include <iostream>
#include "template_all.h"
void f1(int fisrt, int second) ///1
{
	three_variables(fisrt, second, 0, [](int fisrt, int second) { return 0; });///1
}