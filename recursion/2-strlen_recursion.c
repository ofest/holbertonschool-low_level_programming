#include "main.h"
#include <stdio.h>

/**
 * _strlen - Return the length of a string.
 * @s: string.
 * Return: return to a.
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
