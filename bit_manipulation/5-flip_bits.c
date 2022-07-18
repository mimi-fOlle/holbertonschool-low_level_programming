#include "main.h"

/**
* flip_bits - returns the nmb of bits you flip to get from one nmb to another
* @n: number
* @m: number
*
* Return: number of bits that be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*count store the total bits set in nmb*/
	unsigned long int nmb, count = 0;

	nmb = n ^ m; /*take XOR of n and m, and store in nmb*/

	while (nmb)
	{
		nmb = nmb & (nmb - 1); /*clear the least significant bit set*/
		count++;
	}
	return (count);
}
