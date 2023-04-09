#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: A pointer to a string of 0 and 1 chars
*
* Return: The converted number, or 0 if there is one or more chars
*         in the string b that is not 0 or 1, or if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
/* Declare a variable to store the converted result */
	unsigned int result = 0;

	/* Check if the input pointer is NULL*/
	if (b == NULL)
		return (0);

	/* Loop through the input string, one character at a time*/
	for (; *b != '\0'; b++)
	{
	    /* Check if the current character is either '0' or '1'*/
		if (*b != '0' && *b != '1')
			return (0);

		/* Left shift the result by one bit and add the value of the current bit*/
		result <<= 1;
		result += (*b - '0');
	}

	/* Return the final result*/
	return (result);
}
