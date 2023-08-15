#include "main.h"
/**
 * this function prints the alphabet 10 times
 *
 * Return 0 always
 */

void print_alphabet_x10()
{
	char ch;
	int i=0;
	for(i = 0; i <= 9; i++)
	{
		for(ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
