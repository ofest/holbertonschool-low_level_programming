#include <stdio.h>
#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: the string.
 * @c: the character in the string.
 *
 * Return: Return to s. Return NULL if character dont found
 */

char *_strchr(char *s, char c)

{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
