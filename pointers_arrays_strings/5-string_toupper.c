#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Function that change the lowercases to uppercases.
 * @a: sting
 * Return: Return to a string with the news values.
 */

char *string_toupper(char *a)
{
	int index = 0;

	while (a[index])
	{
		if (a[index] >= 97 && a[index] <= 122)
		{
			a[index] -= 32;
		}
		index++;
	}
	return (a);
}
