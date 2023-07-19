#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @i: Input integer.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i *= -1;
		_putchar((i % 10) + 48);
		return (i % 10);
	}
	else
	{
		_putchar((i % 10) + 48);
		return (i % 10);
	}
	_putchar('\n');
}
