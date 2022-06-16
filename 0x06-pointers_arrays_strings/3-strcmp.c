#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (diff == 0)
	{
		diff = *s1 - *s2;

		/* break if either string is empty*/
		if (*s1 == '\0' || *s2 == '\0')
			break;

		s1++;
		s2++;
	}

	return (diff);
}
