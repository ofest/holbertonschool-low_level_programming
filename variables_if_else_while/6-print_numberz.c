#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description : Prints the numbers 0 to 9 only using putchar twice.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 48 ; i <= 57 ; i++)
		putchar(i);

	putchar ('\n');

	return (0);
}
