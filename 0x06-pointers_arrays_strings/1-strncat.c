#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: Address of the destination string.
 * @src: Address of the source string.
 * @n: Size in bytes to concatenate.
 *
 * Return: Address of the source string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
