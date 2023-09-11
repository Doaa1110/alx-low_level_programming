#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that  returns 1 or 0
 *
 * @n: number
 * @n2:number
 *
 * Return: number
 */
int check_p_n(int n, int n2);
int is_prime_number(int n)
{
	return (check_p_n(n, 2));
}

/**
 * check_p_n - function that check number
 *
 * @n: number
 * @n2: number
 *
 * Return: number
 */

int check_p_n(int n, int n2)
{
	if (n2 >= n && n > 1)
		return (1);
	else if (n % n2 == 0 || n <= 1)
		return (0);
	else
		return (check_p_n(n, n2 + 1));
}
