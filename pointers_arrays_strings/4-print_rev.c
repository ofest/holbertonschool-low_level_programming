#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev -  function that prints a string.
 * @s: string.
 *
 */

void print_rev(char *s)
{
	int l, c;

	l = strlen(s);

	for (c = l - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
