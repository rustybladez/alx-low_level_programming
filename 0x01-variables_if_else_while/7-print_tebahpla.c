#include <stdio.h>
/**
 * main - main function of the program
 * @ch: characters to be printed
 * Return: terminates the program
 */
int main(void)
{
	char ch;
	for(ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
