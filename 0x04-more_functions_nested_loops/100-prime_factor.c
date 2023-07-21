#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long input = 612852475143;

	int x;

	x = 2;

	while (input > 1)
	{
		while (input % x == 0)
		{
			input /= x;
		}
		x += 1;
	}
	printf("%d\n", x - 1);

	return (0);
}
