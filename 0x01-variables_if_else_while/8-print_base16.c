#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int n = 0;
while (n <= 9)
{
putchar(n + '0');
n++;
}
char ch = 'A';
while (ch < 'G')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
