#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int times;

	for (times = 0; times < 10; times++)
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{

	_putchar(alphabet);
}
	_putchar('\n');
}
}
