#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Function that prints a chessboard.
 * @a: String with the board.
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar  (a[row][col]);
		}
		_putchar ('\n');
	}
}
