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
		i %= 10;
		_putchar(i + 48);
		return (i);
	}
	else
	{
		i %= 10;
		_putchar(i + 48);
		return (i);
	}
	_putchar('\n');
}
