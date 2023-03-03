#include <stdio.h>

int main(void)
{
	int i;
	int j[5];
	int *k;

	j[2] = 1024;
	k = &i;

/*
 * main - magic
 *   - You are not allowed to use the variable a in your code
 *   - You are not allowed to modify the variable p
 *   - You can only write one statement
 *   - You are not allowed to code anything else than code
 */
	*(k + 5) = 98;
/*... this should print 98\n */
	printf("j[2] - %d\n", j[2]);
	return (0);
}
