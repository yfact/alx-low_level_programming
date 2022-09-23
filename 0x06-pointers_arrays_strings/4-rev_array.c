#include "main.h"

/**
 * reverse_array - reverses array content
 * @a : pointer to int params
 * @n : pointer to int params
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int p;

	i = 0;
	j = n - 1;

	while (i < j)
	{
	p = a[i];
	a[i] = a[j];
	a[j] = p;
	i++;
	j--;
	}
}
