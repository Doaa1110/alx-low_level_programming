#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program using printf singil digit number function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digitN = 0;


	while (digitN <= 9)
	{
		putchar(digitN + 48);
		if (digitN != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digitN++;
	}
	putchar('\n');

	return (0);
}
