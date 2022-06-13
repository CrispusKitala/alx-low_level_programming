#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:String to get length of
 *
 * Return: Lenght of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
