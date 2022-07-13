#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: node
*
* Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	unsigned int i;

	for (i = 0; tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	return (i);
}
