#include "main.h"
#include <stdio.h>

/**
 * _puts - function that  prints a string, followed by a new line
 *
 *@str: char  pointer
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
