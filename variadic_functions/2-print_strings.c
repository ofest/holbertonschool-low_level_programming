#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - Print stringsgit pr.
* @separator: text between the numbers','.
* @n: Numbers.
* Return: void.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
const char *result;
va_list list;

va_start(list, n);

for (i = 0; i < n; i++)
	{
	if (i > 0 && separator != NULL)
		{
		printf("%s", separator);
		}

	if (result == NULL)
		{
		printf("%s(nil)", result);
		}

	result = va_arg(list, const char *);
	printf("%s", result);
	}

printf("\n");
va_end(list);
}
