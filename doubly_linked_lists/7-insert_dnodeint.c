#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - function to insert a new node at a given position
 * @h: head node
 * @idx: index node
 * @n:data received
 * Return: returns address of new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *currNode, *tmpNode;
	unsigned int index;

	index = 0;
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	currNode = *h;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*h == NULL && idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (currNode->next == NULL)
		add_dnodeint_end(h, n);

	while (currNode != NULL)
	{
		if (index == idx - 1)
		{
			tmpNode = currNode->next;
			newNode->next = currNode->next;
			newNode->prev = currNode;
			currNode->next = newNode;
			if (tmpNode != NULL)
				tmpNode->prev = newNode;
			if (idx == 0)
				*h = newNode;

			break;
		}
		currNode = currNode->next;
		index++;
	}
	return (tmpNode);
}
