#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assigns random number
 * it executes and prints number
 * Return: 0 on success
 */
int main(void)
{
	int n;

	printf("Last digit of %d is %d ", n, n % 10);
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is zero\n");
	else if (n % 10 < 6 && n % 10 !=0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
