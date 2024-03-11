#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: NULL if str = NULL
 */


char *_strdup(char *str)
{
int i;
int strlen = 0;
char *s;
if (str == 0)
return (NULL);
while (*str++)
strlen++;
s = malloc(sizeof(char) * strlen);
if (s == 0)
return (NULL);
for (i = 0; i < strlen; i++)
s[i] = str[i];
s[strlen] = '\0';
return (s);
}
