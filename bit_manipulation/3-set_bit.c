#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer
* @index: starting from 0 of the bit you want to set
*
* Return: 1 if success, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit = 1 << index;

	*n = *n | bit;
	return (1);
}
