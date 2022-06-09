#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: Number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	char l;

	for (l = 0; l < n; l++)
		_putchar('_');
	_putchar('\n');
}
