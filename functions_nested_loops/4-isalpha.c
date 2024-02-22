/*
 * File: 4-isalpha.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
