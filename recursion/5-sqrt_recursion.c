#include "main.h"

/**
 * _sqrt_recursion - main funct
 *
 * @n: int n
 *
 * Return: int
 */


int _sqrt_recursion(int n)
{
return (_sqrt_recursion(n, 1));
}


/**
 * _sqrt - _sqrt_recursion
 *
 * @n: integer paramtr
 * @i: integer parameter
 *
 * Return: sqrt
 */

int _str(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (_str(n, i + 1));
}
