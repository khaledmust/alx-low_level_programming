#include "main.h"


/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int letter, iteration;

	for(iteration = 0; iteration < 10; iteration++)
	{
		for(letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
