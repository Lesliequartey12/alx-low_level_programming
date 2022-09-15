#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - print if the number is positive, zero or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero or negative"
 * Return: Always success
 */
int main(void)
{
	int n;
	int 1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1 = n % 10;

	if (n > 5)
		printf("last digit of %d is %d and is greater than 5\n", 1);
	else if (1 == 0)
		printf("last digit of %d and is 0\n", n, 1);
	else if (1 < 6)
		printf("last digit of %d is %d is less than 6 and not 0\n", n, 1);
	return (0);
}
