#include <stdio.h>
/**
 * main - main function of the program
 * @ch: character to be printed
 * Return: Terminates the program
 */
int main(void)
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
