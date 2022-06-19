#include "main.h"

/**
* leet - encode a string into 1337
* @s: string
*
* Return: s
*/

char *leet(char *s)
{
	char ori[10] = "aeotlAEOTL";
	char leet[10] = "4307143071";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == ori[j])
			{
				s[i] = leet[j];
			}
		}
	}
	return (s);
}
