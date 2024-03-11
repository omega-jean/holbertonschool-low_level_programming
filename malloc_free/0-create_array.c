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
unsigned int i
if (size == 0 || size == '\0')
return ('\0');
char *array;
array = malloc(sizeof(char) * size);
for(i = 0; i < size; i++)
array[i] = c;
return array;
}
