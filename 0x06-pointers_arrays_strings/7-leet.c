#include "main.h"

/**
 * leet - function that capitalizes all words of a string
 * letters of a string to uppercase
 *
 * @ch: char
 *
 * Return: string
 *
*/

char *leet(char *ch)
{
	char *c = ch;
	char i[] = {'A', 'E', 'O', 'T', 'L'};
	int v[] = {4, 3, 0, 7, 1};
	unsigned int j;

	while (*ch)
	{
		for (j = 0; j < sizeof(i) / sizeof(char); j++)
		{
			if (*ch == i[j] || *ch == i[j] + 32)
			{
				*ch = 48 + value[j];
			}
		}
		ch++;
	}
	return (c);
}
