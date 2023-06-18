#include <stdio.h>
/**
 * main - print tall single numbers of base 10 separated by comma
 *
 * Description: print all the single number of base 10 separated by comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	
	for (num = 0; num <= 9; num++)
{
		putchar(num + '0');

	if (num != 9)
{
		putchar(',');
		putchar(' ');
}
}
	putchar('\n');
	return (0);
}
