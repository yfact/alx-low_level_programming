#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints character
 *
 * Return: Always char c on (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
