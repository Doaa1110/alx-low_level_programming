#include "main.h"

/**
 * print_alphabet_x10 - function print alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int Line, c;

	for (Line = 0; Line <= 9; Line++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
