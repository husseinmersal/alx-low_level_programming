#include "main.h"
/**
 *function that computes the absolute value of an integer.
 *Return 0 always
 */
int _abs(int c)
{
	
	if(c < 0)
	{
		int abs_val;
		abs_val = c * -1 ;
	return (abs_val);
	}
	return (c);
}

