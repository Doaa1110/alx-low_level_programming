
#include <stdio.h>

/**
 * _strchr - Write a function that locates a char in string
 * @s: pointer
 * @c: char
 *
 * Return: pointer c or null if the pointer not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	return ('\0');
}
