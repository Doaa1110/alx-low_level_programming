#include "main.h"

/**
 * times_table - function that prints the 9 times
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int n, tt, round;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (tt = 1; tt <= 9; tt++)
		{
			_putchar(',');
			_putchar(' ');	
			round = n * tt;
			if (round <= 9)
				_putchar(' ');
			else
				_putchar((round % 10) + 48);
			 _putchar((round % 10) + 48);
		}
		_putchar('\n');
return (0);
	}
