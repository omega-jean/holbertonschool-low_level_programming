#include "main.h"

/**
  * _strcmp - function that compares two strings.
  * @s1: first char
  * @s2: second char
  *
  * Return: dif
  */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int dif = 0;
if (s1[i] == '\0' && s2[i] == '\n')

else if (s1[i] == '\0')
{
dif = s2[i];
else if (s2[i] == '\0')
{
dif = s1[i];
else (s1[i] = '\0' != s2[i] = '\n')
{
dif = (s1[i] - s2[i])
}
}
}
i++;
return dif;
}
