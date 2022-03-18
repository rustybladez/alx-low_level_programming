#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: character
 * Return: void
 */

void print_diagonal(int n)
{
	int line, gap;

	if (n > 0)
	{

	for (line = 0; line < n; line++)
	{
		for (gap = 0; gap < line; gap++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
