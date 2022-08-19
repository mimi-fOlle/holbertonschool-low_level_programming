#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
  * hash_table_set - Adds an element to the hash table
  * @ht: The hash table you want to add or update the key/value to
  * @key: The key, key cannnot be an empty string
  * @value: The value associated with the key, value must be duplicated
  *
  * Return: 1 if succeeded, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *str;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	
	if (value != NULL)
		str = strdup(value);
	else
		str = NULL;

	node = ht->array[idx];

	if (node == NULL)
		node = new_node(NULL);

	if (node->key != NULL)
	{
		ht->array[idx] = update_node(node, key, str);
		return (1);
	}
	node->key = strdup(key);
	node->value = str;
	node->next = NULL;

	ht->array[idx] = node;
	return (1);
}

/**
  * new_node - Create a new node
  * @cur_node: Current node to add at the end
  *
  * Return: A pointer to the new node
  */

hash_node_t *new_node(hash_node_t *cur_node)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = NULL;
	node->value = NULL;
	node->next = cur_node;

	return (node);
}

/**
  * update_node - Update or added a node if one already exists
  * @node: The pointer to a node the exist
  * @key: The key
  * @value: The value to update/create node
  *
  * Return: Pointer to head of a list
  */

hash_node_t *update_node(hash_node_t *node, const char *key, char *value)
{
	hash_node_t *tmp = node;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = value;
			return (node);
		}
		tmp = tmp->next;
	}

	tmp = node;
	node = new_node(node);
	if (node == NULL)
	{
		node = tmp;
		return (node);
	}
	node->key = strdup(key);
	node->value = value;
	return (node);
}
