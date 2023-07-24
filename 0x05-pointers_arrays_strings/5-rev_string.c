#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
int l, i;
char A;
for (l = 0; s[l] != '\0'; ++l)
	;
for (i = 0; i < l / 2; i++)
{
A = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = A;
}
}
