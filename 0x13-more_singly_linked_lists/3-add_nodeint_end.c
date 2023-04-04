#include <stdio.h>
#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a linked list of integers.
* @head: Pointer to a pointer to the head node of the linked list.
* @n: The value to be added to the new node.
*
* Return: A pointer to the new node, or NULL if allocation fails.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, set the head to the new node */
	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	/* Traverse the list to the end */
	temp = *head;
	while (temp->next != NULL)
		{
		temp = temp->next;
		}

	/* Set the next pointer of the last node to the new node */
	temp->next = new_node;
	}

	/* Return a pointer to the new node */
	return (new_node);
}

