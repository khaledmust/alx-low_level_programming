#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: 0 program success.
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(' ');
		}
	}

	return (0);
}
