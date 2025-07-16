#include "main.h"
/**
* print_triangle - Entry point of the program
* @size: The height of the triangle to be printed.
* Description: This function prints a triangle of hashtags (#)
* If the size is less than or equal to zero, it prints a new line.
*/
void print_triangle(int size)
{
	int a, b, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (space = 0; space < size - a - 1; space++)
				_putchar(' ');

			for (b = a + 1; b > 0; b--)
			_putchar('#');
			_putchar('\n');
		}
	}
}
