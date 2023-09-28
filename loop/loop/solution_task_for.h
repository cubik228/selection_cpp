#pragma once
#include <iostream>
#include "template_all.h"
int N_times_number_K(int start, int end,int value) ///1
{
	 return task_for(start, end, value, [](int start, int end, int value) { return value; });///1
}