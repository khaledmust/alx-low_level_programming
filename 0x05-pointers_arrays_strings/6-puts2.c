#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 *
 * @str: Address of the string.
 */
void puts2(char *str)
{
	int i, j;

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
