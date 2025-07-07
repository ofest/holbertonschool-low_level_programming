#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a new allocated space in memory
 * @str: String.
 * Return: NULL or arra
 *
 */

char *_strdup(char *str)
{
	unsigned int n = 0;
	char *array;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[n] != '\0')
	{
	n++;
	}

	array = malloc((n + 1) * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		array[i] = str[i];
	}
	array[n] = '\0';

	return (array);

}
