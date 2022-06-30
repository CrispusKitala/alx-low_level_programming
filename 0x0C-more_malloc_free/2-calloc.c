#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: Number of elements in array
 * @size: Byte size of each array
 *
 * Return: NULL if nmemb or size is 0
 *         Otherwise, pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (index = 0; index < nmemb * size; index++)
		*(memory + index) = 0;
	return ((void *)memory);
}
