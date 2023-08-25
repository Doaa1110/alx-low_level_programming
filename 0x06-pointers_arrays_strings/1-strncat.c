#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: char
 * @src: char
 * @n: bytes
 *
 * Return: pointer to the resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int ch, i;

	ch = 0;
	while (dest[ch])
		ch++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[ch + i] = src[i];
	dest[ch + i];

	return (dest);
}

