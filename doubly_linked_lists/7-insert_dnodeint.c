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
	dlistint_t *newNode, *currNode;
	unsigned int index;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	currNode = *h;

	if (newNode == NULL)
		return (NULL);

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (currNode->next == NULL)
		return (add_dnodeint_end(h, n));


	for (index = 0; index < idx - 1 && currNode != NULL; index++)
	{
		currNode = currNode->next;
		if (currNode == NULL)
			return (NULL);
	}

	newNode->prev = currNode;
	newNode->next = currNode->next;
	currNode->next->prev = newNode;
	currNode->next = newNode;
	
	return (newNode);
}
