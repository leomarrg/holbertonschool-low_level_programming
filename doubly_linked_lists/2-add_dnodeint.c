#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - add nodes at the start of doubly linked list
 * @head: head node
 * @n: num received
 * Return: returns the address of new element or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (*head);
}
