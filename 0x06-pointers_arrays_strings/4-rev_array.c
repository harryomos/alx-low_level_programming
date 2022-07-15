#include "main.h"

/**
 * reverse_array - function that reverse content of array
 * @a: array
 * @n: number of elements
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < (n / 2); x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
