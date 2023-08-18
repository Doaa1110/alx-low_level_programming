#include "main.h"

/**
 * _isdigit -function that checks for checks for a digit
 *
 * @c: for check
 *
 * Return: 1 if upper, 0 if not upper
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

