#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numbers 0-14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
        char num;
        int times;

        for (times = 0; times <=10; times++)
        {
        for (num = 0; num <= 14; num++)
        {
		if (num >= 10)
		_putchar('1');
		_putchar(num %10 + '0');
	}
	_putchar('\n');
}
}
