#include "main.h"
/**
 * print_alphabet_x10 - check the code
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int times;

	for (times = 0; times <= 11; times++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
