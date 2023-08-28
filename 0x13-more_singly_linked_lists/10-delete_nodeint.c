#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at specific index
 * @head: pointer to first node.
 * @index: the required index.
 * Return: 1 on Success, -1 on Failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (!index)
	{
		delete = *head;
		*head = (*head)->next;
		free(delete);
		return (1);
	}

	current = *head;
	while (current && i < (index - 1))
	{
		current = current->next;
		i++;
	}
	if (!current)
		return (-1);
	if (current->next->next == NULL)
	{
		delete = current->next;
		current->next = NULL;
		free(delete);
		return (1);
	}
	delete = current->next;
	current->next = delete->next;
	free(delete);
	return (1);
}
