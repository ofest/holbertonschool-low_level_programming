#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - code.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 is true, 1 false.
 */

int main(int argc, char *argv[])
{	
int num1 = 0;
int num2 = 0;

if (argc != 4)
	{
	printf("Error\n");
	return (1);
	}

if (!strchr("+-*/%", argv[2][0]))
	{
	printf("ERROR\n");
	return (1);
	}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);


if (strcmp(argv[2], "+") == 0) 
{
printf("%d\n", num1 + num2);
} 

else if (strcmp(argv[2], "-") == 0) 
{
printf("%d\n", num1 - num2);
}
else if (strcmp(argv[2], "*") == 0) 
{
printf("%d\n", num1 * num2);
}
else if (strcmp(argv[2], "/") == 0) 
	{
	if (num2 == 0) 
		{
		printf("ERROR: Division by zero\n");
        return (1);
		}
	printf("%d\n", num1 / num2);
	}
else if (strcmp(argv[2], "%") == 0) 
	{
	if (num2 == 0) 
		{
       	printf("ERROR: Division by zero\n");
        return (1);
    	}
	printf("%d\n", num1 % num2);
	}

if (strlen(argv[2]) != 1)
	{
	printf("ERROR\n");
	return (1);
	}
return (0);
}
