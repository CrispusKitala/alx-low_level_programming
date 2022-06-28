#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: String to copy
 *
 * Return: Pointer to new string
 * Otherwise NULL if str = NULL or insufficient memory
 */
char *_strdup(char *str)
{
	char *dup_str;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dup_str[index] = str[index];

	dup_str[len] = '\0';

	return (dup_str);
}
