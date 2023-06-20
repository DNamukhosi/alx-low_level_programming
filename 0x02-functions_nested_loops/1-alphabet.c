#include <stdio.h>
#include "main.h"
/**
 * main - print the letters of the alphabet in lowercase using  _putchar
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
	return (0);
}
