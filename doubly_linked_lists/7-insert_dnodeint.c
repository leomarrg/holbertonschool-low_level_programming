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

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	currNode = *h;

	if (newNode == NULL)
		return (NULL);

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	if (*h == NULL && idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (currNode->next == NULL)
		return (add_dnodeint_end(h, n));

	if (currNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (index = 0; index < idx - 1 && currNode != NULL; index++)
	{
		currNode = currNode->next;
	}

	tmpNode = currNode->next;
	currNode->next = newNode;
	newNode->prev = currNode;
	newNode->next = tmpNode;

	if (tmpNode != NULL)
		tmpNode->prev = newNode;

	return (newNode);
}
