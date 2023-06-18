#include <stdio.h>
/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if(alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	putchar('\n');
	return (0);
}
