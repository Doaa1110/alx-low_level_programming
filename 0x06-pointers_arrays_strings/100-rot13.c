#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 *
 * @ch: char
 *
 * Return: string
 *
*/

char *rot13(char *ch)
{
	int i;
	char r[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char R[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = ch;

	while (*ch)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*ch == r[i])
			{
				*ch = R[i];
				break;
			}
		}
		ch++;
	}
	return (p);
}
