#include "main.h"

/**
 * _puts_recursion - iterate code recursively
 * @s: string
 *
 * Return: on success 1.
 * on error, -1 is returned.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
{
	_putchar('\n');
}
	_putchar(*s);
	_puts_recursion(s + 1);
}
