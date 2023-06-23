#include "main.h"

/**
 * _isupper - Checkf is the given argument is in uppercase or not
 * @c: integer parameter for a given character
 * Return: return 0 if the character is in uppercase
 * return 1 if its not
 *
 */
int _isupper(int c)
{
	if (c > 65 && c < 91)
	return (1);
	else
		return (0);
}
