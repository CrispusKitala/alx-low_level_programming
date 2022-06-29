#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: NULL on failure
 * Otherwise pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *dst;
	int index, dst_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	dst = malloc(sizeof(char) * len);

	if (dst == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		dst[dst_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		dst[dst_index++] = s2[index];

	return (dst);
}
