#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - A program that prints all single digit numbers of base 10 
 * Return: Always (0)
 */

int main(void)

{

	int k;
	
	for (k = '0'; k <= '9'; k++)
	putchar(k);
	putchar('\n');
	
	return (0);
}	
