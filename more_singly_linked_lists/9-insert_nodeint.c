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
	listint_t *tmp;

	if (idx == '\0')
		return(NULL);

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	
	tmp->n = tmp;
	tmp->next = (*head)->next;
	(*head)->next = tmp;
	return (idx);
}
