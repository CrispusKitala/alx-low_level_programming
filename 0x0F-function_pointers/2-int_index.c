#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Array of integers to search through
 * @size: Size of array
 * @cmp: Function used to compare values
 *
 * Return: First index for which cmp doesn't return 0
 *         Otherwise, If no element matches or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
