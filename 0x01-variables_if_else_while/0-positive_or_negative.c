#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - 0-positive_or_negative.c
 *
 * Return: Always success
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
