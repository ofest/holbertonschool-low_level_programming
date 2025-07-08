#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code.
 * @b: Bytes.
 *
 * Return: Not succes 'exit 98e' if succes 'return to the allocated memory'.
 */

void *malloc_checked(unsigned int b)
{
	int *copy;

	copy = malloc(b);

	if (copy == NULL)
	{
		exit(98);
	}
	else
	{
		return (copy);
	}
}
