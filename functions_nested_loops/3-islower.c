/*
 * File: 3-islower.c
 * Auth: omega-jean
 */

#include "main.h"
#include <ctype.h>
#include <unistd.h>

/**
 * main - "fonction qui vérifie les caractères minuscule
 * Return: Always 0
 *
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
