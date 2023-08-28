#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    slow = fast = head;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        /* If there's a loop, slow and fast will meet */
        if (slow == fast)
        {
            printf("Loop detected\n");
            exit(98);
        }
    }

    while (head)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        count++;
        head = head->next;
    }

    return count;
}
