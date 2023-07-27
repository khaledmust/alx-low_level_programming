#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: Address of the concatenated string.
 * @src: Address of the source string.
 *
 * Return: Address of the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}


	while (src[j] != '\0')
	{
		dest[i] = src[j];

		i++;
		j++;
	}

	return (dest);
}
