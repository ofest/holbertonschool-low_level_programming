#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function that reverse the array.
 * @a: Array.
 * @n: Numbers inside.
 */

void reverse_array(int *a, int n)
{
	int index, tmp;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
