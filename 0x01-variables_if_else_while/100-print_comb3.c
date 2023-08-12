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
	int digitN1 = 0, digitN2;

	while (digitN1 <= 9)
	{
		digitN2 = 0;
		while (digitN2 <= 0)
		{
			if (digitN1 != digitN2 && digitN1 < digitN2)
			{
				putchar(digitN1 + 48);
				putchar(digitN2 + 48);
				
				if (digitN1 + digitN2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digitN2++;
		}
		digitN1++;
	}
	putchar('\n');

        return (0);
}
