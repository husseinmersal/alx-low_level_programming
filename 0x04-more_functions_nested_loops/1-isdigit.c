#include"main.h"
/**
 * function that checks for a digit (0 through 9).
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 */
int _isdigit(int c)
{
	if(c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
