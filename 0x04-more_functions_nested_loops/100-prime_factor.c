#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long int, n = 612852475143;

	for (int = 2; int <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
