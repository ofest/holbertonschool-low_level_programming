#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, memory to 0.
 * @nmemb: Number of Elements.
 * @size: The size of the memory.
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *copy;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	copy = malloc(nmemb * size);
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		copy[i] = 0;
	}
	return (copy);
}
