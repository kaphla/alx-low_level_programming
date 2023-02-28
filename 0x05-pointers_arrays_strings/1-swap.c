#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: absolutely nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
