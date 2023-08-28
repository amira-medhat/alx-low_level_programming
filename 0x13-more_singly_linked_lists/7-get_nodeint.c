#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - retrieves a node in specific index
 * @head: pointer to first node.
 * @index: the required index.
 * Return: pointer to that node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	for (i = 0, i = 0; node && i < index; node = node->next, i++);
	return (node);
}
