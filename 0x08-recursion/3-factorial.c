#include "main.h"
/**
 * Function returns the factorian of a given number
 * return  1 if n is 0
 * return 1 if n  = 1
 */
int factorial(int n)
{
if (n < 0)
{
return -1;
}
else if (n == 0)
{
	return 1;
}
else 
{
	return (n * factorial(n-1));
}
}
