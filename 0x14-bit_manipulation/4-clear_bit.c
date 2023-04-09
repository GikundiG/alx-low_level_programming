#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: pointer to an unsigned long int.
* @index: index of the bit to be cleared.
*
* Return: 1 if successful, -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
	return (-1);

	mask = ~(1UL << index);
	*n = (*n & mask) | ((*n >> 1) & ~mask);

	return (1);
}
