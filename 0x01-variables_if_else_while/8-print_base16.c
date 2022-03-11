#include <stdio.h>
/**
 * main - main fuction of the program
 * Return: Terminates the program
 */
int main(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
