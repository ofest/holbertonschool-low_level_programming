#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Sum all the parameters.
* @n: Numbersto sum.
* Return: sum.
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int sum = 0;
int value;
va_list list;

if (n == 0)
	{
	return (0);
	}

va_start(list, n);

for (i = 0; i < n; i++)
	{
	value = va_arg(list, int);
	sum += value;
	}
va_end(list);
return (sum);
}
