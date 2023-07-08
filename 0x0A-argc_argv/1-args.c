#include <stdio.h>

/**
 * main - prints number arguments passed into it
 * @argc: count argument
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
