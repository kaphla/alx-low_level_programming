#include "main.h"

/**
 * reverse_array - A  function that reverses an array of integers.
 * @a: An array
 * @n: number of elements inside the array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int den;
	int j;

	for (den = 0; den < n; den++)
	{
		n--;
		j = a[den];
		a[den] = a[n];
		a[n] = j;
	}
}
