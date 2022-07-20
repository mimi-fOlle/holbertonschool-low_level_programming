#include "lists.h"

/**
* dlistint_len - return the number of elements in a linked dlistint_t list
* @h: head node
*
* Return: the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
