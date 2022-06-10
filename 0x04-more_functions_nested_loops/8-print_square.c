#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: Size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, l;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (l = 0; l < size; l++)
				_putchar('#');

			if (i == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
