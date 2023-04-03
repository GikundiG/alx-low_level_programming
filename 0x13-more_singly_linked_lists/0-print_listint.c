#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t list
 * @h: list head pointer
 *
 * Return: Nodes number in the list
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
