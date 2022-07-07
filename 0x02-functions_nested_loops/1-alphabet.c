#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		print_alphabet();
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
