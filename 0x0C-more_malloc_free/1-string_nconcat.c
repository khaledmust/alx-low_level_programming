#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int is1, is2, lisout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (is1 = 0; s1[is1] != '\0'; is1++)
		;

	for (is2 = 0; s2[is2] != '\0'; is2++)
		;

	if (n > is2)
		n = is2;

	isout = is1 + n;

	sout = malloc(isout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < isout; i++)
		if (i < is1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - is1];

	sout[i] = '\0';

	return (sout);
}
