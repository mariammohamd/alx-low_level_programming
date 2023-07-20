#include "main.h"

/**
 * print_line -  draws a straight line in the terminal.
 *
 *  @n: input
 *
*/

void print_line(int n)
{
for (int a = 0; a <= n; a++)
{
putchar('_');
}
putchar('\n');
}
