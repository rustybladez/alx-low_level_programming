#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	} else if(n > 98)
	{
		for(n = n; n > 98; n--)
		{
		printf("%d, ", n);
		}
	}
	printf("98\n");
}	
