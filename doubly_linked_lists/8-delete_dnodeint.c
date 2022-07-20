#include "lists.h"

/**
* delete_dnodeint_at_index - delete the node at index of a dlist_t linked list
* @head: node
* @index: the index of the node that should be deleted
*
* Return: 1 if successed, -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 1; tmp != NULL && i < index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}