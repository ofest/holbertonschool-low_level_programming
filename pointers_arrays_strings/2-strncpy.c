#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Function that link two strings.
 * @dest: String one.
 * @src: String two.
 * @n: number.
 * Return: Return to start, dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
