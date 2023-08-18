#include "main.h"

/**
 * print_square - function that print square,
 * followed by a new line.
 *
 * @size: size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int r, c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
			_putchar('#');
		_putchar('\n');
	}
}
