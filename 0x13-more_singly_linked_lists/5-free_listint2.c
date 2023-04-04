#include <stdio.h>
#include "lists.h"

/**
* free_listint2 - Frees a linked list of integers and sets the head to NULL.
* @head: A pointer to the address of the head node of the linked list.
*
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	/* Check if head is NULL or list is empty */
	if (head == NULL || *head == NULL)
	return;

	/* Traverse the list and free each node */
	current_node = *head;
	while (current_node != NULL)
		{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
		}

	/* Set head to NULL */
	*head = NULL;
}
