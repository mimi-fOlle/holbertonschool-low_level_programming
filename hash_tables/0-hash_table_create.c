#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * hash_table_create - Creates a hash table
  * @size: The size of the array
  *
  * Return: A pointer to the newly created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t *));

	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL; /*make sure that the created HT is clear*/

	return (new_table);
}
