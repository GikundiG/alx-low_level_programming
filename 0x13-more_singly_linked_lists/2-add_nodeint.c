#include <stdio.h>
#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a linked list of integers.
* @head: Pointer to a pointer to the head node of the linked list.
* @n: The value to be added to the new node.
*
* Return: A pointer to the new node, or NULL if allocation fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Allocate memory for a new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	/* If memory allocation fails, return NULL */
	if (new_node == NULL)
	return (NULL);

	/* Assign the value to the new node */
	new_node->n = n;

	/* Set the next pointer of the new node to the current head node */
	new_node->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new_node;

	/* Return a pointer to the new node */
	return (new_node);
}
