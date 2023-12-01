#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint_end - adds elemenet at the end of doubly linked list
 * @head: head node
 * @n: data received from main
 * Return: returns address of new element or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmpPtr;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		tmpPtr = *head;

		while (tmpPtr->next != NULL)
		{
			tmpPtr = tmpPtr->next;
		}
		tmpPtr->next = newNode;
		newNode->prev = tmpPtr;
	}
	return (*head);
}


