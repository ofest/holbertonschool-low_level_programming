#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 *  op_add - Addition.
 *Return: result
 * @a: Number1
 * @b: Number2
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 *  op_sub - Subtraction.
 *Return: result
 * @a: Number1
 * @b: Number2
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplication.
 *Return: result
 * @a: Number1
 * @b: Number2
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Division.
 *Return: result
 * @a: Number1
 * @b: Number2
 */

int op_div(int a, int b)
{
if (b == 0)
	{
	return (0);
	}
return (a / b);
}

/**
 * op_mod - modulo.
 * Return: result
 * @a: Number1
 * @b: Number2
 */

int op_mod(int a, int b)
{
if (b == 0)
	{
	return (0);
	}
return (a % b);
}
