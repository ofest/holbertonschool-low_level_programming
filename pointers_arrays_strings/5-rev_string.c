#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverse  string.
 * @s: string.
 *
 */

void rev_string(char *s)
{
	int point1 = 0, point2 = 0;

	while (s[point2++])
		point1++;

	for (point2 = point1 - 1; point2 >= point1 / 2; point2--) 
	{
		char tmp = s[point2];
		s[point2] = s[point1 - point2 - 1];
		s[point1 - point2 - 1] = tmp;
	}
}
