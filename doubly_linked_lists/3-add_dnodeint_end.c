#include "lists.h"

/**
* add_dnodeint_end - add a new node at the end of a dlistint_t list
* @head: head node
* @n: value to be add
*
* Return: the address of the new element, or NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	if (head == NULL)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	last = *head;

	/*if the linked list is empty, make new_node as head*/
	if (*head != NULL)
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		/**	new_node->prev = NULL;
			*head = new_node;
			*/
	}
	else
	{
		*head = new_node;
		/**
	*else traverse till the last node
		while (last->next != NULL)
		{
			last = last->next;
		}
		*now, last node of the linked list is last*
		last->next = new_node; *change the next of last node*
		*/
	}
	new_node->prev = last; /*make last node as previous of new node*/
	return (new_node);
}
