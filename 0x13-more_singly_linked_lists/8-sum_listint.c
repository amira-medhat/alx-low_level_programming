#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sums elements of whole linked list
 * @head: pointer to the first node.
 * Return: result of sumition.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
