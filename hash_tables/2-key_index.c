#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * key_index - Gives the index of a key
  * @key: The key
  * @size: The size of the array of the hash table
  *
  * Return: The index at which the key/value pair should stored
  * in the array of the hash table
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
