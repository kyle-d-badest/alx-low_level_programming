#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int kc;

	for (kc = 'a'; kc <= 'z'; kc++)
		putchar(kc);
	for (ch = 'A'; kc <= 'Z'; kc++)
		putchar(kc);
	putchar('\n');
	return (0);
}
