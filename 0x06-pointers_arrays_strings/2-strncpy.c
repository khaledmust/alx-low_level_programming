#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: Address of the destination string.
 * @src: Address of the source string.
 * @n: Size in bytes of the source string.
 *
 * Return: The address of the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = 0;
	}

	return (dest);
}
