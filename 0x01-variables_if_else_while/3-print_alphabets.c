#include <stdio.h>

/**
 *  * main - entry point
 *  *
 *  * Description: A C program using putchar function
 *  *
 *  * Return: Always 0 (Success)
*/

int main(void)
{
	char c1 = 'a';
	char c2 = 'A';

	while (c1 <= 'z')
	{
		putchar(c1);
		c1++;
	}
	while (c2 <= 'Z')
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');

	return (0);
}
