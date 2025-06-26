#include <stdio.h>
#include "main.h"

/**
 * print_array - Function that prints n elements of an array.
 * @n: number of elements of the array printed
 * @a: Array of integers
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}
printf("\n");
}
