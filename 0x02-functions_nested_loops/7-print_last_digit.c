#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: integer
 * Return: integer
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar('0' + last);
	return (last);
}
