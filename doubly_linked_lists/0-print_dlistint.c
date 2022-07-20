#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: head node
*
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
