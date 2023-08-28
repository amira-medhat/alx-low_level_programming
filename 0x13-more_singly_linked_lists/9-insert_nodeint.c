#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts node at certain position
 * @head: pointer to first node.
 * @idx: the required index for the new node.
 * @n: value of stored element in the new node.
 * Return: pointer to the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current;
	unsigned int i = 0;

	if (!node)
		return (NULL);
	if (head == NULL || *head == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	current = *head;

	while (current && i < (idx - 1))
	{
		i++;
		current = current->next;
	}

	if (!current)
	{
		free(node);
		return (NULL);
	}

	node->next = current->next;
	current->next = node;
	return (node);
}
