#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - A program that prints alphabets in lowercase and uppercase
 * Return: Always (0)
 */

int main(void)

{
	char lower;

	for (lower = 'a'; lower <= 'b'; lower++)
	putchar(lower);

	for (lower = 'A'; lower <= 'B'; lower++)
	putchar(lower);
	putchar('\n');

	return (0);
}
