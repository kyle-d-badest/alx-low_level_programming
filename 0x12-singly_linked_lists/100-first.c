#include <stdio.h>

void kyle(void) __attribute__ ((constructor));

/**
 * kyle - prints a sentence before the main
 * function is executed
 */
void kyle(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
