#include "main.h"

/**
 * print_alphabet - print alphabets in lower case
 *
 * Return: Always 0 on (Success)
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
}
