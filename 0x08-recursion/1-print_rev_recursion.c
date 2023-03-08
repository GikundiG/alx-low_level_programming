#include "main.h"

/**
 * _print_rev_recursion -> reverses a string
 * @x: argument string
 *
 */
void _print_rev_recursion(char *x)
{
if (*x)
{
_print_rev_recursion(x + 1);
_putchar(*x);
}
}
