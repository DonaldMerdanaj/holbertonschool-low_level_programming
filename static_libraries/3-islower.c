#include "main.h"
/**
 * _islower - it takes an argument c of value integer
 * @c: character
 * Return: 1 if the character
 * is in lowercase and returns 0 if not
 */
int _islower(int c)
{
if ((c >= 97) && c <= 122)
return (1);
else
return (0);
}
