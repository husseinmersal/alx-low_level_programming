#include "main.h"
/**
 * a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if(str == NULL)
		return(NULL);
	for(; str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);
	
	if (m == 0)
		return (NULL);
	else
	{
		for(; i < size; i++)
			m[i] = str[i];
	}
	return(m);
}
