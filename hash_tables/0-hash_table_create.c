#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table
 * Return: returns a pointer to the created hash table or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
unsigned long int i;

	ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	free(ht);
	return (ht);
}
