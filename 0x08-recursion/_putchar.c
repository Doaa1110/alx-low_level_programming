#include <unistd.h>
#include  "main.h"

/**
 * main - entry point
 *
 * _putchar - write char c stdout
 * @c: The character to print
 *
 * Return: success 1.
 * error -1.
*/

int _putchar(char c)
{
        return (write(1, &c, 1));
}
