#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog.
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dogy;

dogy = malloc(sizeof(dog_t));
if (dogy == NULL)
return (NULL);

if (name != NULL)
{
dogy->name = malloc(strlen(name) + 1);
if (dogy->name == NULL)
{
free(dogy);
return (NULL);
}
strcpy(dogy->name, name);
}
if (owner != NULL)
{
dogy->owner = malloc(strlen(owner) + 1);
if (dogy->owner == NULL)
{
free(dogy->name);
free(dogy);
return (NULL);
}
strcpy(dogy->owner, owner);
}
if (age >= 0)
dogy->age = age;

return (dogy);
}
