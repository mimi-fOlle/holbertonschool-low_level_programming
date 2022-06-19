#include <stdio.h>
#include "main.h"

/**
* cap_string - capitalize all words of a string
* @s: string
*
*/

char *cap_string(char *s)
{
	int i,

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0) /**check first character is lowercase*/
		{
			if ((s[i] >= 'a' && ((s[i] <= 'z'))
						s[i] = s[i] - 32;
		}
		if (s[i] == ' ') /**check space*/
		{
			++i; /**if space is found, check next alphabet*/
			if ((s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
		else
		{
			if (s[i] <= 'A' && s[i] >= 'Z')
				s[i] = s[i] + 32;


		}
		}
		return (0);
}
