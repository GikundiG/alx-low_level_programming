#include <stdio.h>

/**
 * print_line - prints a straight line of '_' characters to stdout
 * @n: the number of times to print the '_' character
 *
 * Return: void
 */
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
return;
}
for (int i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
