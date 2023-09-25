#include "lists.h"

/**
 * free_listint - frees a linked list
 * @header: listint_t list to be freed
 */
void free_listint(listint_t *header)
{
	listint_t *temp;

	while (header)
	{
		temp = header->next;
		free(header);
		header = temp;
	}
}

