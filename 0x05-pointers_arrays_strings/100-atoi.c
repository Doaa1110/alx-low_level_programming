#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that  convert a string to an integer
 *
 *@s: char  pointer
 *
 * Return: dest
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * sign);
}
