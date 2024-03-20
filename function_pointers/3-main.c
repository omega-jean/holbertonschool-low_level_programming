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
int num1;
int num2;
char *operator
if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);

if (*operator == '/' || *operator == '%')
{
if (num2 == 0)
{
printf("Error\n");
return (100);
}
}

if (get_op_func(operator) == NULL)
{
printf("Error\n");
return (99);
}

printf("%d\n", get_op_func(operator)(num1, num2));
return (0);
}
