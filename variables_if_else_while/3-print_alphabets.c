#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description : Prints the alphabet in lowercase and Uppercase.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 97 ; i <= 122 ; i++)
		putchar(i);

	for (i = 65 ; i <= 90 ; i++)
		putchar(i);

	putchar ('\n');

	return (0);
}
