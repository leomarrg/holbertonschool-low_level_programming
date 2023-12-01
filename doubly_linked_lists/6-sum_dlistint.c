#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sums all data of a linked list
 * @head: head node
 * Return: returns all added data
*/

int sum_dlistint(dlistint_t *head)
{

	int sum;

	sum = 0;

	while (head != NULL)
	{
		if (head == NULL)
			return (0);

		sum += head->n;
		head = head->next;
	}

	return (sum);
}
