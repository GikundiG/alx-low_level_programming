#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @x: the string
 * Return: length of x
 */

int _strlen_recursion(char *x)
{
	if (*x == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(x + 1));
}
