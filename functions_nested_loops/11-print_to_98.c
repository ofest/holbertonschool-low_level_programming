#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Print all natural number from n to 98.
* @n: The number to start.
*/

void print_to_98(int n)

{
if (n <= 98)
	{
	for (; n <= 98; n++)
		{
		printf("%d", n);
		if (n != 98)
		printf(", ");
		}
	printf("\n");
	}
else
	{
	for (; n >= 98; n--)
		{
		printf("%d", n);
		if (n != 98)
		printf(", ");
		}
	printf("\n");
	}
}
