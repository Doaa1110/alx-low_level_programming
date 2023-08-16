#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
*/

void print_alphabet(void)
{
	char Letters;

	for (Letters = 'a' ; Letters <= 'z'; Letters++)
		_putchar(Letters);

	_putchar('\n');
}
