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
	int i;

	len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup_str[i] = str[i];

	dup_str[len] = '\0';

	return (dup_str);
}
