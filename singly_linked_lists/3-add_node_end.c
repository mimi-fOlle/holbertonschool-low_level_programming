#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - add a new node at the end of a list_t list
* @head: the first node
* @str: string needs to be duplicated
*
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}

	current->next = new_node;
	}

	return (*head);
}
