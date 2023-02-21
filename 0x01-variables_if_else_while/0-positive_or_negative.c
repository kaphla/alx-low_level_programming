#include <stdio.h>
#include <time.h>
/**
 * main - A program to assign a random numbaer to variable
 * A program that print wheather a number is stored in variable n is positive or negative
 * Return: Always 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
