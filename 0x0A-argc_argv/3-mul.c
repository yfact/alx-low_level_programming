#include <stdio.h>
#include <stdlib.h>

/**
 * main - write a program that multiplies two numbers
 * @argc: count argument
 * @argv: vector argument
 *
 * Return: 1 on success and error on failure.
 */
int main(int argc, char **argv)
{
	int product, error;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		error = 1;
		printf("%s\n", "Error");
		return error;
	}
	return (0);
}
