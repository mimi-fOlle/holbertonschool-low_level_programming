#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - sum of a and b
* @a: value
* @b: value
*
* Return: result of addition
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - difference of a and b
* @a: value
* @b: value
*
* Return: result of subtraction
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - product of a and b
* @a: value
* @b: value
*
* Return: result of multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - result of the division of a by b
* @a: value
* @b: value
*
* Return: result of division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - remainder of the division of a by b
* @a: value
* @b: value
*
* Return: remainder of the division
*/

int op_mod(int a, int b)
{
	return (a % b);
}
