#include "main.h"
/**
 * a function that returns the length of a string.
 * Returns int 
 */
int _strlen_recursion(char *s)
{
	int length = 0;
	if (*s > '\0')
	{
		length += _strlen_recursion(s + 1) + 1;
	}
	return(length);
}
