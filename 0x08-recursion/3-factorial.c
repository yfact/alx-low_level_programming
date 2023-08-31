#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number inputed
 *
 * Return: factorial of the number on success
 * on error, -1 is returned
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1);
}
