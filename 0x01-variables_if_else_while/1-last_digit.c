#include <stdio.h>
#include <time.h>
/**
 *
 * File - 1-last_digit.c
 *
 * main - Prints the last digit
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
		printf("last digit of %d and is greater than 5\n", n, 1);
	else if (1 == 0)
		printf("last digit of %d and is 0\n", n, 1);
	else 
		printf("last digit of %d is %d is less than 6 and not 0\n", n, 1);
	return (0);
}
