#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head node
 * @str: string received
 * Return: return address of new element or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int strLen;
	list_t *newNode, *lastNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		exit(EXIT_FAILURE);

	strLen = 0;
	lastNode = *head;

	while (str[strLen] != '\0')
	{
		strLen++;
	}
	newNode->str = strdup(str);
	newNode->len = strLen;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	
	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = newNode;

	return (*head);
}




