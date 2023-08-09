#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: Address of the string to be copied.
 *
 * Return: Address of the newly created array.
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strout = (char *) malloc(sizeof(char) * i);

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		strout[j] = str[j];
	}

	return (strout);
}
