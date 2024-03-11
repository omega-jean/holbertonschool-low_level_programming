#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @c: character
 * @size: integer
 *
 * Return: NULL if size = 0 and a pointer to the array,
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
if (size == 0 || size == NULL)
return NULL;
for (unsigned int i = 0; i < size; i++)
{
size[i] = c;
}
return size;
}
