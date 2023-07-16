#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: 0 program success.
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 113 || i == 101)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');

	return (0);
}
