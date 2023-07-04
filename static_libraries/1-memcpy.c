#include "main.h"

/**
 * _memcpy -  function that copies memory data
 * @dest: where the copied memory goes
 * @src: source of the memory being copied
 * @n: n bytes to be copied
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		dest[i] = src[i];
	return (dest);
}
