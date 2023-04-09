#include <stddef.h>
#include <limits.h>

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: a pointer to the number whose bit is to be set.
* @index: the index, starting from 0, of the bit to set.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= sizeof(unsigned long int) * CHAR_BIT)
	{
	/* invalid pointer or index out of range */
	return (-1);
	}
	*n |= 1ul << index;
	return (1);
}
