#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Description: This function prints the alphabet in lowercase,
 *              from 'a' to 'z', followed by a new line.
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
