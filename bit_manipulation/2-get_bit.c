#include "main.h"

/**
* get_bit - return the value of a bit at a given index
* @n: number
* @index: the index starting from 0 of the bit
*
* Return: the value of the bit at index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit = (n >> index) & 1;


	if (bit == 0 || bit == 1)
		return (bit);
	else
		return (-1);
}
