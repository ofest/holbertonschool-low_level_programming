#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the elements in a linked list
 * @h: linked list
 *
 * Return: count.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
	count++;

	current = current->next;
	}
	return (count);
}
