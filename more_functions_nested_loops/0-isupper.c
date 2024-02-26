/*
 * File: 0-isupper.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
  * _isupper - Checks for the presence of uppercase characters
  * @c: The character to be checked
  *
  * Return: 1 for uppercase characters or 0 for everything else
  */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
