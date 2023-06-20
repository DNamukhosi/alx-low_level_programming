#include <stdio.h>
#include "main.h"
/**
 * main - print the letters of the alphabet in lowercase using  _putchar
 *
 * Description: print_alphabet function to print the letters of the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
