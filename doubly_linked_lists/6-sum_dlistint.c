#include "lists.h"

/**
* sum_dlistint - Returns the sum of all the data of the linkedList.
* @head: pointer to head node
* Return: total of the sum.
*/

int sum_dlistint(dlistint_t *head)
{
int total = 0;

if (head == NULL)
	{
	return (0);
	}

while (head != NULL)
	{
	total += head->n;
	head = head->next;
	}

return (total);
}
