#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program using putchar function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digitN = 0;

	while (digitN <= 9)
	{
		putchar(digitN + '0');
		digitN++;
	}
	putchar('\n');

	return (0);
}

