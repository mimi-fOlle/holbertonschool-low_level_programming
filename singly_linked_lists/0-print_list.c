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
	unsigned int i = 0;

	while (current != NULL)
	{
		printf("[%u] ", current->len);
		if (current->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", current->str);
		current = current->next;
		i++;
	}
	return (i);
}
