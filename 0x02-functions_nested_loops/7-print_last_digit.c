#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number whose last digit is to be printed
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n % 10);
	}
	else if (n > 0)
	{
		n = b % 10;
	}
	else
	{
		n = 0;
	}
	_putchar(n + '0');
	return (last digit)
}
