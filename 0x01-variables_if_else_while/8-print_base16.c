#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowecase
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	i = '0';
	
	while (i <= '9')
	{
	putchar(i);
	i++;
	}

	i = 'a';

	while (i <= 'f')
	{
	putchar(i);
	i++;
	}

	putchar('\n');
	return (0);
}
