#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description : Prints the lowercase alphapbet in reverse.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 122 ; i >= 97 ; i--)
	putchar(i);

	putchar ('\n');

	return (0);
}
