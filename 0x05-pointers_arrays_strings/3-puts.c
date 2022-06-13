#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: String to be printed
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
