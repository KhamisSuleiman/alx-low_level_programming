#include <stdio.h>
#include <time.h>
/**
 * main - Entry to the program
 * No args
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d ", "is positive");
	}
	else if (n==0)
	{
		printf("%d ", "is zero");
	}
	else if (n<0)
	{
		printf("%d ", "is negative");
	}
	else
	{
		printf("number is udefined");
	}
	return (0);
}
