#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 *
 *@a: int pointer
 *@b: int pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
