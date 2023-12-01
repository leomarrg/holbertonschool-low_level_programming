#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - function returns nth node of linked list
 * @head: head node
 * @index: index to be returned
 * Return: returns an index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (head);
}
