#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - function that returns nums of elements
 * @h: head node
 * Return: returns nums of element
*/

size_t dlistint_len(const dlistint_t *h)
{
	int strLen;

	strLen = 0;

	while (h != NULL)
	{
		h = h->next;
		strLen++;
	}

	return (strLen);
}
