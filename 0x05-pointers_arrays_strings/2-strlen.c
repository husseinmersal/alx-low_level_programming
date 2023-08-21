
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int counter;
	while(*s != '\n')
	{
		counter++;
		s++;
	}
	return (counter);
}
