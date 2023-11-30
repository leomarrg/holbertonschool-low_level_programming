#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function that prints linked list
 * @h: header node
 * Return: returns number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int cNodes;

	cNodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL && h->str[0] != '\0')
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else if (h->str != NULL && h->str[0] == '\0')
		{
			printf("[0]\n");
		}
		else
			printf("[0] (nil)\n");

		h = h->next;
		cNodes++;
	}

	return (cNodes);
}
