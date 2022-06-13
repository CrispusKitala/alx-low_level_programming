#include "main.h"

/**
 * _puts - print a string followed by a new line
 * to stdout.
 * @str: Input string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
