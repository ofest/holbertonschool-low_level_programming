#include <stdio.h>
#include "main.h"

/**
 *  print_last_digit - Prints the last digit of a number.
 *  Description : Last digit of a number.
 *  @n : Valor.
 *  Return: Return last valor of the digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
