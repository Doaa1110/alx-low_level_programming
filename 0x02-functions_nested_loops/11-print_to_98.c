#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: number
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n < 98)
		printf("%d", n);
	{
		for (n = 0; n <= 98; n++)
			printf(',');
		printf(' ');
	}
}
