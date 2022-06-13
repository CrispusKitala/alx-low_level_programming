#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: Input string
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int count = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			count = (count * 10) + (*s - '0');

		else if (count > 0)
			break;

	} while (*s++);

	return (count * sign);
}
