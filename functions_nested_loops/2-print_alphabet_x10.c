#include "main.h"

/**
 *  print_alphabet_x10 - Function to print alphabet ten times.
 *  Description : function that prints the alphabet lowercase ten times.
 *  Return: Void.
 */

void print_alphabet_x10(void)
{
	char i;
	int c = 0;

	while (c <= 9)
	{
	for (i = 97 ; i <= 122 ; i++)
	_putchar(i);
	}
	_putchar ('\n');\

	c++;
}
