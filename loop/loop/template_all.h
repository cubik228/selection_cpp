#pragma once
template< typename T ,class Function>
T task_for(T start, T end,T result,T help_value, Function func) {
	for (; start < end; start++)
	{
		 result = func(start,end,result);
		// std::cout << result;
	}
	return help_value;
}