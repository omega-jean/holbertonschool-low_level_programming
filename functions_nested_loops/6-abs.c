/*
 * File: 6-abs.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
  * print_sign - function that computes the absolute value of an integer.
  * @n : The number of which the sign will be printed.
  *
  * Return: return n if n is >= 0
  *         return -n if n is < 0
  */

int _abs(int n)
{
if (n >= 0)
	return (n);
else
	return (-n);
}
