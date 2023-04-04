#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
*                           in a listint_t list
* @head: pointer to the pointer to the head of the listint_t list
* @idx: index of the list where the new node should be added
* @n: value to be added to the new node
*
* Return: If the function fails - NULL
*         Otherwise - a pointer to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	temp = *head;

	/* Insert the new node at the specified index */
	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	for (i = 1; i < idx; i++)
	{
	/* If the end of the list is reached before the index, return NULL */
	if (temp->next == NULL)
	return (NULL);
	temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
