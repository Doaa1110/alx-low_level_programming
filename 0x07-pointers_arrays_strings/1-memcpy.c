
#include <stdio.h>

/**
 * _memcpy - Write a function that copies memory area
 * @dest: memory area
 * @src: from memory area
 * @n: byte
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
