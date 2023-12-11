#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - function that gives you the index of a key
 * @key: key of hash table
 * @size: size of hash table
 * Return: returns the index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

