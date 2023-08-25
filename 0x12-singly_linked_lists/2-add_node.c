#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node at first of list
 * @head: pointer to the head.
 * @str: stored string.
 * Return: pointer to the added node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(list_t);

	if (new == NULL)
	return (NULL);
	if (*head == NULL)
	{
		new->str = strdup(str);
		*head = new;
		new->next = NULL;
		return (new);
	}
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
