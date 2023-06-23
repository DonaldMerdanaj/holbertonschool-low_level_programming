#include "main.h"
/**
 * _isdigit - Checkf is the given argument is a digit or not
 * @c: integer parameter
 * Return: return 0 if the argument is not a number
 * return 1 if it is
 *
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
