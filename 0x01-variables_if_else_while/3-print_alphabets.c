#include <stdio.h>
/**
 * main - prints alphabets
 * lower case then capital
 * Return: 0 on success
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
