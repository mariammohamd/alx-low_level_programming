#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int n = 0;
while (n <= 9)
{
putchar(n + '0');
if (n == 9)
break;
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
