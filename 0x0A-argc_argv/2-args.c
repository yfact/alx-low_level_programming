#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: Counts
 * @argv: array of pointers
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	}
	return (0);
}
