#include <stdio.h>
/**
 * main - prints numbers 0-9 without using char or printf/puts
 * use putchar twice only
 *
 * Return: 0 on (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)

	putchar(d);
	putchar('\n');
	return (0);
}
