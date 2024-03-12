#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: pointer 1
 * @s2: pointer 2
 * @n:
 *
 * Return: always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k, l;
char *s;
if (s1 == 0)
return NULL;
if (s2 == 0)
return NULL;
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
if (n > s2)
n = s2
s = malloc(s + 1);
if (s == NULL)
return (NULL);
for (l = 0; l < s; l++)
if (l < i)
s[l] = s1[l]
else
s[l] = s2[l - s1];
s[l] = '\0';
return (s);
}
