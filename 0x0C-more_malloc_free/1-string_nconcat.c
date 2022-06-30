#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Maximum bytes of s2 to be concatenated
 *
 * Return: Pointer to a newly allocated space in memory
 *         Otherwise, return NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dst;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	dst = malloc(sizeof(char) * (len + 1));

	if (dst == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		dst[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		dst[len++] = s2[index];

	dst[len] = '\0';

	return (dst);
}
