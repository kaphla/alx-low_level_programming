#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A  function that prints a buffer 10 byte a time.
 * @b: The buffer that will be printed out.
 * @size: bytes to be printed from buffer.
 */

void print_buffer(char *b, int size)
{
	int den;
	int dent;

	for (den = 0; den < size; den += 10)
	{
		printf("%08x: ", den);
		for (dent = 0; dent < 10; dent++)
		{
			if ((dent + den) >= size)
				printf(" ");

			else
				printf("%02x", *(b + dent + den));
			if ((dent % 2) != 0 && dent != 0)
				printf(" ");
		}
		for (dent = 0; dent < 10; dent++)
		{
			if ((dent + den) >= size)
				break;
			else if (*(b + dent + den) >= 31 && *(b + dent + den) <= 126)
				printf("%c", *(b + dent + den));
			else
				printf(".");
		}
		if (den >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
