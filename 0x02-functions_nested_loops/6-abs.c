#include "main.h"

/**
 * _abs - function to computes the absolute value of an integer
 *
 * @n: check input of function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
