#include "main.h"
#include <stdio.h>

/**
 * _strspn - Function that count how many similar letters are.
 * @s: String one.
 * @accept: String two.
 * Return: Return to c.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
	else
		return  (c);
	}

	return (c);
}
