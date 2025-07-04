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
	int a;
        int b;
        int result;

	if (argc != 3)
        {
                printf("Error\n");
                return (1);
        }
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = a * b;
	printf("%d\n", result);
	return (0);

}
