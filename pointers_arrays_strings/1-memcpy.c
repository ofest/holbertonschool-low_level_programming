#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Add a function that copy the memory to another memory location.
 * @dest: Destination.
 * @src: source.
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
