#include "lists.h"

/**
* free_listint2 - free a listint_t list
* @head: node to be freed
*/

void free_listint2(listint_t **head)
{
	listint_t *clear;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		clear = *head;
		*head = (*head)->next;
		free(clear);
	}
	*head = NULL;
}
