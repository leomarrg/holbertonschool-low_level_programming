#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees linked lists
 * @head: head mode
 * Return: returns nothing
*/

void free_list(list_t *head)
{
	list_t *tmpHead;
	while (head != NULL)
	{
		tmpHead = head;
		head = head->next;
		free(tmpHead->str);
		free(tmpHead);
	}
}
