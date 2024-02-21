/*
 * File: 3-islower.c
 * Auth: omega-jean
 */

#include "main.h"
#include <ctype.h>
#include <unistd.h>

/**
  * _islower - Checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
