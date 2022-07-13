#include <stdio>
#define stopvar 100

/**
 * main - main function
 * checks through numbers from 1 - 100
 * and print number if it is not a multiple of 3 or 5
 * print Fizz if its a multiple of 3
 * Buzz if its a multiple of 5
 * and FizzBuzz if its both a multiple of 3 and 5
 *
 * created by: sanctus-peter
 * cc: 7th july, 2022
 *
 * Return: 0 if successful
 */
int main(void)
{
int ii = 1;

	do {
		if ((ii % 3 == 0) && (ii % 5 == 0))
			printf("FizzBuzz");
		else if (ii % 3 == 0)
			printf("Fizz");
		else if (ii % 5 == 0)
			printf("Buzz");
		else
			printf("%d", ii);
		if (ii != stopVar)
			printf(" ");
		ii++;
		} while (ii < stopVar + 1);
	printf("\n");

	return (0);
}
