#include <stdio.h>
#include "lists.h"


/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
*
* @head: Pointer to the start of the list.
* @index: Index of the node to be returned.
*
* Return: If the node at the given index exists, return the corresponding
*         node; otherwise, return NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0; /* Counter for traversing the linked list */

	while (head != NULL)
	{
		/* Check if the current node is the one we're looking for */
		if (count == index)
			return (head);

		count++;
		head = head->next;
	}

	/* If we get here, the node at the given index does not exist */
	return (NULL);
}

