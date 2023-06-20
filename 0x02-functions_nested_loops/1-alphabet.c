#include <stdio.h>
#include "main.h"
/**
 * main - print the letters of the alphabet in lowercase using  _putchar
 *
 * Description: print_alphabet print alphabet in lowercase
 *
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
