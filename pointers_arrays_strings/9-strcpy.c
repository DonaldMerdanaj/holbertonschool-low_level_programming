#include "main.h"
#include <string.h>
/**
 *_strcpy - function that copies the string pointed to by src
 *@dest: pointer to the copied string
 *@src: source of the string we want to copy
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = strlen(src);
	int i = 0;

	while (i <= length)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
