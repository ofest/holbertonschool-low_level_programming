#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variable of type struct dog
 *
 * @d: pointer to dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
{
return;
}

d->name = name;
d->age = age;
d->owner = owner;

}



