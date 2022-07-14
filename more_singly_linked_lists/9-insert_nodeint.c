#include "lists.h"

/**
* insert_nodeint_at_index - inserts a node at a given position
* @head: node
* @idx: given position. Index starts at 0
* @n: new node to be inserted
*
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
