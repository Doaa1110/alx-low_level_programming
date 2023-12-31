#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints every other character of a string,
 *  starting with the first character, followed by a new line
 *
 *@str: char  pointer
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
