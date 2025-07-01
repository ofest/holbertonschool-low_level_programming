#include "main.h"
#include <stdio.h>

/**
 * _memset - Add a function that fills memory with constant byte.
 * @s: Destination.
 * @b: Constant.
 * @n: Bytes.
 * Return: s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
