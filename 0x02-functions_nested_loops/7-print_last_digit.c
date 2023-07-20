#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @i: Input integer.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int j)
{
	int i;

	i = 0;
	if (j < 0)
	{
		i = j * -1;
		i = i % 10;
		_putchar(i + 48);
		return (i);
	}
	else
	{
		i = j % 10;
		_putchar(i + 48);
		return (i);
	}
}
