#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

void print_s(va_list list);
void print_f(va_list list);
void print_i(va_list list);
void print_c(va_list list);

/**
* print_all - prints anything based on passed format string.
* @format: constant that tells what type of format to print.
* Return: void.
*/

void print_all(const char * const format, ...)
{
va_list list;
int index = 0;
int j = 0;
char table[] = {'c', 'i', 'f', 's', '\0'};
void (*ptr[])(va_list) = {print_c, print_i, print_f, print_s};
char *separator = "";

va_start(list, format);
while (format != NULL && format[index] != '\0')
	{
	j = 0;
	while (table[j] != '\0')
		{
		if (table[j] == format[index])
			{
			printf("%s", separator);
			ptr[j](list);
			separator = ", ";
			break;
			}
		j++;
		}
	index++;
	}
va_end(list);
printf("\n");
}

/**
* print_c - Print a char.
* @list: list of arguments.
* Return: void.
*/

void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
* print_i - Print a integer.
* @list: list of arguments.
* Return: void.
*/

void print_i(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
* print_f - Print a float.
* @list: list of arguments'.
* Return: void.
*/

void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
* print_s - Print a string.
* @list: list of arguments.
* Return: void.
*/

void print_s(va_list list)
{
char *str;
str = va_arg(list, char *);

if (str == NULL)
	{
	printf("(nil)");
	return;
	}
printf("%s", str);
}
