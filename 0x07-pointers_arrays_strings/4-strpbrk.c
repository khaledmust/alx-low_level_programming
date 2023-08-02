#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: Address of the main string.
 * @accept: Address of the acceptance string.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}

			j++;
		}

		j = 0;
		i++;
	}

	return ('\0');
}
