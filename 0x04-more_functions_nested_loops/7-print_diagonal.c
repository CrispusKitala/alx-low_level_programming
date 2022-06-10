#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: Number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, l;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (l = 0; l < i; l++)
				_putchar(' ');
			_putchar('\\');

			if (i == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
