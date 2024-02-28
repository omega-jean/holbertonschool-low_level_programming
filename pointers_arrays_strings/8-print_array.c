#include "main.h"
#include <stdio.h>

/**
  * print_array - function that prints n elements of an array of integers.
  * @a: number
  * @n: is the number of elements of the array to be printed
  *
  * Return: the size of the string
  */

void print_array(int *a, int n)
{
int inc;
for (inc = 0; inc < n ; inc++)
{
if (inc != n - 1)
printf("%d, ", a[inc]);
else
printf("%d", a[inc]);
}
printf("\n");
}
