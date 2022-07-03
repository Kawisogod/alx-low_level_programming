#include <stdio.h>

/**
 * main - print lowercase and uppercase a-zA-Z using pitchar
 * Return: Always 0 (success)
*/

int main(void)
{
char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*print lowercases a-z*/
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z') /*print uppercases A-Z*/
	{
		putchar(upper);
	upper++;
	}

	putchar('\n');
	return (0);
}
