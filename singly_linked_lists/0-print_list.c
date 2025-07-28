#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: linked list
 *
 * Return: count.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{

		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		if (current->str != NULL)
		{
		printf("[%u] %s\n", current->len, current->str);
		}
	count++;

	current = current->next;
	}
	return (count);
}

