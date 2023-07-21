#include "main.h"

/**
 * more_numbers - Prints numbers for 0 - 9, 14 times.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + 48);
		}
		_putchar('\n');
	}
}
