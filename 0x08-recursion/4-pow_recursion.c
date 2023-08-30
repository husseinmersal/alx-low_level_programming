#include "main.h"
/*
 * a function that returns the value of x raised to the power of y.
 * If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return -1;
	}
	else if (y == 1)
	{
		return x;
	}
	else if ( y == 0)
	{
		return 1;
	}
	else {
		return result = (x * _pow_recursion(x, y - 1));
	}
}


