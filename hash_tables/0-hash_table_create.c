#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - unction that creates a hash table.
 * @size: size of the array.
 * Return:  newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;

hash_table_t *ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
ht->array = malloc(sizeof(struct hash_node_s *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);

		for (i = 0; i < size; i++)
		{
			ht->array[i] = NULL;
		}
	}
	return (ht);
}
