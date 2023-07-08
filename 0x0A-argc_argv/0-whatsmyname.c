#include <stdio.h>

/**
 * main -  reusable function
 * @argc: count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int __attribute__ ((unused)) argc, char **argv)
{
	if (argc > 0)
	printf("%s \n", argv[0]);
	return (0);
}
