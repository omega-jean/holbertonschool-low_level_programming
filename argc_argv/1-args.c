#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line.
 *
 * @argc: number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
