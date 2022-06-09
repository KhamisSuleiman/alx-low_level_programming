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
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;
	printf("Last digit of %d is %d ", n, j);
	if (j > 5)
		printf("and is greater than 5\n");
	else if (j == 0)
		printf("and is 0\n");
	else if (j < 6 && j !=0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
