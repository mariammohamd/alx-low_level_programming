#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a:First input.
 * @b:second input.
 *
 * Return:void.
 */

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
