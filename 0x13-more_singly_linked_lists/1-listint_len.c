#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Computes the number of elements in a linked list of integers.
 * @h: Pointer to the head node of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
    size_t node_count = 0;

    /* Traverse the linked list until we reach the end */
    while (h)
    {
        /* Increment the count for each node visited */
        node_count++;
        /* Move to the next node */
        h = h->next;
    }

    /* Return the total number of nodes in the linked list */
    return (node_count);
}
