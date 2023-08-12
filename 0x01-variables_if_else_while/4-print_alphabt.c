#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program using putchar function
 *
 * Return: Always0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
