#include "lists.h"
#include <stdlib.h>

/**
 * void free_dlistint - frees memory
 * @head: head node
 * Return: returns nothing
*/

void free_dlistint(dlistint_t *head)
{

	dlistint_t *nextNode;

	while (head != NULL)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
}
