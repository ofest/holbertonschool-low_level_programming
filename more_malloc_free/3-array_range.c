#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Crates an array of integers
 * @min: Minimal number.
 * @max: Maximal number.
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (max - min + 1); i++)
	{
		array[i] = min + i;
	}

	return (array);
}
