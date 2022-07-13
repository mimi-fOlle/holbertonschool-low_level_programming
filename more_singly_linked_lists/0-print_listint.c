#include "lists.h"

/**
* print_listint - print all the elements of a listint_t list
* @h: node
*
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		printf("%u\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
