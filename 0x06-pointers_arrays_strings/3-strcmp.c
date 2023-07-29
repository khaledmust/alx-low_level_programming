#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: Address of the first string.
 * @s2: Address of the second string.
 *
 * Return: 0 - If the two strings are similar, -ve or +ve
 */
int _strcmp(char *s1, char *s2)
{
	if (s1[0] == s2[0])
	{
		return (0);
	}
	else
	{
		return (s1[0] - s2[0]);
	}
}
