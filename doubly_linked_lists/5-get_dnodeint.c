#include "lists.h"

/**
* get_dnodeint_at_index - return the nth node of a dlistint_t linked list
* @head: given node
* @index: the index of the node, starting from 0
*
* Return: NULL if the node does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		count++;
	}
	return (head);
}
