#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - Entry point
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
	else if (n == 0)
		printf("last digit of %d and is 0\n", n, 1);
	else
		printf("%d is negative\n", n);

	return (0);
}
