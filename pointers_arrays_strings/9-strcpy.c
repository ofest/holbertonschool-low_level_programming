#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination buffer.
 */

char *_strcpy(char *dest, char *src)

{
	char *start = dest;

	while
		((*dest++ = *src++) != '\0');

	return (start);

}

