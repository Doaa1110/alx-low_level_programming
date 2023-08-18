#include "main.h"

/**
 * more_numbers -function that prints prints 10 times the numbers
 * from 0 to 14
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int n, line, round;

	for (line = 0; line <= 9; line++)
	{
		for (round = 0; round <= 14; round++)
		{
			n = round;
	if (round > 9)
	{
	_putchar(1 + 48);
	n = round % 10;
	}
	_putchar(n + 48);
		}
	_putchar('\n');
}
}
