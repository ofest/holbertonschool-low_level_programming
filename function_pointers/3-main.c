#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int);

/**
 * main - code.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 is true, 1 false.
 */

int main(int argc, char *argv[])
{
	int a, b;
	char c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = *argv[2];

	if (argv[2][1] != '\0' || *get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((c == '/' || c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(a, b));

	return (0);
}
