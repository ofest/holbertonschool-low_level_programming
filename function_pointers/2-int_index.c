#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: Array.
 * @size: Size of the array.
 * @cmp: Comparison function.
 * Return: match (-1), no match (0).
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
