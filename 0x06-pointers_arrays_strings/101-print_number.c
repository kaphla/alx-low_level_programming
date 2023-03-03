#include "main.h"

/**
 * print_number -A function that prints an integer.
 * @n: The integer that will be printed.
*/

void print_number(int n)
{
	unsigned int den;

	den = n;

	if (n < 0)
	{
		_putchar('-');
		den = -den;
	}

	if ((den / 10) > 0)
		print_number(den / 10);

	_putchar((den % 10) + '0');
}
