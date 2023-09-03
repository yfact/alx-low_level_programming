#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: Counts
 * @argv: Pointer of array of pointers
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int x, y;

	y = 0;
	if (argc != 3)
	{
	printf("%s\n", "Error");
	y = 1;
	}
	else
	{
	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", x);
	}
	return (y);
}
