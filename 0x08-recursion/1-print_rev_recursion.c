#include "main.h"
/**
 * Function that prints a string in reverse
 *Return : void
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

