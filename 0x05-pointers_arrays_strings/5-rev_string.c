#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that  prints a string, followed by a new line
 *
 *@s: char  pointer
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int a, i;
	char t;

	for (a = 0; s[a] != '\0'; ++a)
		;

		for (i = 0; i < a / 2; i++)
		{
			t = s[i];
			s[i] = s[a - 1 - i];
			s[a - 1 - i] = t;
		}
}
