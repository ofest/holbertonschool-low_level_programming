#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: String 1.
 * @s2: String 2.
 * @n: Number of bytes.
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *copy;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
	{}
	else
	{
	len2 = n;
	}

	copy = malloc((len1 + len2 + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		copy[i] = s1[i];
	for (i = 0; i < len2; i++)
		copy[len1 + i] = s2[i];

	copy[len1 + len2] = '\0';
	return (copy);
}
