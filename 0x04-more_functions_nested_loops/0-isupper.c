#include "main.h"

/**
 * _isupper -function that checks for uppercase character.
 *
 * @c: for check
 *
 * Return: 1 if upper, 0 if not upper
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
return (0);
}
