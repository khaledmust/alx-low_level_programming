#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hours, minutes, tmp;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (hours < 10)
			{
				_putchar('0');
				_putchar(hours + 48);
				_putchar(58);
			}
			else
			{
				tmp = hours / 10;
				_putchar(tmp + 48);
				tmp = hours % 10;
				_putchar(tmp + 48);
				_putchar(58);
			}
			if (minutes < 10)
			{
				_putchar('0');
				_putchar(minutes + 48);
				_putchar('\n');
			}
			else
			{
				tmp = minutes / 10;
				_putchar(tmp + 48);
				tmp = minutes % 10;
				_putchar(tmp + 48);
				_putchar('\n');
			}
		}
	}
}
