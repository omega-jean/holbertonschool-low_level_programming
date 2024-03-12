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
char *s;
unsigned int i, j, k, l;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
if (n > j)
n = j;
k = i + n;
s = malloc(k + 1);
if (s == NULL)
return (NULL);
for (l = 0; l < k; l++)
if (l < i)
s[l] = s1[l];
else
s[l] = s2[l - i];
s[l] = '\0';
return (s);
}
