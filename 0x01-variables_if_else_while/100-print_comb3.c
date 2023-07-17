#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: 0 program success.
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i - 48, k = 1; j < 9; j++, k++)
		{
			putchar(i);
			putchar(i + k);
			if (i < 56)
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
