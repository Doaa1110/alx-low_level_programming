#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program using print lphabet in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
