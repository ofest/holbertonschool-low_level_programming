#include "lists.h"

/**
* print_dlistint - Add a function that prints all the elements of a list.
* @h: linked list.
* Return: count.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *current = (dlistint_t *)h;

	if (current == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
