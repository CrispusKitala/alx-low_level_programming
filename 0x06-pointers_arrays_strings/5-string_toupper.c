#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: Strin to change
 *
 * Return: Pointer to changed string
 */
char *string_toupper(char *str)
{
	char *new_str = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;

		str++;
	}
	return (new_str);
}
