#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints all arguments.
 * @argc: The argument count and represents the number.
 * @argv: Array of strings.
 * Return: Return 0.
 */

int main(int argc, char *argv[])

{
	int n = 0;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
