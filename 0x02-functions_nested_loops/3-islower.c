#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * Return: 1 for lowercase character. 0 for anything else.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
