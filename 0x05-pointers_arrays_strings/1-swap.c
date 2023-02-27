#include "main.h"
/**
 * swap_int -> swaps the value of a and b
 * @a: to be swaped by b
 * @b: to be swaped by a
 *
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
