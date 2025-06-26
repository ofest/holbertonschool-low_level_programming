#include "main.h"
#include <stdio.h>

/**
 * puts_half - Function that prints half of the string.
 * @str: string.
 */

void puts_half(char *str)
{
	int length;
	int n;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 1)
	{
		n = (length - 1) / 2;
		n += 1;
	}
	else
	{
		n = length / 2;
	}
	for (; n < length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
