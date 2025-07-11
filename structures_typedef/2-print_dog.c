#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Prints the struct dog
 * @d: Pointer to the dog.
 * Return: void
 */

void print_dog(struct dog *d)

{
if (d == NULL)
{
printf("(nil)\n");
}

if (d != NULL)
{
printf("Name:%s\n", d->name);
printf("Age:%.1f\n", d->age);
printf("Owner:%s\n", d->owner);
}

}