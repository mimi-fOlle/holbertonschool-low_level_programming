#include "lists.h"

/**
* insert_dnodeint_at_index - insert a new node at a given position
* @h: node
* @idx: the index of the list where the new node be added
* @n: value
*
* Return: the address of the new node, or NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	for (i = 0; i < (idx - 1) && tmp != NULL; i++)
		tmp = tmp->next;

	if (tmp != NULL)
	{
		new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = tmp->next;
		new_node->prev = tmp;

		if (tmp->next != NULL)
		{
			tmp->next->prev = new_node;
		}
		tmp->next = new_node;
	}
	return (*h);
}
