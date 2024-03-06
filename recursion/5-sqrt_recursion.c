#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: number
 *
 * Return: If n does not have a natural square root, the function should return -1
 */

int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
  * check_prime - Check if number is prime
  * @n: the number to be checked
  * @i: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */

int str(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (check_prime(n, i + 1));
}
