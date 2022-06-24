#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if the program receives two arguments
 *         1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
