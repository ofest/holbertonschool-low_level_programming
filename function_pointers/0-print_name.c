#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person.
 * @f: Pointer to a function.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))

{
if (name == NULL)
{
name = malloc(sizeof(char *));
if (name == NULL)
{
return;
}
}

if (f == NULL)
f(name);
return;

}
