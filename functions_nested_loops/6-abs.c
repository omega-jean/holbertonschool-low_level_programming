/*
 * File: 6-abs.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int n)
{
if (n >= 0)
	return (n);
else
	return (-n);
}
