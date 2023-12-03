#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a given node
 * @head:head node
 * @index: index given
 * Return: returns 1 if succeeded -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currNode;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	currNode = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(currNode);
		return (1);
	}

	for (i = 0; i < index && currNode != NULL; i++)
	{
		currNode = currNode->next;
	}

	if (currNode == NULL)
		return (-1);

	if (currNode->prev != NULL)
		currNode->prev->next = currNode->next;
	if (currNode->next != NULL)
		currNode->next->prev = currNode->prev;

	free(currNode);

	return (1);
}



