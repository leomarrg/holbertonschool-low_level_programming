#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: head node
 * Return: returns the number of elements in a linked list
*/

size_t list_len(const list_t *h)
{
	unsigned int elem;

	elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}

