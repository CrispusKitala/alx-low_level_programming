#include "main.h"

/**
 * puts2 - print every other character of a string
 * start with the first character followed by a new line
 * @str: Input string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar ('\n');
}
