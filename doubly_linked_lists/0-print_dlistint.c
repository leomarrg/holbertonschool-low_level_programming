#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - function that prints all elements
 * @h: head node
 * Return: returns number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}

	return (count++);
}

