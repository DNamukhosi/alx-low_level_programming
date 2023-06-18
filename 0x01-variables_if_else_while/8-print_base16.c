#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Description: print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex;
	
	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);

	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	
	putchar('\n');
	return 0;
}

