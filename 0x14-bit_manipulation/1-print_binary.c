#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* print_binary - Prints the binary representation of a number
* @n: The number to convert
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	/* Start from the most significant bit */
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int seen_one = 0;

	while (mask > 0)
	{
		if ((n & mask) == 0 && seen_one)
			putchar('0');
		else if ((n & mask) != 0)
		{
			putchar('1');
			seen_one = 1;
		}
		/* Move the mask one bit to the right */
		mask >>= 1;
	}
	if (!seen_one)
		putchar('0');
}
