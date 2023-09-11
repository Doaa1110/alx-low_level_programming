#include "main.h"
#include <stdio.h>

/**
 * l_number_i - function that  returns last number
 *
 * @s: pointer
 *
 * Return: number
 */
int is_palindrome(char *s);
int check_no(char *s, int n2, int n3, int n4);
int l_number_i(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += l_number_i(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - function that check string
 *
 * @s:pointer
 *
 * Return: number
 */

int is_palindrome(char *s)
{
	int i = l_number_i(s);

	return (check_no(s, 0, i - 1, i % 2));
}

/**
 * check_no - function that check string
 *
 * @s: pointer
 * @n2: rTl
 * @n3: lTr
 * @n4: number
 *
 * Return: number
 */

int check_no(char *s, int n2, int n3, int n4)
{
	if ((n2 == n3 && n4 != 0) || (n2 == n3 + 1 && n4 == 0))
		return (1);
	else if (s[n2] != s[n3])
		return (0);
	else
		return (check_no(s, n2 + 1, n3 - 1, n4));
}
