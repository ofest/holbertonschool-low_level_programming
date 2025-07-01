#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Function to find the first character of the first string.
 * @s: String one.
 * @accept: String two.
 * Return: Return to S or null if doesnt find the character.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
