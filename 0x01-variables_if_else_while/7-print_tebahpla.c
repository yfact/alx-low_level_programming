#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse.
 * use putchar only and use it twice only.
 * 
 * Return: 0 on (Success)
 */
int main(void)
{
	char c = 'z';

	while(c >= 'a')
	{
	putchar(c);
	c--;
	}
	putchar('\n');
	return(0);
}
