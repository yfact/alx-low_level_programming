#include "main.h"
/**
 * _sqrt - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer
 *
 * Return: natural square root on success
 * on error, -1 is returned
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
