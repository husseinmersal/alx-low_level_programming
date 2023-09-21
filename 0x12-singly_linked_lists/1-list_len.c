#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *list)
{
	size_t n = 0;

	while (list)
	{
		n++;
		list = list->next;
	}
	return (n);
}


