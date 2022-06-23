#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of a number
 * @num: Number to find square root of
 * @root: Root to test
 *
 * Return: Square root if number has natural square root
 *         -1 if number does not have natural square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: Number to return the square root of
 *
 *  Return: Natural square root of n
 *          -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
