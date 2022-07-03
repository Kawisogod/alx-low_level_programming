#include <stdio.h>

/**
 * main - prints hexadecimal base 0123456789abcdef, using putchar
 * Return: Always 0 (success)
*/

int main(void)
{
	int n = '0';

	int a_to_f = 'a';

	while (n <= '9') /*print a-f to finish hexbase*/
	{
		putchar(a_to_f);
		a_to_f++;
	}

	putchar('\n');

	return (0);
}
