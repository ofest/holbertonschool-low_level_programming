#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program with a multiplication function.
 * @argc: The argument count and represents the number.
 * @argv: Array of strings.
 * Return: Return 0.
 */

int main(int argc, char *argv[])
{
	int a, b;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		n += atoi(argv[a]);
	}
	printf("%d\n", n);
	return (0);
}
