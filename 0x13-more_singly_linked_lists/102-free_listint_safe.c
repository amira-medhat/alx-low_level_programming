#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the pointer of the first node.
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;

	while (current)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);

		if (temp <= current)
			break;
	}

	return (size);
}
