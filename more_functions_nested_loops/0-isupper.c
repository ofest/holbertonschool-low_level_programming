#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if is uppercase or lowercase.
 * @c: Valor given.
 * Return: Return 1 if is true , return 0 if is false.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		{
		return (1);
		}
	return (0);
}
