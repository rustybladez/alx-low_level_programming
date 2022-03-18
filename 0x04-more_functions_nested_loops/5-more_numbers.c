#include "main.h"

/**
 * more_numbers - prints numbers
 * Return: void
 */
void more_numbers(void)
{
	int times, num;

	for (times = 0; times < 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putcahr(i % 10 + '0');

		}
		_putchar('\n');
	}
}
