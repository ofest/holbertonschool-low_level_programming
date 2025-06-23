#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Prints a diagonal line.
 * @n: The number of characters to be printed.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, o;

		for (i = 0; i < n; i++)
		{
			for (o = 0; o < i; o++)
			_putchar(' ');
			_putchar(92);

			_putchar('\n');
		}
	}
}
