#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - free a list_t list
* @head: node
*/

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_list(head->next);
		}
		free(head->str);
		free(head);
	}
}
