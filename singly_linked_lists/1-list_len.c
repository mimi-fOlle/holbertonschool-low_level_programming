#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - return the number of elements in a linked list_t list
* @h: node
*
* Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	unsigned int i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}

