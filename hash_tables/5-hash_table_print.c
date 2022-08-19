#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * hash_table_print - Prints a hash table
  * @ht: The hash table
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;
	
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (idx == 0)
				idx = 1;
			else
				printf(", ");
			
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
