#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Return the length of a string.
 * @s: string.
 * Return: return to a.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
