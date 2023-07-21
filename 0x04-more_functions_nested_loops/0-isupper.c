#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: Input character to be checked.
 *
 * Return: 1 - Character is uppercase. 0 - Character is something else.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
