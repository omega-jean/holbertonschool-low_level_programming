#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power of y.
 *
 * @x: value
 * @y: power
 *
 * Return: If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
int result = 1;
int i;
if (y < 0)
return (-1);
else if (y > 0)
{
for (i = 0; i < y; ++i)
{
result *= x;
}
else
for (i = 0; i > y; --i)
{
resultat /= x;
}
}
}
