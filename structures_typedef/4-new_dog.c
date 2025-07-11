#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
char *name_copy, *owner_copy;
int i, k;
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);
if (name != NULL)
{
for (i = 0; *(name + i) != '\0'; i++)
;

name_copy = malloc(sizeof(char) * (i + 1));
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}

for (k = 0; k <= i; k++)
name_copy[k] = *(name + k);
new_dog->name = name_copy;
}
if (owner != NULL)
{
for (i = 0; *(owner + i) != '\0'; i++)
;
owner_copy = malloc(sizeof(char) * (i + 1));
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
for (k = 0; k <= i; k++)
owner_copy[k] = *(owner + k);
new_dog->owner = owner_copy;
}
if (age >= 0)
new_dog->age = age;
return (new_dog);
}
