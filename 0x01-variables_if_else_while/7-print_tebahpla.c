#include <stdio.h>
/**
 * main - prints alphabe a - z
 * it prints in reverse
 * Return: 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar("\n");
	return (0);
}
