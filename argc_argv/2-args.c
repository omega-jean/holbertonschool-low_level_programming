#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 *
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
putchar('\n');
return (0);
}
