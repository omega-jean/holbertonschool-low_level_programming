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

int main(int argc, char **argv)
{
int num1;
int num2;
int (*op)(int , int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}


num1 = atoi(argv[1]);
op = get_op_func(argv[2]);
num2 = atoi(argv[3]);

if (op == '/' || op == '%')
{
if (num2 == 0)
{
printf("Error\n");
exit(100);
}
}

if (op == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

printf("%d\n", op(num1, num2));
return (0);

}
