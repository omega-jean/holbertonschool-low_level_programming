/*
 * File: 1-isdigit.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
  * _isdigit - Checks a number (0 to 9).
  * @c: The character to be checked
  *
  * Return: 1 if it's a 0 digit for the rest
  */

int _isdigit(int c)
{
if (c >= 48 && <= 57)
return (1);
else
return (0);
}
