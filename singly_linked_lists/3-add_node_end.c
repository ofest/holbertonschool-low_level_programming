#include "lists.h"

/**
 * add_node_end - add node at the end of a list
 * @head: head of the list
 * @str: string
 *
 * Return: linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}


/**
 * _strlen - finds the length of a string
 * @str: pointer to string
 *
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
