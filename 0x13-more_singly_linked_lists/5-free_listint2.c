#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* free_listint2 - frees linked list
* @head: pointer to first node.
*/

void free_listint2(listint_t **head)
{
	listint_t *current, delete;

	if (head == NULL || *head == NULL)
		return;
	current = *head;
	while (current)
	{
		delete = current;
		current = current->next;
		free(delete);
	}
	*head = NULL;
}
