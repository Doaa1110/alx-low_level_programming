#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program using the last digit
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;
	if (l_digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, l_digit);
	else if (l_digit == 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l_digit);
	else if (l_digit < 6 && Last_digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l_digit);
	return (0);
}
