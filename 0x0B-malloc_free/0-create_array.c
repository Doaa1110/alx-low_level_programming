#include "main.h"

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
	unsigned int j;

	i = malloc(sizeof(char) * size);
	if (size == 0 || i == 0)
		return (0);

	for (j = 0; j < size; j++)
		i[size] = c;
	return (i);
}
