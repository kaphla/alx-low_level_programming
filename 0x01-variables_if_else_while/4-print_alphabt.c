#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * Main - A program that prints all alphabets except q and e
 * Return: Always (0)
 */

int main(void)

{
	char lower, e, q;

	e = 'e';
	q = 'q';

	for (lower = 'a';   lower <= 'b'; lower++)
	{
	if (lower != e && lower != q)
	putchar(lower);
	}
	putchar('\n');
	return (0);
}
