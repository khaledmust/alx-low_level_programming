#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: Size of the array.
 * @c: Initial value of the array.
 *
 * Return: Address of the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	char *created_array;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	created_array = malloc(sizeof(c) * size);

	if (created_array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		created_array[i] = c;
	}

	return (created_array);
}
