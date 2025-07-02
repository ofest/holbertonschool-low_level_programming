#include "main.h"
#include <stdio.h>

/**
 * factorial - check the code
 * @n: Given number.
 * Return: +0 return -1, =0 return 1, if not factorial.
 */

int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
