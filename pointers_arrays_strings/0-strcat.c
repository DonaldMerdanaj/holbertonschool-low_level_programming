#include "main.h"
#include <string.h>
/**
 * _strcat - main function
 * @dest: param
 * @src: param
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = strlen(dest);
	int src_length = strlen(src);
	int i;

	for (i = 0; i < src_length; i++)
	{
		*(dest + dest_length + i) = src[i];
	}

	return (dest);
}
