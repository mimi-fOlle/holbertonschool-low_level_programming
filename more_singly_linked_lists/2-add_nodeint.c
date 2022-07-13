#include "lists.h"

/**
* add_nodeint - add a new node at the beginning of a listint_t list
* @head: the first node
* @n: value to be printed
*
* Return: the address of the new element, or NULL if fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
