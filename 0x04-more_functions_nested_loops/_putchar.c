#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: char print
 *
 * Return: success 1
 * error -1 
 *
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
