#include <stdio.h>
#include <time.h>
/**
 * main - prints alphabets in lower case
 * it prints in lower case
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a';ch <= 'z';ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
