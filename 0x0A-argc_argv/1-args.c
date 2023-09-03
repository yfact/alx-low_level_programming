#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: Count
 * @argv: array of pointers
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
