/*
 * 6-size.c
 * author : omega-jean 8897@holbertonstudents.com
 */

#include <stdio.h>

/**
 * main - Prints "the size of various types based on
 *        	the computer it is compiled and run on.
 *
 * Return: Always 0.
 */

int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of float: %zu bytes\n", sizeof(float));

return (0);
}
