#include "main.h"

void print_rev(char *s)
{
int i;
i = rev(s) - 1;
while (i >= 0)
{
write (1, (s+i), 1);
i--;
}
return (s);
}
