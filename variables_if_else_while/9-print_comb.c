#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description : Prints the numbers 0 to 9, separated by ',' and a space.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i !=57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
