#include <stdio.h>
#include <time.h>
/**
 *
 * File - 1-last_digit.c
 *
 * Return: Always success
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1 = n % 10;

	if (1 > 5)
		printf("last digit of % and is greater than 5\n", n, 1);
	else if (1 == 0)
		printf("last digit of % and is 0\n, n, 1);
	return (0);
}

