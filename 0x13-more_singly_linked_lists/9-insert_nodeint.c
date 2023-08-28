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
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	for (i = 0, current = *head; current && i < (idx - 1); current = current->next, i++)
	{
	  /* just looping to reach condition */
	}

	node->next = current->next;
	current->next = node;
	node->n = n;
	if (!node)
		  return (NULL);
	return (node);
}
