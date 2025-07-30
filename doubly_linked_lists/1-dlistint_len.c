#include "lists.h"

/**
 * dlistint_len - Add a function that returns the number of elements in a list.
 * @h: linked list.
 * Return: Count.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *current = (dlistint_t *)h;

	if (current == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
