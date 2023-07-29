#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: Address of the integer array.
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int tmp, i, iteration;

	iteration = n / 2;

	for (i = 0; i < iteration; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
	}
}
