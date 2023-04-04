#include <stdio.h>
#include "lists.h"

/**
* free_listint - Frees a linked list of integers.
* @head: Pointer to the head node of the linked list.
*
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *current_node;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
	current_node = head;
	head = head->next;
	free(current_node);
	}
}
