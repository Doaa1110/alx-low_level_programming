
#include <stdio.h>

/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: bytes
 *
 * Return: pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
