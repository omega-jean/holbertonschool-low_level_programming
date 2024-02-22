/*
 * File: 5-sign.c
 * Auth: omega-jean 8897@holbertonstudents.com
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}

}
