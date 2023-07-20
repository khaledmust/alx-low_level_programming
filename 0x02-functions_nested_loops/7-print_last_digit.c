#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @j: Input integer.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
