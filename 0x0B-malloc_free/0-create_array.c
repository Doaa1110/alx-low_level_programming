#include "main.h"
#include <stdib.h>

/**
 * *create_array - function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: arr size
 *  @c:char
 *  Return: pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *i;

	i = malloc(sizeof(char) * size);
	if (size == 0 || i == 0)
		return (0);

	while (size--)
		i[size] = c;
	return (i);
}
