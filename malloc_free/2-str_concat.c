#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 *@s1: String 1.
 *@s2: String 2.
 * Return: Null ou copy.
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *copy;
	int i, l;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	copy = malloc((len1 + len2 + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		copy[i] = s1[i];

	for (l = 0; l < len2; l++)
		copy[len1 + l] = s2[l];

	copy[len1 + len2] = '\0';
	return (copy);
}
