#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return: 1 on success
 * on error, -1 is returned and errorno is set appropriately
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
