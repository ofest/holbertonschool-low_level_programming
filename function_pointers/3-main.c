#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - code.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 is true, 1 false.
 */

int main(int argc, char *argv[])
{
int num1;
int num2;

if (argc != 4)
	{
	printf("Try again\n");
	return (1);
	}
if (!strchr("+-*/%", argv[2][0]))
	{
	printf("ERROR\n");
	return (1);
	}
if (strlen(argv[2]) != 1)
	{
	printf("ERROR\n");
	return (1);
	}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

return (0);
}
