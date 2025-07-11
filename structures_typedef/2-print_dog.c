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
printf("Name: ");
return;
}

if (d->name == NULL)
{
printf("(nil)\n");
}
else
printf("Name: %s\n", d->name);

printf("Age: %.1f\n", d->age);

if (d->owner == NULL)
{
printf("Name:(nil)\n");
}
else
printf("Owner: %s\n", d->owner);

}
