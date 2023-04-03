#include <stdio.h>
#include "lists.h"

/**
 * struct listint_s -singly linked list
 * @h: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	/* Traverse the list untill we reach the end */
	for (; h != NULL; h = h->next, count++)
	{
		print("%d\n", h->n);
	}

	return (nodes);
}
