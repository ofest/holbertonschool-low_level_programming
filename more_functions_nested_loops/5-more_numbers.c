#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 */

void more_numbers(void)
{
	int c, n;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar ('\n');
	}
}

