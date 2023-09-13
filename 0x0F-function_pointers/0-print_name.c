#include "function_pointers.h"

/**
 * print_name - prints aname
 * @name: name to print
 * @f: function that prints name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
	f(name);
}
