#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: char
 * @src: char
 *
 * Return: pointer to the resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int ch1, ch2;

	ch1 = 0;
	while (dest[ch1])
		ch1++;
	for (ch2 = 0; src[ch2]; ch2++)
		dest[ch1++] = src[ch2];

	return (dest);
}

