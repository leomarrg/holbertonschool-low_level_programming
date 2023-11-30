#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - function that adds a node at the start of a linked list
 * @head: head node
 * @str: node data to be added
 * Return: returns the address of the new element or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int strLen;

	strLen = 0;
	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		exit(EXIT_FAILURE);

	while (str[strLen] != '\0')
	{
		strLen++;
	}

	newNode->str = strdup(str);
	newNode->len = strLen;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
