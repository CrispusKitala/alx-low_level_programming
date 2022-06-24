#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String to search
 * @c: Character to locate in s
 *
 * Return: pointer to first occurrence of c in s
 *         otherwise NULL if c is absent
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
