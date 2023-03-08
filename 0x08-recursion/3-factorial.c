#include "main.h"

/**
 * factorial - function that return the factorial of a number
 * @n: the number
 * Return: factorial of x
 */

int factorial(int x)
{
	if (x < 0)
		return (-1);
	else if (x == 0)
		return (1);
	else
		return (x * factorial(n - 1));
}
