#include "main.h"
#include <stdio.h>

/**
 * sqrt_helper - Search for the raised number.
 * @n: raised number.
 * @g: guess number.
 * Return: Return -1, 0 if is good return to sqrt_helper searching the result.
 */

int sqrt_helper(int n, int g)

{
	if (g * g == n)
	{
		return (g);
	}
	if (g * g > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, g + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_helper(n, 1));
}

