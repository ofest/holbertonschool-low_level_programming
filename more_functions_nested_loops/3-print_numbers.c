#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print the numbers, one to nine.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

