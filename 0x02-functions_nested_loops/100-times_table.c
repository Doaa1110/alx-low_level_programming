#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints the n times table, starting with 0
 *
 * @n: number
 *
 */

void print_times_table(int n)
{
	int num, round, t;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
		_putchar(48);
		for (t = 1; t <= n; ++t)
		{
			_putchar(',');
			_putchar(' ');

			round = num * t;
			if (round <= 9)
				_putchar(' ');
			if (round <= 99)
				_putchar(' ');
			if (round >= 100)
			{
				_putchar((round / 100) + 48);
				_putchar((round / 10) % 10 + 48);
			}
			else if (round <= 99 && round >= 10)
				_putchar((round / 10) + 48);
			_putchar((round % 10) + 48);
		}
		_putchar('\n');
		}
	}
}
