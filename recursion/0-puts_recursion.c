#include "main.h"

/**
 *  _puts_recursion - Prints the string, followed my a new line.
 * @s: string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
