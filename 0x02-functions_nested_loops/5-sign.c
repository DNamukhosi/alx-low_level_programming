#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: n is an integer
 *
 * Return: 1 (if positive), 0 (if zero), -1 (if negative)
 */
int print_sign(int n)
{
	if (n > 0)
{
	return (1);
	_putchar('+');
}
	else if (n < 0)
{
	return (-1);
	_putchar('-');
}
	else
{
	_putchar('0');
	return (0);
	}
}
