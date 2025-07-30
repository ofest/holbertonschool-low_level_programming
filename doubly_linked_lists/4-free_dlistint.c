#include "lists.h"

/**
 * free_dlistint - free the list.
 * @head: pointer to head node
 */

 void free_dlistint(dlistint_t *head)

{
    dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
        free(node);
	}
}
