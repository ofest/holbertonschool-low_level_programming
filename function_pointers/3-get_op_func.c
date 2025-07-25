#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Add a function that determines the correct function.
 *
 * @s: operator to match to a function
 * Return: pointer.
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;

while (ops[i].op != NULL)
{
	if (ops[i].op[0] == *s)
	return (ops[i].f);
	i++;
}

return (ops[i].f);
}
