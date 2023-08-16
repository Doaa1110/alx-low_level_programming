#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
*/

void jack_bauer(void)
{
	int minute, h;

	for (h = 0; h <= 23; h++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((minute / 10)+ 48);
			_putchar((minute % 10)+ 48);
			_putchar('\n');
					}
					}
					}
