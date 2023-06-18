#include <stdio.h>
/**
 * main - print tall single numbers of base 10
 *
 * Description: print all the single number of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
