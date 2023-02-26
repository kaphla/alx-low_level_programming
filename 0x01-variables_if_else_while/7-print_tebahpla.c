#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 * Return: Always (0)
 */

int main(void)
{
	char lower;

	for (lower = 'b'; lower >= 'a'; lower--)
	putchar(lower);
putchar('\n');
return (0);
}
