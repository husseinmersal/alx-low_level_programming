#include "main.h"
/**
 * this function checks for alphabetic character
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if((c >= 65 && c <= 97) || ( c>= 79 && c <= 122))
	{
		return (1);
	}
	return (0);
}
