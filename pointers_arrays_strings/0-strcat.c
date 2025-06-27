#include "main.h"
#include <stdio.h>

/**
 * _strcat - Function that concatenates two strings.
 * @dest: String one.
 * @src: String two.
 * @start:
 * Return: Return to start, dest.
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
