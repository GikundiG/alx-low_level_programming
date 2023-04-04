#include "lists.h"

/**
* sum_listint - Calculates the sum of all the data (n) of a listint_t list.
*
* @head: A pointer to the head of the listint_t list.
*
* Return: If the list is empty - 0.
*         Otherwise - the sum of all the data.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Traverse the list while adding the data of each node to the sum */
	for (; head; head = head->next)
	sum += head->n;

	return sum;
}
