#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return:  newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *ht;

ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
ht->size = size;
ht->array = malloc(sizeof(struct hash_node_t *) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
			ht->array[i] = NULL;
	}
return (ht);
}
