#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: number
 *
 * Return: If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
{
if (n < 0)
return (-1);
}
{
int i;
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_recursion(n, i + 1));
}
}
