#include "main.h"
/**
 * int _islower(int c) is to chech lowercase
 *
 *Returns 1 if c is lowercase
 *Returns 0 otherwise
 */
int _islower(int c)
{
	if(c >= 97 && c<= 122)
	{
		return (1);
	}
	return (0);
}
