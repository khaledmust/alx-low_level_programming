#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: Address of the first string.
 * @s2: Address of the second string.
 *
 * Return: Address of the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *strout;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1 = "";
		else if (s2 == NULL)
			s2 = "";
	}

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	strout = (char *)malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
		return (NULL);

	k = 0;

	while (s1[k] != '\0')
	{
		strout[k] = s1[k];
		k++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		strout[k] = s2[j];
		k++;
		j++;
	}
	strout[k + 1] = '\0';

	return (strout);
}
