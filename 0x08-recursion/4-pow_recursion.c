#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: base
 * @y: power
 *
 * Return: 1 on success
 * if power is less than 0, -1 is returned
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
