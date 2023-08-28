#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* listint_len - prints number of elemnts in linked list
* @h: pointer to the first node.
* Return: size of list.
*/

size_t listint_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}
