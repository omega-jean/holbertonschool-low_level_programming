#include "function_pointer.h"
#include <stdio.h>

/**
 * op_add - function that add the number
 *
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - function that sub the number
 *
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - function that mult the number
 *
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - function that div the number
 *
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - function that mod the number
 *
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
