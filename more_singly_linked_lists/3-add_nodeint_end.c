#include "lists.h"

/**
* add_nodeint_end - add a new node at the end of a listint_t list
* @head: the first node
* @n: value to be printed
*
* Return: the address of the new element, or NULL if fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
		new_node->n = n;
		new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
	last_node->next = new_node;
	}

	return (*head);
}
