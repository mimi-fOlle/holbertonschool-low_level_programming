#include "lists.h"

/**
* free_dlistint - free a dlistint_t list
* @head: head node
*/

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_dlistint(head->next);
		}
		free(head);
	}
}
