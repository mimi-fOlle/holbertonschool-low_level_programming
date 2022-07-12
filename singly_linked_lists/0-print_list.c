#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: node
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	unsigned int i;

	while (current != NULL)
	{
		for (i = 0; current; i++)
		{
			if (current->str == NULL)
				printf("[%u] (nil)\n", current->len);
			else
			printf("[%u] %s\n", current->len, current->str);
			current = current->next;
		}
	}
	return (i);
}
