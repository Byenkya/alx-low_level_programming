#include <stdio.h>
/**
* printFibonacciNumbers - prints fibbo numbers from 1-98
* @n: An input integer valuevoid printFibonacciNumbers(int n)
* Return: Nothing
*/

void printFibonacciNumbers(int n)
{
	int f1 = 1, f2 = 2, i;

	int next;

	if (n < 1)
		return;

	printf("%d, ",  f1);

	for (i = 1; i < n; i++)
	{
		printf("%d, ", f2);

		next = f1 + f2;

		f1 = f2;
		f2 = next;
	}
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	printFibonacciNumbers(98);

	return (0);

}

