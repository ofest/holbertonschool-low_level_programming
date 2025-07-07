#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: null or array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
	array[n] = c;
	}
	return (array);
}
