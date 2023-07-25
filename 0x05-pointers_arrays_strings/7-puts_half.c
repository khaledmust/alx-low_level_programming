#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: Address of the input string.
 */
void puts_half(char *str)
{
	int i, j, n;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if ((i - 1) % 2 != 0)
	{
		n = (i - 2) / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}

	for (j = n + 1; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
