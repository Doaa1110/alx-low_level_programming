#include "main.h"
#include <stdio.h>

/**
 * void swap_int - pointer to an int as parameter and updates the value
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
