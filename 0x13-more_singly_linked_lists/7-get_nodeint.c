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
	unsigned int i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (i < index && current)
	{
		current = current->next;
		i++;
		if (current->next == NULL && i != index)
			return (NULL);
	}
	return (current);
}
