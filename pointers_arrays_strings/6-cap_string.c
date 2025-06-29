#include "main.h"
#include <stdio.h>

/**
 * cap_string - Function that change the lowercases to uppercases.
 * @a: string
 * Return: Return to a string with the news values.
 */

char *cap_string(char *a)
{
	int index = 0;

	while (a[index])
	{
		while (!(a[index] >= 'a' && a[index] <= 'z'))
			index++;

		if
		(a[index - 1] == ' ' ||
		a[index - 1] == '\t' ||
		a[index - 1] == '\n' ||
		a[index - 1] == ',' ||
		a[index - 1] == ';' ||
		a[index - 1] == '.' ||
		a[index - 1] == '!' ||
		a[index - 1] == '?' ||
		a[index - 1] == '"' ||
		a[index - 1] == '(' ||
		a[index - 1] == ')' ||
		a[index - 1] == '{' ||
		a[index - 1] == '}' ||
		index == 0)
		a[index] -= 32;
	index++;
	}
	return (a);
}
