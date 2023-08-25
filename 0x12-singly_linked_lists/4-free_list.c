#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* free_list - frees linked list
* @head: pointer to first node.
*/

void free_list(list_t *head)
{
	list_t *current = head;

	if (head == NULL)
		return;
	while (current != NULL)
	{
		free(current->str);
		current = head->next;
		free(head);
		head = current;
	}
}
