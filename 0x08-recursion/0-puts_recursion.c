#include "main.h"

/**
 * _puts_recursion - prints a new string followed by a new line
 * @s: string
 *
 * Return: on success 1
 * on error, -1 is returned and err no is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
