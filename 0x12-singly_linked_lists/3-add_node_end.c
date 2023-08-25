#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node at end of list
 * @head: pointer to the head.
 * @str: stored string.
 * Return: pointer to the added node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *current = *head;

	if (new == NULL)
	return (NULL);
	if (*head == NULL)
	{
		new->str = strdup(str);
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
	new->str = strdup(str);
	return (new);
}
