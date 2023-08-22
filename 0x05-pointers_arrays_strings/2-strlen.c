#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 *
 *@s: int pointer
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		++length;

	return (length);
}
