#include "main.h"
#include <stdio.h>

/**
 * _strncat - Function that link two strings.
 * @dest: String one.
 * @src: String two.
 * @n: Number.
 * Return: Return to start, dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = src[i];
		dest++;
	}
	*dest = '\0';
	return (start);
}
