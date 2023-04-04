#include <stdio.h>
#include "lists.h"

/**
* print_listint - Prints all the elements of a listint_t list.
* @h: Pointer to the start of the list.
*
* Return: Number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
	size_t node_size = 0; /* Variable to keep track of number of nodes */

	while (h)
	{
		printf("%d\n", h->n); /* Print the value of the current node */
		node_size++; /* Increment the node size counter */
		h = h->next; /* Move to the next node */
	}

	return (node_size); /* Return the number of nodes in the list */
}
