#include <unistd.h>

/**
 * _putchar Wirte a charcter c to stdout
 * Return : on success 1
 */

int _putchar(char c)
{
	return ( write(1, &c, 1));
}


