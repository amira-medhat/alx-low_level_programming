#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds node at first of list
 * @head: pointer to the head.
 * @n: stored element.
 * Return: pointer to the added node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		*head = new;
		new->next = NULL;
		return (new);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
