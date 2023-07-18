#include "main.h"

/**
 *  _isalpha - function to check if
 *               character is alpha
 *
 *  @c: checks input of function
 *
 * Return: return 1 if `c` is lowercase or uppercase
 *         otherwise always 0 (Success)
 *
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
return (1);
return (0);
}
