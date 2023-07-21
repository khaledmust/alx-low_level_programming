#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size - 1; j > (i - 1); j--)
		{
			printf(" ");
		}

		for (k = 1; k <= i; k++)
		{
			printf("#");
		}
		printf("\n");
	}
}
