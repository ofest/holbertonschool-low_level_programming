#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check the digit.
 * @c: Valor given.
 * Return: Return 1 if is a digit , return 0 if not.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		{
		return (1);
		}
	return (0);
}
