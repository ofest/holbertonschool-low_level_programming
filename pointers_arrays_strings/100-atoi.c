#include <stdio.h>
#include "main.h"

/**
 * _atoi - Copies a string from source to destination.
 * @s: array of sting
 * Return: Convert integer or 0 if he doesnt find a number.
 */

int _atoi(char *s)

{
	int i = 0, sign = 1, n = 0;
	int found_num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
			found_num = 1;
		}
		else if (found_num)
		{
			return (n * sign);
		}
		i++;
	}
	return (n * sign);
}
