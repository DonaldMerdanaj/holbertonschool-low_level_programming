#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: base number
 * @y: power of number
 * Return: x to the powe of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * (_pow_recursion(x, y - 1)));
}
