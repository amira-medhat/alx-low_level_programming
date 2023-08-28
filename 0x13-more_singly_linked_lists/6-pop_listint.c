#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - it retrieve the element of first node before detroying it
 * @head: pointer to first node.
 * Return: value of the element of the first node.
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int value;

	if (*head == NULL || head == NULL)
		return (0);
	value = (*head)->n;
	current = current->next;
	free(*head);
	(*head) = current;
	return (value);
}
