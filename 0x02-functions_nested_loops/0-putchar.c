#include "main.h"
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	char myvar[] = "_putchar";
	int i = 0;

	while (myvar[i] != '\0')
	{
		_putcha(myvar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
