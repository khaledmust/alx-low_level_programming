#include "main.h"
/**
 * _isdigit - checks for a digit
 *
 * @c: Input character.
 *
 * Return: 1 - Input is a digit. 0 - Input is something else.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
