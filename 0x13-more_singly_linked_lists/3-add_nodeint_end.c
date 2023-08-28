#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node at end of list
 * @head: pointer to the head.
 * @n: stored element.
 * Return: pointer to the added node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new == NULL)
	return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		*head = new;
		new->next = NULL;
		return (new);
	}
	while (current->next != NULL)
	{
	current = current->next;
	}
	current->next = new;
	new->next = NULL;
	new->n = n;
	return (new);
}
