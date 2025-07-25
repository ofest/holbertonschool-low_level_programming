#include "main.h"
#include <stdio.h>

/**
 * _memset - Add a function that fills memory with constant byte.
 * @s: Destination.
 * @b: Constant.
 * @n: Bytes.
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
