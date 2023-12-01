#include "lists.h"
#include <stdlib.h>

/**
 * void free_dlistint - frees memory
 * @head: head node
 * Return: returns nothing
*/

void free_dlistint(dlistint_t *head)
{

	dlistint_t *tmpHead, *nextNode;

	tmpHead = head;

	while (head != NULL)
	{
		nextNode = tmpHead->next;
		free(tmpHead);
		tmpHead = nextNode;
	}
}
