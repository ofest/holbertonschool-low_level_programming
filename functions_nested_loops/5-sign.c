#include <stdio.h>
#include "main.h"

/**
 *  print_sign - Print the symbol added.
 *  Description : Function that prints a positive or negative number also zero.
 *  @n : number to be checked.
 *  Return: return 1 positive num, return 0 if is zero, return -1 negative num.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
