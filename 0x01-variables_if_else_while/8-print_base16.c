#include <stdio.h>
/**
 * main - prints hexadecimal
 * from 0 to f
 * Return: 0 on success
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
