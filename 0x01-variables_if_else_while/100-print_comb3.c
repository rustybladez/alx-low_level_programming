#include <stdio.h>
/**
 * main - main function of the program
 * Return: 0 successfully
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i != j && i < j)
			{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
