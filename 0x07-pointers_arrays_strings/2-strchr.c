#include "main.h"
#include <stdlib.h>

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: Address of the string to be checked.
 * @c: The character to be searched.
 *
 * Return: Address of the first occurence of the character.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;

		if (s[i + 1] == '\0')
			return (NULL);

		i++;
	}
	return (&(s[i]));
}
