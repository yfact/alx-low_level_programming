#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0 on success,
 * on erorr 1 is returned
 */
int main(void)
{
	printf("%s\n", _FILE_);

	return (0);
}
