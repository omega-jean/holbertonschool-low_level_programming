#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 *
 * @name: name of the person
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int res = 0;
if (res == 0 || size < 0)
{
return (-1);
}
for (i =0; i < size; i++)
res = (cmp(array[i]));
}
