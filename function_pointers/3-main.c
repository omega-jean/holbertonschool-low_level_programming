#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - check the code
 *
 * @argc: its argc
 * @argv: its argv
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
return (98);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);

if (argv[2][0] == '/' || argv[2][0] == '%')
{
if (num2 == 0)
{
printf("Error\n");
return (100);
}
}

int (*func_ptr)(int, int) = get_op_func(argv[2]);

if (func_ptr == NULL)
{
printf("Error\n");
return (99);
}

printf("%d\n", func_ptr(num1, num2));
return (0);
}
