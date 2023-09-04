#include "main.h"

/**
 * creates an array of chars, and initializes it with a specific char.
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
	if(size == 0 || n == 0)
		return (0);
	while(size--)
		n[size] = c;
	return(n);
}
