#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a given
*                           index of a listint_t list.
* @head: A pointer to the address of the head of the listint_t list.
* @index: The index of the node to be deleted - indices start at 0.
*
* Return: On success - 1.
*         On failure - -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Declare pointers to listint_t nodes */
	listint_t *tmp, *copy;

	/* Declare and initialize index counter */
	unsigned int node = 0;

	/* Check if list is empty */
	if (*head == NULL)
		return (-1);

	/* If index is 0, delete first node and update head */
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	/* Traverse list to node just before the node to be deleted */
	copy = *head;
	while (node < (index - 1) && copy->next != NULL)
	{
		copy = copy->next;
		node++;
	}

	/* If index is out of range, return -1 */
	if (node < (index - 1) || copy->next == NULL)
		return (-1);

	/* Delete the node and connect previous and next nodes */
	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);

	return (1);
}

