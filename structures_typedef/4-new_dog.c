#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - Creates a new dog.
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggy;
int nam = 0, own = 0;

if (name != NULL && owner != NULL)
{
nam = _strlen(name) + 1;
own = _strlen(owner) + 1;
doggy = malloc(sizeof(dog_t));

if (doggy == NULL)
return (NULL);

doggy->name = malloc(sizeof(char) * nam);
if (doggy->name == NULL)
{
free(doggy);
return (NULL);
}

doggy->owner = malloc(sizeof(char) * own);
if (doggy->owner == NULL)
{
free(doggy->name);
free(doggy);
return (NULL);
}

doggy->name = _strcpy(doggy->name, name);
doggy->owner = _strcpy(doggy->owner, owner);
doggy->age = age;
}
return (doggy);
}
/**
 * _strlen - copy string
 * @s: string.
 * Return: dest
 */

int _strlen(char *s)
{
int c = 0;

for (; *s != '\0'; s++)
{
c++;
}
return (c);
}
/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}

