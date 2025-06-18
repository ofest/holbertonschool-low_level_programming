#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description : Prints the alphabet in lowercase excluding 'q' and 'e'.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 97 ; i <= 122 ; i++)

		if (i != 101 && i != 113)
		putchar(i);

	putchar ('\n');

	return (0);
}
