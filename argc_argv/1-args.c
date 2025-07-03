#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints its name.
 * @argc: The argument count and represents the number.
 * @argv: Array of strings.
 * Return: Return 0.
 */

int main(int argc, char *argv[])

{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
