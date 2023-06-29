#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two trings
 * @dest: param
 * @src: param
 * @n: n bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		*(dest + dest_length + i) = src[i];
	}
	return (dest);
}
