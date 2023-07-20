#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: input
*/

void print_diagonal(int n)
{
for (int a = 0; a < n; a++)
{
_putchar('\\');
}
_putchar('\n');
}
