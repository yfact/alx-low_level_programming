#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 *
 * Return: on sucess 1.
 * on error, -1 is returned and is set appropriately
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
