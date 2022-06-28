#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: Size of the array to be created
 * @c: Char to initialize the array with
 *
 * Return: Pointer to the array, otherwise NULL if it fails or size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int index;

	if (array == NULL || size == 0)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
