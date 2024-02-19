/*
 * 6-size.c
 * author : omega-jean 8897@holbertonstudents.com
 */

#include <stdio.h>

/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */

int main(void)
{

printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu bytes\n", sizeof(longlongType));
printf("Size of float: %zu bytes\n", sizeof(floatType));

return (0);
}
