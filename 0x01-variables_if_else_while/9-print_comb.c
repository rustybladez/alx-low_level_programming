#include <stdio.h>
/**
 * main - main fuction of the program
 * @i: characters to be printed
 * Return: Terminates the program
 */
int main(void)
{
	int i;
	for(i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar(57);
	return (0);
}
