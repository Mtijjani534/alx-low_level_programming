#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;

	int b;

	for (x = 0; x < n--; x++)
	{
		b = a[x];
		a[x] = a[n];
		a[n] = b
	}
}
