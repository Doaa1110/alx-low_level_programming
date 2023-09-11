#include "main.h"

/**
 * _sqrt_recursion - function thatreturns the natural square root of a number
 *
 * @n: number
 * @i: root
 *
 * Return: number
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function that square root
 *
 * @n: number
 * @i: root
 *
 * Return: number
 */

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
