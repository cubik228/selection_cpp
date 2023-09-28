#pragma once
template< class Function>
int task_for(int start, int end,int result, Function func) {
	for (; start < end; start++)
	{
		 result= func(start,end,result);
	}
	return result;
}