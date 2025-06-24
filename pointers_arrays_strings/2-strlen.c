#include "main.h"
#include <stdio.h>

/**
 * _strlen - Swamp the integers.
 * @s: string.
 * Return: return to a.
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}

