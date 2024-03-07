#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 *
 * @n: number
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (operation(n, 1);
}

/**
 * operation - make the operation to find the root.
 *
 * @n: number
 * @root: root of n
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
 */

int operation(int n, int root)
{
if (root * root == 0)
return (root);
else if (root * root < n)
return (operation (root + 1));
else
return (-1)
}
