#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers 0-9
 *
 * Return: void
 */
int _putchar(char i);

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
{
		_putchar(i);
}
	_putchar('\n');
}
