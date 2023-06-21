#include "main.h"
/**
 * print_last_digit - it takes an argument of
 * type int and returns its last digit
 * @n: integer
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
if (n < 0)
{
n = n % 10;
n = n * -1;
_putchar('0' + n);
return (n);
}
else
{
_putchar('0' + n % 10);
return (n % 10);
}
}
