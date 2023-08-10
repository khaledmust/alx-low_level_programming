#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguements.
 *
 * Return: 0 - Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
