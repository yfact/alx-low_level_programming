#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabets,min lowercase
 *
 * Return: void (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	char c;

	c = 'a';

	for(i = 0; i <= 10; i++)
	{
	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
	return;
	}
}
