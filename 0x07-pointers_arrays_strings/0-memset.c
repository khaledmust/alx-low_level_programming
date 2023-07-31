#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: Address to be filled with constant bytes.
 * @b: Constant bytes to fill the address.
 * @n: The bytes to be filled.
 *
 * Return: Address of the memory address that was filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
