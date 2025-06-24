#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swamp the integers.
 * @a: Integer a.
 * @b: Integer b.
 */

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
