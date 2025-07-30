#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: pointer to head node.
* @idx: index of the list.
* @n: data of the node.
* Return: total of the sum.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = current;
		new_node->prev = NULL;
		if (current != NULL)
		{
			current->prev = new_node;
		}
	*h = new_node;
	return (new_node);
	}
	while (current != NULL && count < idx)
	{
		count++;
		if (count == idx)
		{
			new_node->prev = current->prev;
			new_node->next = current;
			if (current->prev != NULL)
				current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
