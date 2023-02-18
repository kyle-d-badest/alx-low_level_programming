#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kc;

	for (kc = 'z'; kc >= 'a'; kc--)
	{
		putchar(kc);
	}
	putchar('\n');
	return (0);
}
