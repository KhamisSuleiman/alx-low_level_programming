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
		printf(" is positive");
	}
	else if (n==0)
	{
		printf(" is zero");
	}
	else if (n<0)
	{
		printf(" is negative");
	}
	else
	{
		printf("number is udefined");
	}
	return (0);
}
