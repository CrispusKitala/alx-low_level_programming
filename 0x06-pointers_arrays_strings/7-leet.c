#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: String to be encoded
 *
 * Return: Encoded str
 */
char *leet(char *str)
{
	int i, j;
	char s1[] = "aeotl";
	char s2[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
		}
	}
	return (str);
}
