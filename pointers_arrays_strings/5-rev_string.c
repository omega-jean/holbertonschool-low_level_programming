#include "main.h"

void rev_string(char *s)
{
char str[100], rev[100];
int a = strlen(str);;
int b = 0;
int c = 0;
rev[a] = '\0';
for (b = a -1; b >= 0; b--)
{
rev[c++] = str[b];
}
rev[b] = '\0';
return (0);
}
