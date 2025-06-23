#include "main.h"
#include <stdio.h>

/**
 * print_square - Print a square.
 * @size: Unit of the square.
 */

void print_square(int size)
{
	int l, p;

	if (size >= 0)
	{
		for (l = 0; l <= size; l++)
		{
			for (p = 0; p < size; p++)
			_putchar(35);
			_putchar('\n');
		}
	}
}
