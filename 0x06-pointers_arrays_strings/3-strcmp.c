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
	int i = 0, diff = 0;

	while (diff == 0)
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
		{
			break;
		}

		diff = s1[i] - s2[i];
		i++;
	}

	return (diff);
}
