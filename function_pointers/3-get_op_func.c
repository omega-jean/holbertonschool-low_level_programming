#include "3-calc.h"

/**
 * get_op_func - This file should contain the function that selects the correct
 * function to perform the operation asked by the user.
 *
 * @s: its s
 *
 * Return: always 0
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (ops[i].op != NULL)
{
if (s[0] == ops[i].op[0])
return (ops[i].f);
}
return (NULL);
}
