#include "main.h"

/**
 * _sqrt1 - Makes possible to evaluate from 1 to n
 * @a: square root
 * @b: square of a
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt1(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt1(a, b + 1));
}
/**
 * _sqrt_recursion - returns the square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt1(n, 1));
}
