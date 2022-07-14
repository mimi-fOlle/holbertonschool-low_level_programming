#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index index of listint_t list
* @head: node
* @index: the index of the node that should be deleted. Starts at 0
*
* Return: 1 if it succeeded. -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *current = *head;

	if (!head || !*head)
		return (-1);

	else if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);

	return (1);
}
