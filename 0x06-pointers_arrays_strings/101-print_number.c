#include "main.h"

/**
 * print_number - print an integer using _putchar
 * @n: Integer to print
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
