#include "main.h"
#include <stdio.h>

/**
 * prime_helper - Look if the number is negative or 0.
 * @n: raised number.
 * @divisor:
 * Return: Return 0.
 */

int prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (prime_helper(n, divisor + 1));
}


	
	
/**
 * _prime_number - Look if the number is negative or 0.
 * @n: raised number.
 * Return: Return 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime_helper(n, 2));
}
