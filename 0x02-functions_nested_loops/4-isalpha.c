#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c < 65 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
