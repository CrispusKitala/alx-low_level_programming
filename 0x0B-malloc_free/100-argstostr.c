#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: Number of arguments
 * @av: Pointer to arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 *         otherwise NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, i = 0, j = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[c] = av[i][j];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
