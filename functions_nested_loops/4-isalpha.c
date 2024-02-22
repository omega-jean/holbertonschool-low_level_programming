/*
 * File: 4-isalpha.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
  * _isalpha - Check for alphabetic characters
  * @c: The character to be checked
  *
  * Return: 1 for alphabetic characters ans 0 for anything else
  */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
