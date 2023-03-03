#include <stdio.h>

int main(void)
{
	int i;
	int j[5];
	int *k;

	j[2] = 1024;
	k = &i;

/*
 * main - one line of code that prints a[2] = 98
 *   - You are not allowed to use the variable a in your new line of code
 *   - You are not allowed to modify the variable p
 *   - You can only write one statement
 *   - You are not allowed to code anything else than the line of code
 */
	*(k + 5) = 98;
	/*... this now prints 98\n */
	printf("j[2] - %d\n", k[2]);
	return (0);
}
