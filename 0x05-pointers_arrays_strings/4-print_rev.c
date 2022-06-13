#include "main.h"

/**
 * print_rev - print a string in reverse
 * followed by a new line
 * @s: Input string
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
