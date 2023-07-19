#include "main.h"

/**
 * print_sign: Prits the sign of a number.
 *
 * @n: The signed integer we want to check.
 *
 * Return: 1 Positive integer. 0 Zero integer. -1 Negative integer.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
	_putchar('\n');
}
