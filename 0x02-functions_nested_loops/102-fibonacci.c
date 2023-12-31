#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0.
*/

int main(void)
{
	int n;
	long f1, f2, sum;

	f1 = 0;
	f2 = 1;

	for (n = 0; n < 50; n++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

	f1 = f2;
	f2 = sum;
	if (n == 49)
		printf("\n");
	else
		printf(", ");
	}
	return (0);
}
