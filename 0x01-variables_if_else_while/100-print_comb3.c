#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, count = '0', j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = count; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i == j)
			{
				continue;
			}
			if (i == '8' && j == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		count++;
	}
	putchar('\n');
	return (0);
}
