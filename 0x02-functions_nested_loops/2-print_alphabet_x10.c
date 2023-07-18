#include "main.h"
/**
 * print_alphabet_x10.c - utilizes on the _putchar function to print
 *                    the alphabet a - z 10 times
*/

void print_alphabet_x10(void)
{
int ch;
for (int i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
