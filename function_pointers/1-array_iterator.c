#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 *
 * @array: its a array
 * @size: its size
 * @action: its action
 *
 * Return: Always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
