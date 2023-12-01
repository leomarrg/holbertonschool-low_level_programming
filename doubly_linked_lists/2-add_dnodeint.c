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

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
