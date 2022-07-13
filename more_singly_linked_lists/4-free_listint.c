#include "lists.h"

/**
* free_listint - free a listint_t list
* @head: node
*/

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_listint(head->next);
		}
		free(head);
	}
}
