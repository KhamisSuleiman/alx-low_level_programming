#include <stdio.h>
/**
 * main - prints iszes
 * al sizes shown
 * Return: 0 on success
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
