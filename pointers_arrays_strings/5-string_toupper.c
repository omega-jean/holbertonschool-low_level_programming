#include "main.h"

/**
  * string_toupper - function that changes all lowercase letters of a string to uppercase.
  * @a: string
  *
  * Return: dif
  */

char *string_toupper(char *a)
{
int i;
for (i = 0; str[i] != '\0'; i++)
if (a[i] >= 97 && a[i] <= 122)
a[i] = a[i] - 32;
return (a);
}
