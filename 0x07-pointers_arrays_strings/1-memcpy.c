#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: Address of the destination.
 * @src: Address of the source.
 * @n: Size in bytes to be copied.
 *
 * Return: Adress of the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
