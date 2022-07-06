#include <main.h>
#include <time>
#include <stdlib.h>

/**
 * main - tests function that prints if integer is positive or negative
 * Return: Always 0 (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%i is positive\n", n);
}

else if (n == 0)
{
	printf("%i is zero\n", n);
}

else if (n < 0)
{
	printf("%i is negative\n", n);
}
	return (0);
}
