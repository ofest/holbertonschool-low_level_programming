#include <stdio.h>
#include "main.h"

/**
 *  _abs - Calcute the absolute valor of a value.
 *  Description : Absolute value of the integer.
 *  @n : Valor.
 *  Return: Return the absolute value of n.
 */

int _abs(int n)
{
	if (n < 0)
	{
	n = (-1) * n;
	}
	return (n);
}
