#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: Always success
 */
int main(int argc, char *argv)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n,);
	else
		printf("%d is negative\n", n);

	return (0);
}
