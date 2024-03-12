#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _str_concat - function that concatenates two strings.
 *
 * @s1: pointer 1
 * @s2: pointer 2
 *
 * Return: always 0
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i, j, k, l;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
for (j = 0; s2[j] != '\0'; j++)
s = malloc(sizeof(char) * (i + j));
if (s == NULL)
{
free(s);
return (NULL);
}
for (k = 0; k < i; k++)
s[k] = s1[k];
l = j;
for (j = 0; j <= l; k++, j++)
s[k] = s2[j];
return (s);
}
