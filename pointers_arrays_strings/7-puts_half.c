#include "main.h"
#include <stdio.h>

/**
 * puts_half - Function that prints half of the string.
 * @str: string.
 */

void puts_half(char *str)
{
	int n, length, mid;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2  == 0)
	{
		mid = length / 2;
		for (n = mid; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
