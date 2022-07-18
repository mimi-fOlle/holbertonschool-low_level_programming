#include "main.h"

/**
* git_bit - return the value of a bit at a given index
* @n: number
* @index: the index starting from 0 of the bit
*
* Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = (n >> index) & 1;

	if (bit == 0 || bit == 1)
		return (bit);
	else
		return (-1);
}
