#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints a chessboard.
 * @a: String with the board.
 * @size: size ofe
 */

void print_diagsums(int *a, int size)

{
	int row;
	int sum_primary = 0;
	int sum_secondary = 0;

	for (row = 0; row < size; row++)
	{
		sum_primary += a[row * size + row];
		sum_secondary += a[row * size + (size - 1 - row)];
	}
	printf("%d, %d\n", sum_primary, sum_secondary);
}
