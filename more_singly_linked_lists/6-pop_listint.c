#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: node
*
* Return: the head node's data (n), or 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
	int retval = -1;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}
		next_node = (*head)->next;
		retval = (*head)->n;
		free(*head);
		*head = next_node;

	return (retval);
}
