#include "main.h"

/**
  * reverse_array - function that reverses the content of an array of integers.
  * @a: a
  * @n: is the number of elements of the array
  *
  * Return: dif
  */

void reverse_array(int *a, int n)
{
int i = 0;
int e = 0;
int p;
for (i = n - 1; i >= n / 2; i--)
{
p = a[i];
a[i] = a[e];
a[e] = p;
e++;
}
}
