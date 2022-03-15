#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: integer
 * Return: 1 (Successful)
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

