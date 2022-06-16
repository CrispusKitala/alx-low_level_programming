#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: String to be copied to
 * @src: String to be copied from
 * @n: Maximum bytes from src
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
