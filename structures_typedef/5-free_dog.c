#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

 void free_dog(dog_t *d)

 {
    if (d == NULL)
        return(d);

	if (d->name != NULL)
			free(d->name);

    if (d->owner != NULL)
        free(d->owner);

    free(d);
}