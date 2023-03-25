#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success, the number of characters written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
