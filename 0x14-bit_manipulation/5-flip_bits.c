#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to get from one number
 * to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Compute the XOR of the two numbers. */
	unsigned long int flip = n ^ m;

	/* Count the number of differing bits. */
	unsigned int count = 0;

	/* Continue as long as there are still differing bits. */
	while (flip > 0)
	{
		/* If the least significant bit of the XOR result is 1, increment count. */
		count += flip & 1;

		/* Shift the XOR result one bit to the right. */
		flip >>= 1;
	}

	/* Return the total count of differing bits. */
	return (count);
}
