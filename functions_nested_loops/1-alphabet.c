#include <stdio.h>
#include "main.h"

/**
 *  print_alphabet - Function to print alphabet
 *  Description : function that prints the alphabet lowercase.*
 *  Return: Void.
 */

void print_alphabet(void)
{
	char i;

	for (i = 97 ; i <= 122 ; i++)
	_putchar(i);

	_putchar ('\n');
}
