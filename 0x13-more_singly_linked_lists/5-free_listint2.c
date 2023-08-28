#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* free_listint2 - frees linked list
* @head: pointer to first node.
*/

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (*head == NULL)
		return;
	while (current != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
