#include "main.h"

/**
 * print_diagonal - function that draws a diagonal
 * line on the terminal.
 *
 * @n: number
*/

void print_diagonal(int n)
{
	int space, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (d = 1; d <= n; d++)
		{
			for (space = 1; space <= n; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
