#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers - Print numbers.
* @separator: text between the numbers','.
* @n: Numbers.
* Return: void.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int result;
va_list list;

va_start(list, n);

for (i = 0; i < n; i++)
	{
	if (i > 0)
		{
		printf("%s", separator);
		}
	result = va_arg(list, int);
	printf("%d", result);
	}
printf("\n");

va_end(list);
}
