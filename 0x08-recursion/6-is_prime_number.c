#include "main.h"

/**
 * is_prime - checks if input integer is a prime number
 * @n: Input integer
 * @i: Iterator
 *
 * Return: 1 if n is a prime number, otherwise return 0
 */
int is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if input integer is a prime number
 * @n: Input integer
 *
 * Return: 1 if n is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
