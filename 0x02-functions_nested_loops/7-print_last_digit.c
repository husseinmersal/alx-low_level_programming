#include "main.h"
/**
 * prints the last digit of the number
 * return 0 always
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if(last < 0 )
{
	last  = last * -1;
}
_putchar(last + '0');
return(last);
}
	
