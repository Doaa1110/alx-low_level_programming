#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 * of integers, followed by a new line
 *
 *@a: char  pointer
 *@n: char pointer
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
